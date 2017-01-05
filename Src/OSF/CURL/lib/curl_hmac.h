#ifndef HEADER_CURL_HMAC_H
#define HEADER_CURL_HMAC_H
/***************************************************************************
 *                                  _   _ ____  _
 *  Project                     ___| | | |  _ \| |
 *                             / __| | | | |_) | |
 *                            | (__| |_| |  _ <| |___
 *                             \___|\___/|_| \_\_____|
 *
 * Copyright (C) 1998 - 2010, Daniel Stenberg, <daniel@haxx.se>, et al.
 *
 * This software is licensed as described in the file COPYING, which
 * you should have received as part of this distribution. The terms
 * are also available at http://curl.haxx.se/docs/copyright.html.
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell
 * copies of the Software, and permit persons to whom the Software is
 * furnished to do so, under the terms of the COPYING file.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ***************************************************************************/

#ifndef CURL_DISABLE_CRYPTO_AUTH

typedef void    (* HMAC_hinit_func)(void * context);
typedef void    (* HMAC_hupdate_func)(void * context,
                                      const uchar * data,
                                      uint len);
typedef void    (* HMAC_hfinal_func)(uchar * result, void * context);


/* Per-hash function HMAC parameters. */

typedef struct {
  HMAC_hinit_func       hmac_hinit;     /* Initialize context procedure. */
  HMAC_hupdate_func     hmac_hupdate;   /* Update context with data. */
  HMAC_hfinal_func      hmac_hfinal;    /* Get final result procedure. */
  uint          hmac_ctxtsize;  /* Context structure size. */
  uint          hmac_maxkeylen; /* Maximum key length (bytes). */
  uint          hmac_resultlen; /* Result length (bytes). */
} HMAC_params;


/* HMAC computation context. */

typedef struct {
  const HMAC_params *   hmac_hash;      /* Hash function definition. */
  void *                hmac_hashctxt1; /* Hash function context 1. */
  void *                hmac_hashctxt2; /* Hash function context 2. */
} HMAC_context;


/* Prototypes. */

HMAC_context * Curl_HMAC_init(const HMAC_params * hashparams,
                              const uchar * key,
                              uint keylen);
int Curl_HMAC_update(HMAC_context * context,
                     const uchar * data,
                     uint len);
int Curl_HMAC_final(HMAC_context * context, uchar * result);

#endif

#endif /* HEADER_CURL_HMAC_H */
