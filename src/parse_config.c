/*
 * Copyright (c) 2012-2013 Dave Elusive <davehome@redthumb.info.tm>
 * All rights reserved
 *
 * You may redistribute this file and/or modify it under the terms of the GNU
 * General Public License version 2 as published by the Free Software
 * Foundation. For the terms of this license, see 
 * <http://www.gnu.org/licenses/>.
 *
 * You are free to use this file under the terms of the GNU General Public
 * License, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 */

#include <string.h>

#include "rcv.h"

int
rcv_parse_config(rcv_t *rcv)
{
	map_item_t distdir = map_find(rcv->env, "XBPS_DISTDIR");
	rcv->distdir = strndup(distdir.v.s, distdir.v.len);
	return 0;
}
