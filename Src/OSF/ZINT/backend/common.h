/* common.h - Header for all common functions in common.c */

/*
    libzint - the open source barcode library
    Copyright (C) 2009-2016 Robin Stuart <rstuart114@gmail.com>

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions
    are met:

    1. Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
    3. Neither the name of the project nor the names of its contributors
       may be used to endorse or promote products derived from this software
       without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
    ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
    FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
    DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
    OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
    HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
    LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
    OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
    SUCH DAMAGE.
 */

/* Used in some logic */
#ifndef __COMMON_H
#define __COMMON_H

#include <slib.h>

#define ZINT_VERSION "2.4.4" // @sobolev

/* The most commonly used set */
#define NEON	"0123456789"

#include "zint.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

    // @sobolev extern int ustrlen(const uchar source[]);
    extern void ustrcpy(uchar target[], const uchar source[]);
    extern int ctoi(const char source);
    extern char itoc(const int source);
    extern void to_upper(uchar source[]);
    extern int is_sane(const char test_string[], const uchar source[], const int length);
    extern void lookup(const char set_string[], const char *table[], const char data, char dest[]);
    extern int posn(const char set_string[], const char data);
    extern void expand(ZintSymbol *symbol, const char data[]);
    extern int is_stackable(const int symbology);
    extern int is_extendable(const int symbology);
    extern int roundup(const float input);
    extern int module_is_set(const ZintSymbol *symbol, const int y_coord, const int x_coord);
    extern void set_module(ZintSymbol *symbol, const int y_coord, const int x_coord);
    extern void unset_module(ZintSymbol *symbol, const int y_coord, const int x_coord);
    extern int istwodigits(const uchar source[], const int position);
    extern double froundup(const double input);
    extern int parunmodd(const uchar llyth);
    extern int latin1_process(ZintSymbol *symbol, const uchar source[], uchar preprocessed[], int *length);
    extern int utf8toutf16(ZintSymbol *symbol, const uchar source[], int vals[], int *length);
#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __COMMON_H */
