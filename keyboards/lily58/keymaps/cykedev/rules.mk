AUTO_SHIFT_ENABLE = no
OLED_ENABLE= yes
EXTRAKEY_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes     # Enable Key Overrides, see https://docs.qmk.fm/#/feature_key_overrides


# If you want to change the display of OLED, you need to change here
SRC +=  ./lib/logo_reader.c
#         ./lib/keylogger.c \
#         ./lib/mode_icon_reader.c \
#         ./lib/timelogger.c \
#         ./lib/host_led_state_reader.c \
#         ./lib/rgb_state_reader.c \
#         ./lib/layer_state_reader.c \
