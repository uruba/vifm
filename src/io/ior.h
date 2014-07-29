/* vifm
 * Copyright (C) 2013 xaizek.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef VIFM__IO__IOR_H__
#define VIFM__IO__IOR_H__

#include "ioc.h"

/* ior - I/O recursive - Input/Output recursive */

/* All functions return zero on success and non-zero on error. */

/* Removes file/directory recursively.  Expects path in arg1. */
int ior_rm(io_args_t *const args);

/* Copies file/directory recursively.  Expects path in arg1 and overwrite in
 * arg3. */
int ior_cp(io_args_t *const args);

/* Moves/renames file/directory recursively.  Expects src in arg1, dst in arg2
 * and overwrite in arg3. */
int ior_mv(io_args_t *const args);

/* Change owner of file/directory recursively.  Expects path in arg1 and uid in
 * arg3. */
int ior_chown(io_args_t *const args);

/* Change group of file/directory recursively.  Expects path in arg1 and gid in
 * arg3. */
int ior_chgrp(io_args_t *const args);

/* Change permissions of file/directory recursively.  Expects path in arg1 and
 * mode in arg3. */
int ior_chmod(io_args_t *const args);

#endif /* VIFM__IO__IOR_H__ */

/* vim: set tabstop=2 softtabstop=2 shiftwidth=2 noexpandtab cinoptions-=(0 : */
/* vim: set cinoptions+=t0 : */