/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

#define ORYX_CONFIGURATOR
#undef RGB_MATRIX_TIMEOUT
#define RGB_MATRIX_TIMEOUT 480000

#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"NYAlw/4eypo"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT
#define COMBO_COUNT 3

#define RGB_MATRIX_STARTUP_SPD 60
// The default animation RGB_MATRIX_CYCLE_LEFT_RIGHT looks nice but cycles too
// fast (default 128) for my taste.
#define RGB_MATRIX_DEFAULT_SPD 16

