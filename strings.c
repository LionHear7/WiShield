/******************************************************************************

  Filename:		strings.c
  Description:	Contains program memory strings for the WiServer

 ******************************************************************************

  Copyright(c) 2009 Mark A. Patel  All rights reserved.

  This program is free software; you can redistribute it and/or modify it
  under the terms of version 2 of the GNU General Public License as
  published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
  more details.

  You should have received a copy of the GNU General Public License along with
  this program; if not, write to the Free Software Foundation, Inc., 59
  Temple Place - Suite 330, Boston, MA  02111-1307, USA.

  Contact Information:

   Author               Date        Comment
  ---------------------------------------------------------------
   Mark A. Patel		06/10/2009	Initial version

 *****************************************************************************/

#include "server.h"
#include <avr/pgmspace.h>


// This file contains various strings used by the WiServer
// They are stored in program memory to reduce RAM usage.

// HTTP OK response
#if defined(ARDUINO) && ARDUINO >= 100
  const char httpOK[] = {"HTTP/1.0 200 OK"};
#else
  const prog_char httpOK[] = {"HTTP/1.0 200 OK"};
#endif

// HTTP Not Found response
#if defined(ARDUINO) && ARDUINO >= 100
  const char httpNotFound[] = {"HTTP/1.0 404 Not Found"};
#else
  const prog_char httpNotFound[] = {"HTTP/1.0 404 Not Found"};
#endif

#ifdef ENABLE_CLIENT_MODE

// Trailing HTTP/1.0 for GET and POST requests
#if defined(ARDUINO) && ARDUINO >= 100
  const char http10[] = {" HTTP/1.0"};
#else
  const prog_char http10[] = {" HTTP/1.0"};
#endif

// Authorization: Basic field name
#if defined(ARDUINO) && ARDUINO >= 100
  const char authBasic[] = {"Authorization: Basic "};
#else
  const prog_char authBasic[] = {"Authorization: Basic "};
#endif

// Content-Length field name
#if defined(ARDUINO) && ARDUINO >= 100
  const char contentLength[] = {"Content-Length:     "};
#else
  const prog_char contentLength[] = {"Content-Length:     "};
#endif

// User agent field with value
#if defined(ARDUINO) && ARDUINO >= 100
  const char userAgent[] = {"User-Agent: WiServer/1.1"};
#else
  const prog_char userAgent[] = {"User-Agent: WiServer/1.1"};
#endif

// Content type form data
#if defined(ARDUINO) && ARDUINO >= 100
  const char contentTypeForm[] = {"Content-Type: application/x-www-form-urlencoded"};
#else
  const prog_char contentTypeForm[] = {"Content-Type: application/x-www-form-urlencoded"};
#endif

// POST request
#if defined(ARDUINO) && ARDUINO >= 100
  const char post[] = {"POST "};
#else
  const prog_char post[] = {"POST "};
#endif

// GET request
#if defined(ARDUINO) && ARDUINO >= 100
  const char get[] = {"GET "};
#else
  const prog_char get[] = {"GET "};
#endif

// Host, User-Agent, and Content-Type lines for Twitter POSTs
#if defined(ARDUINO) && ARDUINO >= 100
  const char host[] = {"Host: "};
#else
  const prog_char host[] = {"Host: "};
#endif

// Status prefix for Twitter
#if defined(ARDUINO) && ARDUINO >= 100
  const char status[] = {"status="};
#else
  const prog_char status[] = {"status="};
#endif

/* Base64 Encoder data */
#if defined(ARDUINO) && ARDUINO >= 100
  const char base64Chars[] PROGMEM = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"};
#else
  const prog_char base64Chars[] PROGMEM = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"};
#endif

#endif // ENABLE_CLIENT_MODE
