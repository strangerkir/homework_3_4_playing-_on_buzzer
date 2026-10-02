# ESP32 Music Player

A lightweight, non-blocking buzzer music player, playing **"Carol of the Bells" (Щедрик)** by Mykola Leontovych
It was created for ESP32 using the ESP-IDF framework.

---

## Features
- Easy to add new melodies
- Non-blocking

---

### Adding or Editing Melodies
Modify `main/melody.h` to define notes and durations using constants from `main/notes.h`:
```c
static const note_t melody[] = {
    {AS4, D_QUARTER},
    {A4,  D_EIGHTH},
    {PAUSE, D_EIGHTH},
    // ...
};
```
