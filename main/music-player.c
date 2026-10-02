#include <stdio.h>

#include "esp_timer.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "driver/ledc.h"
#include "notes.h"
#include "melody.h"

#define BUZZER_GPIO 18
#define TIMER_FREQ 2700
#define TIMER LEDC_TIMER_0
#define LEDC_MODE LEDC_LOW_SPEED_MODE
#define CHANNEL LEDC_CHANNEL_0
#define MELODY_LEN (sizeof(melody) / sizeof(note_t))
#define TICK_PERIOD (50 * 1000)

static void setup_timer() {
    const ledc_timer_config_t timer_conf = {
        .speed_mode = LEDC_LOW_SPEED_MODE,
        .duty_resolution = LEDC_TIMER_10_BIT,
        .timer_num = TIMER,
        .freq_hz = TIMER_FREQ,
        .clk_cfg = LEDC_AUTO_CLK,
    };

    ESP_ERROR_CHECK(ledc_timer_config(&timer_conf));
}

static void setup_channel() {
    const ledc_channel_config_t channel_config = {
        .speed_mode = LEDC_LOW_SPEED_MODE,
        .channel = CHANNEL,
        .timer_sel = TIMER,
        .gpio_num = BUZZER_GPIO,
        .duty = 0,
        .hpoint = 0,
    };

    ESP_ERROR_CHECK(ledc_channel_config(&channel_config));
}

static void setup() {
    setup_timer();
    setup_channel();
}

static void tone_on(const uint16_t freq)
{
    ledc_set_freq(LEDC_MODE, TIMER, freq);
    ledc_set_duty(LEDC_MODE, CHANNEL, 512);
    ledc_update_duty(LEDC_MODE, CHANNEL);
}

static void tone_off()
{
    ledc_set_duty(LEDC_MODE, CHANNEL, 0);
    ledc_update_duty(LEDC_MODE, CHANNEL);
}

void step() {
    if (MELODY_LEN == 0) {
        return;
    }

    static size_t current_note = 0;
    static uint16_t tick_count = 0;

    const note_t *note = &melody[current_note];
    uint16_t play_ticks = note->duration * 90 / 100;
    if (play_ticks == 0 && note->duration > 0) {
        play_ticks = 1;
    }

    if (tick_count == 0) {
        if (note->freq != 0) {
            tone_on(note->freq);
        } else {
            tone_off();
        }
    } else if (tick_count >= play_ticks) {
        tone_off();
    }

    tick_count++;
    if (tick_count >= note->duration) {
        tick_count = 0;
        current_note = (current_note + 1) % MELODY_LEN;
    }
}

void app_main()
{
    setup();
    uint64_t last_updated = 0;

    while (1) {
        const uint64_t now = esp_timer_get_time();
        if (now - last_updated >= TICK_PERIOD) {
            last_updated = now;
            step();
        }
        vTaskDelay(pdMS_TO_TICKS(10));
    }
}