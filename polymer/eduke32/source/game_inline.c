//-------------------------------------------------------------------------
/*
Copyright (C) 2010 EDuke32 developers and contributors

This file is part of EDuke32.

EDuke32 is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License version 2
as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/
//-------------------------------------------------------------------------

#ifndef __game_inline_c__
#define __game_inline_c__

#include "compat.h"
#include "duke3d.h"
#include "premap.h"
#include "game.h"
#include "game_inline.h"

EXTERN_INLINE void G_SetStatusBarScale(int32_t sc)
{
    ud.statusbarscale = min(100,max(10,sc));
    G_UpdateScreenArea();
}

#endif