#ifndef FVDB_DETAIL_PORT_H
#define FVDB_DETAIL_PORT_H
#if defined(_MSC_VER)

// Disable min/max macros to avoid conflicts with std::min/std::max
#ifndef NOMINMAX
#define NOMINMAX
#endif

// Disable secure warnings about standard C functions
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

// asm and volatile are keywords in MSVC, avoid conflicts with GCC-style attributes
#ifndef __asm__
#define __asm__ asm
#endif
#ifndef __volatile__
#define __volatile__ volatile
#endif

// Ensure iterator category tags like std::forward_iterator_tag are available everywhere
#include <iterator>

// Provide ssize_t on MSVC
#include <BaseTsd.h>
using ssize_t = SSIZE_T;

#endif // defined(_MSC_VER)
#endif // FVDB_DETAIL_PORT_H
