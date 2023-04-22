/* Copyright 2020 umbynos
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

#include "sick68.h"

#ifdef RGB_MATRIX_ENABLE

/*
The first part, // Key Matrix to LED Index, tells the system what key this LED represents by using the key's electrical matrix row & col.
The second part, // LED Index to Physical Position represents the LED's physical { x, y } position on the keyboard.
The default expected range of values for { x, y } is the inclusive range { 0..224, 0..64 }.
This default expected range is due to effects that calculate the center of the keyboard for their animations.
The easiest way to calculate these positions is imagine your keyboard is a grid, and the top left of the keyboard represents { x, y }
coordinate { 0, 0 } and the bottom right of your keyboard represents { 224, 64 }.

Using this as a basis, you can use the following formula to calculate the physical position:

x = 224 / (NUMBER_OF_COLS - 1) * COL_POSITION
y =  64 / (NUMBER_OF_ROWS - 1) * ROW_POSITION

Where NUMBER_OF_COLS, NUMBER_OF_ROWS, COL_POSITION, & ROW_POSITION are all based on the physical layout of your keyboard, not the electrical layout.
*/

#define NA NO_LED

/* RGB Positioning */
led_config_t g_led_config = { {
    // Key Matrix to LED Index
    {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14},
    {NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA},
    {15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28},
    {NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA},
    {NA, NA, 29, 30, 31, 32, 33, 34, NA, NA}
}, {
    // LED Index to Physical Position
    { 15,  16 }, { 30,  16 }, { 45,  16 }, { 60, 16 }, { 75, 16 }, { 90, 16 }, { 105, 16 }, { 120, 16 }, { 135, 16 }, { 150, 16 }, { 165, 16 }, { 180, 16 }, { 195, 16 }, { 210, 16 }, { 224, 16 },
    { 15,  48 }, { 30,  48 }, { 45,  48 }, { 60, 48 }, { 75, 48 }, { 90, 48 }, { 105, 48 }, { 120, 48 }, { 135, 48 }, { 150, 48 }, { 165, 48 }, { 180, 48 }, { 195, 48 }, { 210, 48 },
    { 45,  64 }, { 60, 64 }, { 75, 64 }, { 90, 64 }, { 105, 64 }, { 120, 64 }
}, {
    // LED Index to Flag
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4
} };

#endif
