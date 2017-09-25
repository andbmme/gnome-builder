/* gb-command-gaction-provider.h
 *
 * Copyright (C) 2014 Christian Hergert <christian@hergert.me>
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

#include "gb-command-provider.h"

G_BEGIN_DECLS

#define GB_TYPE_COMMAND_GACTION_PROVIDER (gb_command_gaction_provider_get_type())

G_DECLARE_FINAL_TYPE (GbCommandGactionProvider, gb_command_gaction_provider,
                      GB, COMMAND_GACTION_PROVIDER, GbCommandProvider)

GbCommandProvider *gb_command_gaction_provider_new (IdeWorkbench *workbench);

G_END_DECLS