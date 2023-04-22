/* Copyright 2022 Jose Pablo Ramirez <jp.ramangulo@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_1,   KC_2,   KC_3,   KC_4,
    KC_5,   KC_6,   KC_7,   KC_8,
    KC_F13,   KC_F14,   KC_F15,   KC_9,
    KC_F17,   KC_F18,   KC_F19,   MO(1)
  ),
  [1] = LAYOUT(
    RGB_TOG,   RGB_MOD,   RGB_RMOD,   KC_NO,
    RGB_HUI,   RGB_SAI,   RGB_VAI,   RGB_SPI,
    RGB_HUD,   RGB_SAD,   RGB_VAD,   RGB_SPD,
    QK_RBT,   KC_NO,   QK_BOOT,   KC_TRNS
  )
};
