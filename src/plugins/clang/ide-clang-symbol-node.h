/* ide-clang-symbol-node.h
 *
 * Copyright 2015-2019 Christian Hergert <christian@hergert.me>
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

#include <libide-code.h>

G_BEGIN_DECLS

#define IDE_TYPE_CLANG_SYMBOL_NODE (ide_clang_symbol_node_get_type())

G_DECLARE_FINAL_TYPE (IdeClangSymbolNode, ide_clang_symbol_node, IDE, CLANG_SYMBOL_NODE, IdeSymbolNode)

IdeSymbolNode *ide_clang_symbol_node_new            (GVariant           *variant);
guint          ide_clang_symbol_node_get_n_children (IdeClangSymbolNode *self);
IdeSymbolNode *ide_clang_symbol_node_get_nth_child  (IdeClangSymbolNode *self,
                                                     guint               nth);

G_END_DECLS
