#ifndef FVDB_DETAIL_PORT_H
#define FVDB_DETAIL_PORT_H
#if defined(_MSC_VER)

// Ensure iterator category tags like std::forward_iterator_tag are available everywhere
#include <iterator>

// Provide ssize_t on MSVC
#include <BaseTsd.h>
using ssize_t = SSIZE_T;

#endif // defined(_MSC_VER)
#endif // FVDB_DETAIL_PORT_H
