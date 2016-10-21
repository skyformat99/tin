// Copyright (c) 2016 Tin Project. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This is a convenience header to pull in the platform-specific headers
// that define at least:
//
//     struct addrinfo
//     struct sockaddr*
//     getaddrinfo()
//     freeaddrinfo()
//     AI_*
//     AF_*
//
// Prefer including this file instead of directly writing the #if / #else,
// since it avoids duplicating the platform-specific selections.

#include "build/build_config.h"

#if defined(OS_WIN)
#include <ws2tcpip.h>
#elif defined(OS_POSIX)
#include <netdb.h>
#include <netinet/in.h>
#include <sys/socket.h>
#endif