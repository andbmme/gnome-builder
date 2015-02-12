/* ide-symbol-resolver.c
 *
 * Copyright (C) 2015 Christian Hergert <christian@hergert.me>
 *
 * This file is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 3 of the
 * License, or (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "ide-symbol-resolver.h"

G_DEFINE_ABSTRACT_TYPE (IdeSymbolResolver, ide_symbol_resolver, IDE_TYPE_OBJECT)

static void
ide_symbol_resolver_class_init (IdeSymbolResolverClass *klass)
{
}

static void
ide_symbol_resolver_init (IdeSymbolResolver *self)
{
}
