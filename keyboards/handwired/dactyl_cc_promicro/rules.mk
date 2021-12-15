# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
BOOTMAGIC_ENABLE = lite     # Enable Bootmagic Lite
EXTRAKEY_ENABLE  = yes
COMMAND_ENABLE   = yes
MOUSEKEY_ENABLE  = no
LTO_ENABLE       = no
NKRO_ENABLE      = yes
CONSOLE_ENABLE   = no         # Console for debug
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE  = no        # Enable keyboard RGB underglow
AUDIO_ENABLE     = no           # Audio output
SPLIT_KEYBOARD   = yes
AUTO_SHIFT_ENABLE = no
TAP_DANCE_ENABLE = yes
