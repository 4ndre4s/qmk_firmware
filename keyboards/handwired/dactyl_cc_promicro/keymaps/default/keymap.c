// Copyright 2021 Christian Eiden, cykedev
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include QMK_KEYBOARD_H
#include "keymap_german.h"

#define RAISE   MO(_RAISE)
#define LOWER   MO(_LOWER)
#define MAC     TG(_MAC)
#define TEXTMAC LM(_TEXT, MOD_LGUI)
#define TEXTWIN LM(_TEXT, MOD_LCTL)

enum layer_names {
  _DVORAK,
  _RAISE,
  _LOWER,
  _TEXT,
  _ADJUST,
  _MAC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DVORAK] = LAYOUT_CC(
  /* DVORAK
   * .-----------------------------------------.                                  .-----------------------------------------.
   * | GEsc |   1  |   2  |   3  |   4  |   5  |                                  |   6  |   7  |   8  |   9  |   0  |  ß   |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * | Tab  |   Ä  |   ,  |   .  |   P  |   Z  |                                  |   F  |   G  |   C  |   R  |   L  |  Ü   |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * | TEXTW|   A  |   O  |   E  |   U  |   I  |                                  |   D  |   H  |   T  |   N  |   S  |  -   |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * | Shft |   Ö  |   Q  |   J  |   K  |   X  |                                  |   B  |   M  |   W  |   V  |   Y  | Shft |
   * '-----------------------------------------'                                  '-----------------------------------------'
   *        |   ^  |  < > | left | rght |     .---------------.    .---------------.     |  up  | down |   #  |   +  |
   *        |      |      |      |      |    / Ctrl  /  Alt  /      \  Alt  \  Ctrl \    |      |      |      |      |
   *        '---------------------------'   /       /       /        \   Gr  \       \   '---------------------------'
   *                               .-------/-------/-------/          \-------\-------\-------.
   *                              /       /       / Home  /            \  End  \       \       \
   *                             /       /       /       /              \       \       \       \
   *                            / Back- /  Del  /-------/                \-------\ Enter \ Space \
   *                           / Space /       / RAISE /                  \ LOWER \       \       \
   *                          /       /       /       /                    \       \       \       \
   *                         '-----------------------'                      '-----------------------'
   */
   KC_ESC , DE_1   , DE_2   , DE_3   , DE_4   , DE_5   ,                                     DE_6   , DE_7   , DE_8   , DE_9   , DE_0   , DE_SS  ,
   KC_TAB , DE_ADIA, DE_COMM, DE_DOT , DE_P   , DE_Z   ,                                     DE_F   , DE_G   , DE_C   , DE_R   , DE_L   , DE_UDIA,
   TEXTWIN, DE_A   , DE_O   , DE_E   , DE_U   , DE_I   ,                                     DE_D   , DE_H   , DE_T   , DE_N   , DE_S   , DE_MINS,
   KC_LSFT, DE_ODIA, DE_Q   , DE_J   , DE_K   , DE_X   ,                                     DE_B   , DE_M   , DE_W   , DE_V   , DE_Y   , KC_RSFT,
            DE_CIRC, DE_LABK, KC_LEFT, KC_RGHT,                                                       KC_UP  , KC_DOWN, DE_HASH, DE_PLUS,
                                                     KC_LCTL, KC_LALT,         KC_RALT, KC_RCTL,
                                                              KC_HOME,         KC_END ,
                                              KC_BSPC, KC_DEL , RAISE,         LOWER  , KC_ENT , KC_SPC
   ),
  [_RAISE] = LAYOUT_CC(
  /* RAISE
   * .-----------------------------------------.                                  .-----------------------------------------.
   * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                                  |  F6  |  F7  |  F8  |  F9  |  F10 | F11  |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |  F12 |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  |      | PREV | PLAY | NEXT |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
   * '-----------------------------------------'                                  '-----------------------------------------'
   *        | RESET|      |       |      |     .---------------.    .---------------.     |  VOL | VOL  |      | RESET|
   *        |      |      |       |      |    /       /       /      \       \       \    |  UP  | DOWN |      |      |
   *        '---------------------------'   /       /       /        \       \       \   '---------------------------'
   *                               .-------/-------/-------/          \-------\-------\-------.
   *                              /       /       /       /            \       \       \       \
   *                             /       /       /       /              \       \       \       \
   *                            /       /       /-------/                \-------\       \       \
   *                           /       /       /       /                  \       \       \       \
   *                          /       /       /       /                    \       \       \       \
   *                         '-----------------------'                      '-----------------------'
   */
   _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                                     KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
   _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, KC_F12 ,
   _______, _______, _______, _______, _______, _______,                                     _______, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, _______, _______,
   _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
            RESET, _______, _______, _______,                                                       KC_AUDIO_VOL_UP, KC_AUDIO_VOL_DOWN, _______, RESET,
                                                     _______, _______,         _______, _______,
                                                              _______,         _______,
                                            _______, _______, _______,         _______, _______, _______
   ),
  [_LOWER] = LAYOUT_CC(
  /* LOWER
   * .-----------------------------------------.                                  .-----------------------------------------.
   * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                                  |  F6  |  F7  |  F8  |  F9  |  F10 | F11  |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |  F12 |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
   * '-----------------------------------------'                                  '-----------------------------------------'
   *        | RESET|      |      |      |     .---------------.    .---------------.     |      |      |      | RESET|
   *        |      |      |      |      |    /       /       /      \       \       \    |      |      |      |      |
   *        '---------------------------'   /       /       /        \       \       \   '---------------------------'
   *                               .-------/-------/-------/          \-------\-------\-------.
   *                              /       /       /       /            \       \       \       \
   *                             /       /       /       /              \       \       \       \
   *                            /       /       /-------/                \-------\       \       \
   *                           /       /       /       /                  \       \       \       \
   *                          /       /       /       /                    \       \       \       \
   *                         '-----------------------'                      '-----------------------'
   */
   _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                                     KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
   _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, KC_F12 ,
   _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
   _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
            RESET, _______, _______, _______,                                                       _______, _______, _______, RESET,
                                                     _______, _______,         _______, _______,
                                                              _______,         _______,
                                            _______, _______, _______,         _______, _______, _______
   ),
   [_TEXT] = LAYOUT_CC(
   /* TEXT
    * .-----------------------------------------.                                  .-----------------------------------------.
    * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
    * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
    * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
    * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
    * |      |      |  Cut | Copy | Paste|      |                                  |      |      |      |      |      |      |
    * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
    * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
    * '-----------------------------------------'                                  '-----------------------------------------'
    *        |      |      |      |      |     .---------------.    .---------------.     |      |      |      |      |
    *        |      |      |      |      |    /       /       /      \       \       \    |      |      |      |      |
    *        '---------------------------'   /       /       /        \       \       \   '---------------------------'
    *                               .-------/-------/-------/          \-------\-------\-------.
    *                              /       /       /       /            \       \       \       \
    *                             /       /       /       /              \       \       \       \
    *                            /       /       /-------/                \-------\       \       \
    *                           /       /       /       /                  \       \       \       \
    *                          /       /       /       /                    \       \       \       \
    *                         '-----------------------'                      '-----------------------'
    */
    _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
    _______, _______, DE_X   , DE_C   , DE_V   , _______,                                     _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
             _______, _______, _______, _______,                                                       _______, _______, _______, _______,
                                                      _______, _______,         _______, _______,
                                                               _______,         _______,
                                             _______, _______, _______,         _______, _______, _______
    ),
  [_ADJUST] = LAYOUT_CC(
  /* ADJUST
   * .-----------------------------------------.                                  .-----------------------------------------.
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |  MAC |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
   * '-----------------------------------------'                                  '-----------------------------------------'
   *        |      |      |      |      |     .---------------.    .---------------.     |      |      |      |      |
   *        |      |      |      |      |    /       /       /      \       \       \    |      |      |      |      |
   *        '---------------------------'   /       /       /        \       \       \   '---------------------------'
   *                               .-------/-------/-------/          \-------\-------\-------.
   *                              /       /       /       /            \       \       \       \
   *                             /       /       /       /              \       \       \       \
   *                            /       /       /-------/                \-------\       \       \
   *                           /       /       /       /                  \       \       \       \
   *                          /       /       /       /                    \       \       \       \
   *                         '-----------------------'                      '-----------------------'
   */
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MAC    ,
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                                     XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX,
                                                              XXXXXXX,         XXXXXXX,
                                            XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX
   ),
  [_MAC] = LAYOUT_CC(
  /* MAC overlay
   * .-----------------------------------------.                                  .-----------------------------------------.
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |TEXTM |      |      |      |      |      |                                  |      |      |      |      |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
   * '-----------------------------------------'                                  '-----------------------------------------'
   *        |      |      |      |      |     .---------------.    .---------------.     |      |      |      |      |
   *        |      |      |      |      |    /  Cmd  /  Ctrl /      \  Opt  \  Cmd  \    |      |      |      |      |
   *        '---------------------------'   /       /       /        \       \       \   '---------------------------'
   *                               .-------/-------/-------/          \-------\-------\-------.
   *                              /       /       /       /            \       \       \       \
   *                             /       /       /       /              \       \       \       \
   *                            /       /       /-------/                \-------\       \       \
   *                           /       /       /       /                  \       \       \       \
   *                          /       /       /       /                    \       \       \       \
   *                         '-----------------------'                      '-----------------------'
   */
   _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
   _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
   TEXTMAC, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
   _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______,                                                       _______, _______, _______, _______,
                                                     KC_LCMD, KC_LCTL,         KC_LOPT, KC_RCMD,
                                                              _______,         _______,
                                            _______, _______, _______,         _______, _______, _______
   )

};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}


// Flexible macOS-friendly Grave Escape
// https://docs.qmk.fm/#/feature_key_overrides?id=flexible-macos-friendly-grave-escape

const key_override_t grave_esc_override = ko_make_basic(MOD_MASK_SHIFT, KC_ESC, DE_GRV);

const key_override_t **key_overrides = (const key_override_t *[]){
    &grave_esc_override,
    NULL
};
