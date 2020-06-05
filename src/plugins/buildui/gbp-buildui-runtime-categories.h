/* gbp-buildui-runtime-categories.h
 *
 * Copyright 2018-2019 Christian Hergert <chergert@redhat.com>
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
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#pragma once

#include <libide-foundry.h>

G_BEGIN_DECLS

#define GBP_TYPE_BUILDUI_RUNTIME_CATEGORIES (gbp_buildui_runtime_categories_get_type())

G_DECLARE_FINAL_TYPE (GbpBuilduiRuntimeCategories, gbp_buildui_runtime_categories, GBP, BUILDUI_RUNTIME_CATEGORIES, GObject)

GbpBuilduiRuntimeCategories *gbp_buildui_runtime_categories_new                (IdeRuntimeManager           *runtime_manager,
                                                                                const gchar                 *prefix);
GListModel                  *gbp_buildui_runtime_categories_create_child_model (GbpBuilduiRuntimeCategories *self,
                                                                                const gchar                 *category);
const gchar                 *gbp_buildui_runtime_categories_get_prefix         (GbpBuilduiRuntimeCategories *self);
const gchar                 *gbp_buildui_runtime_categories_get_name           (GbpBuilduiRuntimeCategories *self);

G_END_DECLS
