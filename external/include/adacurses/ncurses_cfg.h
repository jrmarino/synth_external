/* include/ncurses_cfg.h.  Generated automatically by configure.  */
/****************************************************************************
 * Copyright (c) 1998-2004,2005 Free Software Foundation, Inc.              *
 *                                                                          *
 * Permission is hereby granted, free of charge, to any person obtaining a  *
 * copy of this software and associated documentation files (the            *
 * "Software"), to deal in the Software without restriction, including      *
 * without limitation the rights to use, copy, modify, merge, publish,      *
 * distribute, distribute with modifications, sublicense, and/or sell       *
 * copies of the Software, and to permit persons to whom the Software is    *
 * furnished to do so, subject to the following conditions:                 *
 *                                                                          *
 * The above copyright notice and this permission notice shall be included  *
 * in all copies or substantial portions of the Software.                   *
 *                                                                          *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS  *
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF               *
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.   *
 * IN NO EVENT SHALL THE ABOVE COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,   *
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR    *
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR    *
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.                               *
 *                                                                          *
 * Except as contained in this notice, the name(s) of the above copyright   *
 * holders shall not be used in advertising or otherwise to promote the     *
 * sale, use or other dealings in this Software without prior written       *
 * authorization.                                                           *
 ****************************************************************************/

/****************************************************************************
 *  Author: Thomas E. Dickey <dickey@clark.net> 1997                        *
 ****************************************************************************/
/*
 * $Id: ncurses_cfg.hin,v 1.7 2005/01/02 01:26:58 tom Exp $
 *
 * This is a template-file used to generate the "ncurses_cfg.h" file.
 *
 * Rather than list every definition, the configuration script substitutes the
 * definitions that it finds using 'sed'.  You need a patch (original date
 * 971222) to autoconf 2.12 or 2.13 to do this.
 *
 * See:
 *	http://invisible-island.net/autoconf/
 *	ftp://invisible-island.net/autoconf/
 */
#ifndef NC_CONFIG_H
#define NC_CONFIG_H

#define SYSTEM_NAME "dragonfly4.5"
#define HAVE_LONG_FILE_NAMES 1
#define MIXEDCASE_FILENAMES 1
#define HAVE_TERM_H 1
#define NCURSES 1
#define HAVE_LIBNCURSES 1
#define HAVE_TERM_H 1
#define NCURSES 1
#define HAVE_LIBNCURSESW 1
#define HAVE_FSEEKO 1
#define HAVE_USE_DEFAULT_COLORS 1
#define NCURSES_EXT_FUNCS 1
#define NCURSES_WRAP_PREFIX "_nc_"
#define GCC_SCANF 1
#define GCC_SCANFLIKE(fmt,var) __attribute__((format(scanf,fmt,var)))
#define GCC_PRINTF 1
#define GCC_PRINTFLIKE(fmt,var) __attribute__((format(printf,fmt,var)))
#define GCC_UNUSED __attribute__((unused))
#define GCC_NORETURN __attribute__((noreturn))
#define HAVE_NC_ALLOC_H 1
#define HAVE_GETTIMEOFDAY 1
#define STDC_HEADERS 1
#define HAVE_DIRENT_H 1
#define TIME_WITH_SYS_TIME 1
#define HAVE_MKSTEMP 1
#define NCURSES_PATHSEP ':'

#include <ncurses_def.h>

	/* The C compiler may not treat these properly but C++ has to */
#ifdef __cplusplus
#undef const
#undef inline
#else
#if defined(lint) || defined(TRACE)
#undef inline
#define inline /* nothing */
#endif
#endif

	/* On HP-UX, the C compiler doesn't grok mbstate_t without
	   -D_XOPEN_SOURCE=500. However, this causes problems on
	   IRIX. So, we #define mbstate_t to int in configure.in
	   only for the C compiler if needed. */
#ifndef __cplusplus
#ifdef NEED_MBSTATE_T_DEF
#define mbstate_t int
#endif
#endif

#endif /* NC_CONFIG_H */
