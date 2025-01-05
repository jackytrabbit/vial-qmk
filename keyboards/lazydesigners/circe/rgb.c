#ifdef RGB_MATRIX_ENABLE
// LED index
// 4, 3, 2, 1, 0

led_config_t g_led_config = {
    // Key Matrix to LED Index
    {
         {   0,    0,   1,   1,   2,   2,   2,   3,   3,   3,    4,     4,    4         },
         {   0,    0,   1,   1,   2,   2,   2,   3,   3,   3,    4,     4,    4         },
         {   0,    0,   1,   1,   2,   2,   2,   3,   3,   4,           4,      4       },
         {   0,    1,   1,            2,   3,                  4,    4,     4,  4,  4   }
    },

    // LED Index to Physical Positon
    {
        { 0   ,  0  },
        { 56  , 16  },
        { 112 , 32  },
        { 168 , 48  },
        { 224 , 64  }
    },
    //  LED Index to Flag
    { 1, 1, 1, 1, 1 }
};

#define RGB_MATRIX_TYPING_HEATMAP_SPREAD 80
#define RGB_MATRIX_TYPING_HEATMAP_AREA_LIMIT 32


#endif