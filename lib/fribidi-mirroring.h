/* fribidi-mirroring.h - get mirrored character
 *
 * Copyright (C) 2004  Sharif FarsiWeb, Inc
 * Copyright (C) 2001, 2002, 2004  Behdad Esfahbod
 * Copyright (C) 1999, 2000  Dov Grobgeld
 * 
 * This file is part of GNU FriBidi.
 * 
 * GNU FriBidi is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1
 * of the License, or (at your option) any later version.
 * 
 * GNU FriBidi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with GNU FriBidi; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * 
 * For licensing issues, contact <license@farsiweb.info> or write to
 * Sharif FarsiWeb, Inc., PO Box 13445-389, Tehran, Iran.
 */
/* $Id: fribidi-mirroring.h,v 1.7 2004-06-09 14:59:21 behdad Exp $
 * $Author: behdad $
 * $Date: 2004-06-09 14:59:21 $
 * $Revision: 1.7 $
 * $Source: /home/behdad/src/fdo/fribidi/togit/git/../fribidi/fribidi2/lib/fribidi-mirroring.h,v $
 *
 * Authors:
 *   Behdad Esfahbod, 2001, 2002, 2004
 *   Dov Grobgeld, 1999, 2000
 */
#ifndef _FRIBIDI_MIRRORING_H
#define _FRIBIDI_MIRRORING_H

#include "fribidi-common.h"

#include "fribidi-types.h"

#include "fribidi-begindecls.h"

#define fribidi_get_mirror_char FRIBIDI_NAMESPACE(get_mirror_char)
/* fribidi_get_mirror_char - get mirrored character
 *
 * This function finds the mirrored equivalent of a character.  If  the input
 * character is a declared as a mirroring character in the Unicode standard
 * and has a mirrored equivalent.  The matching mirrored character is put in
 * the output, otherwise the input character itself is put.
 *
 * Returns: if the character has a mirroring equivalent or not.
 */
FRIBIDI_ENTRY fribidi_boolean fribidi_get_mirror_char (
  FriBidiChar ch,		/* input character */
  FriBidiChar *mirrored_ch	/* output mirrored character */
);

#include "fribidi-enddecls.h"

#endif /* !_FRIBIDI_MIRRORING_H */
/* Editor directions:
 * Local Variables:
 *   mode: c
 *   c-basic-offset: 2
 *   indent-tabs-mode: t
 *   tab-width: 8
 * End:
 * vim: textwidth=78: autoindent: cindent: shiftwidth=2: tabstop=8:
 */
