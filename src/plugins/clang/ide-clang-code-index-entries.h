/* ide-clang-code-index-entries.h
 *
 * Copyright 2017 Anoop Chandu <anoopchandu96@gmail.com>
 * Copyright 2018 Christian Hergert <chergert@redhat.com>
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

#include <ide.h>

G_BEGIN_DECLS

#define IDE_TYPE_CLANG_CODE_INDEX_ENTRIES (ide_clang_code_index_entries_get_type())

G_DECLARE_FINAL_TYPE (IdeClangCodeIndexEntries, ide_clang_code_index_entries, IDE, CLANG_CODE_INDEX_ENTRIES, GObject)

IdeCodeIndexEntries *ide_clang_code_index_entries_new (const gchar *path,
                                                       GVariant    *entries);

G_END_DECLS
