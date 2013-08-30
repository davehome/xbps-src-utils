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

#include <stdlib.h>

#include "rcv.h"

void
rcv_end(rcv_t *rcv)
{
	if (rcv->input != NULL) {
		free(rcv->input);
		rcv->input = NULL;
	}
	if (rcv->env != NULL) {
		map_destroy(rcv->env);
		rcv->env = NULL;
	}

	xbps_end(&rcv->xhp);

	if (rcv->xsrc_conf != NULL)
		free(rcv->xsrc_conf);
	if (rcv->xbps_conf != NULL)
		free(rcv->xbps_conf);
	if (rcv->distdir != NULL)
		free(rcv->distdir);
	if (rcv->pkgdir != NULL)
		free(rcv->pkgdir);
}
