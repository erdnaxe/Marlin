/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// 100K Alternative ATC Semitec 104GT-2 (4.7k pullup) Dagoma France version
const short temptable_16[][2] PROGMEM = {
  { OV(   5), 320 },
  { OV(   6), 310 },
  { OV(   7), 300 },
  { OV(   8), 295 },
  { OV(  10), 285 },
  { OV(  11), 280 },
  { OV(  12), 275 },
  { OV(  16), 265 },
  { OV(  20), 254 },
  { OV(  22), 250 },
  { OV(  29), 240 },
  { OV(  36), 230 },
  { OV(  45), 222 },
  { OV(  48), 215 },
  { OV(  52), 208 },
  { OV(  72), 202 },
  { OV(  75), 196 },
  { OV(  86), 192 },
  { OV(  89), 188 },
  { OV( 106), 182 },
  { OV( 120), 174 },
  { OV( 131), 170 },
  { OV( 143), 166 },
  { OV( 152), 162 },
  { OV( 168), 158 },
  { OV( 184), 153 },
  { OV( 203), 150 },
  { OV( 221), 145 },
  { OV( 240), 143 },
  { OV( 288), 134 },
  { OV( 343), 125 },
  { OV( 404), 116 },
  { OV( 479), 107 },
  { OV( 553),  98 },
  { OV( 629),  89 },
  { OV( 710),  78 },
  { OV( 781),  69 },
  { OV( 844),  60 },
  { OV( 892),  50 },
  { OV( 932),  41 },
  { OV( 970),  29 },
  { OV(1000),  20 },
  { OV(1010),  10 },
  { OV(1024), -273 } // for safety
};

