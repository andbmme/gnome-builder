/* ide-debug-manager.h
 *
 * Copyright (C) 2017 Christian Hergert <chergert@redhat.com>
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
 */

#pragma once

#include "ide-object.h"

#include "debugger/ide-debugger-breakpoints.h"

G_BEGIN_DECLS

#define IDE_TYPE_DEBUG_MANAGER (ide_debug_manager_get_type())

G_DECLARE_FINAL_TYPE (IdeDebugManager, ide_debug_manager, IDE, DEBUG_MANAGER, IdeObject)

IdeDebugger            *ide_debug_manager_get_debugger             (IdeDebugManager        *self);
gboolean                ide_debug_manager_get_active               (IdeDebugManager        *self);
gboolean                ide_debug_manager_start                    (IdeDebugManager        *self,
                                                                    IdeRunner              *runner,
                                                                    GError                **error);
void                    ide_debug_manager_stop                     (IdeDebugManager        *self);
IdeDebuggerBreakpoints *ide_debug_manager_get_breakpoints_for_file (IdeDebugManager        *self,
                                                                    GFile                  *file);

G_END_DECLS