/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG Player.
//
// EasyRPG Player is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG Player is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

#ifndef _EASYRPG_FTFONT_H_
#define _EASYRPG_FTFONT_H_

#include "system.h"
#if defined(USE_SOFT_BITMAP) || defined(USE_PIXMAN_BITMAP)

#include "font.h"
#include "bitmap.h"

class FreeType {
public:
	static void Init(const Font* font);
	static void Done();
	static Bitmap* RenderChar(const Font* font, int c);
};

#endif

#endif