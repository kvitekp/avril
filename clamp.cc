// Copyright 2018 Peter Kvitek.
//
// Author: Peter Kvitek (pete@kvitek.com)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// -----------------------------------------------------------------------------
//
// Utility functions for value clamping.

#include "avrlib/clamp.h"

namespace avrlib {

uint8_t Clamp(int16_t value, uint8_t min, uint8_t max) {
  if (value < min)
    return min;
  if (value > max)
    return max;

  return static_cast<uint8_t>(value);
}

int16_t Clamp16(int16_t value, int16_t min, int16_t max) {
  if (value < min)
    return min;
  if (value > max)
    return max;

  return value;
}

}  // namespace avrlib
