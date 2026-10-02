#pragma once

#include "notes.h"

#define D_EIGHTH 4
#define D_QUARTER 8
#define D_HALF 16
#define D_DOT_HALF 24

// М. Леонтович - Щедрик (Carol of the Bells)
static const note_t melody[] = {
    // Intro - 4 bars of the iconic 4-note motif
    {AS4, D_QUARTER},
    {A4, D_EIGHTH},
    {AS4, D_EIGHTH},
    {G4, D_QUARTER},
    {AS4, D_QUARTER},
    {A4, D_EIGHTH},
    {AS4, D_EIGHTH},
    {G4, D_QUARTER},
    {AS4, D_QUARTER},
    {A4, D_EIGHTH},
    {AS4, D_EIGHTH},
    {G4, D_QUARTER},
    {AS4, D_QUARTER},
    {A4, D_EIGHTH},
    {AS4, D_EIGHTH},
    {G4, D_QUARTER},

    // Theme (Hark how the bells, sweet silver bells...) - 4 bars
    {AS4, D_QUARTER},
    {A4, D_EIGHTH},
    {AS4, D_EIGHTH},
    {G4, D_QUARTER},
    {AS4, D_QUARTER},
    {A4, D_EIGHTH},
    {AS4, D_EIGHTH},
    {G4, D_QUARTER},
    {AS4, D_QUARTER},
    {A4, D_EIGHTH},
    {AS4, D_EIGHTH},
    {G4, D_QUARTER},
    {AS4, D_QUARTER},
    {A4, D_EIGHTH},
    {AS4, D_EIGHTH},
    {G4, D_QUARTER},

    // Higher melody (Christmas is here, bringing good cheer...) - 4 bars
    {D5, D_QUARTER},
    {C5, D_EIGHTH},
    {D5, D_EIGHTH},
    {AS4, D_QUARTER},
    {D5, D_QUARTER},
    {C5, D_EIGHTH},
    {D5, D_EIGHTH},
    {AS4, D_QUARTER},
    {D5, D_QUARTER},
    {C5, D_EIGHTH},
    {D5, D_EIGHTH},
    {AS4, D_QUARTER},
    {D5, D_QUARTER},
    {C5, D_EIGHTH},
    {D5, D_EIGHTH},
    {AS4, D_QUARTER},

    // Fast eighth-notes climax (One seems to hear words of good cheer...) - 4
    // bars
    {D5, D_EIGHTH},
    {D5, D_EIGHTH},
    {D5, D_EIGHTH},
    {C5, D_EIGHTH},
    {AS4, D_EIGHTH},
    {A4, D_EIGHTH},
    {G4, D_EIGHTH},
    {AS4, D_EIGHTH},
    {C5, D_EIGHTH},
    {D5, D_EIGHTH},
    {C5, D_EIGHTH},
    {AS4, D_EIGHTH},
    {D5, D_EIGHTH},
    {D5, D_EIGHTH},
    {D5, D_EIGHTH},
    {C5, D_EIGHTH},
    {AS4, D_EIGHTH},
    {A4, D_EIGHTH},
    {G4, D_EIGHTH},
    {AS4, D_EIGHTH},
    {C5, D_EIGHTH},
    {D5, D_EIGHTH},
    {C5, D_EIGHTH},
    {AS4, D_EIGHTH},

    // Bell chimes (Ding, dong, ding, dong...) - 4 bars
    {G4, D_QUARTER},
    {G4, D_QUARTER},
    {G4, D_QUARTER},
    {F4, D_QUARTER},
    {F4, D_QUARTER},
    {F4, D_QUARTER},
    {DS4, D_QUARTER},
    {DS4, D_QUARTER},
    {DS4, D_QUARTER},
    {D4, D_QUARTER},
    {D4, D_QUARTER},
    {D4, D_QUARTER},

    // Return to main motif (Merry, merry, merry, merry Christmas...) - 4 bars
    {AS4, D_QUARTER},
    {A4, D_EIGHTH},
    {AS4, D_EIGHTH},
    {G4, D_QUARTER},
    {AS4, D_QUARTER},
    {A4, D_EIGHTH},
    {AS4, D_EIGHTH},
    {G4, D_QUARTER},
    {AS4, D_QUARTER},
    {A4, D_EIGHTH},
    {AS4, D_EIGHTH},
    {G4, D_QUARTER},
    {AS4, D_QUARTER},
    {A4, D_EIGHTH},
    {AS4, D_EIGHTH},
    {G4, D_QUARTER},

    // Outro / Final resolution - 3 bars
    {AS4, D_QUARTER},
    {A4, D_EIGHTH},
    {AS4, D_EIGHTH},
    {G4, D_QUARTER},
    {AS4, D_QUARTER},
    {A4, D_EIGHTH},
    {AS4, D_EIGHTH},
    {G4, D_QUARTER},
    {G4, D_DOT_HALF}};
