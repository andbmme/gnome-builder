/* ide-debugger-breakpoints-view.h
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

#include <gtk/gtk.h>

#include "debugger/ide-debugger.h"

G_BEGIN_DECLS

#define IDE_TYPE_DEBUGGER_BREAKPOINTS_VIEW (ide_debugger_breakpoints_view_get_type())

G_DECLARE_FINAL_TYPE (IdeDebuggerBreakpointsView, ide_debugger_breakpoints_view, IDE, DEBUGGER_BREAKPOINTS_VIEW, GtkBin)

GtkWidget   *ide_debugger_breakpoints_view_new          (void);
IdeDebugger *ide_debugger_breakpoints_view_get_debugger (IdeDebuggerBreakpointsView *self);
void         ide_debugger_breakpoints_view_set_debugger (IdeDebuggerBreakpointsView *self,
                                                         IdeDebugger                *debugger);

G_END_DECLS
