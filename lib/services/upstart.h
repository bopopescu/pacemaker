/* 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Copyright (C) 2010 Senko Rasic <senko.rasic@dobarkod.hr>
 * Copyright (c) 2010 Ante Karamatic <ivoks@init.hr>
 */
#ifndef UPSTART__H
#  define UPSTART__H

#  include <glib.h>
#  include "crm/services.h"

G_GNUC_INTERNAL GList *upstart_job_listall(void);
G_GNUC_INTERNAL gboolean upstart_job_exec(svc_action_t * op);
G_GNUC_INTERNAL gboolean upstart_job_exists(const gchar * name);
G_GNUC_INTERNAL void upstart_cleanup(void);

#endif  /* UPSTART__H */
