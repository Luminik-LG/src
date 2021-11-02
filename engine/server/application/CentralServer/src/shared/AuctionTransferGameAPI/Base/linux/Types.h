////////////////////////////////////////
//  Types.h
//
//  Purpose:
// 	    1. Define integer types that are unambiguous with respect to size
//
//  Revisions:
// 	    07/10/2001  Created                                    
//

#ifndef BASE_LINUX_TYPES_H
#define BASE_LINUX_TYPES_H

//#include <sys/bitypes.h>
#include <stdint.h>

#ifdef EXTERNAL_DISTRO
namespace NAMESPACE 
{

#endif

namespace Base
{

#ifndef INT32_MAX
#define INT32_MAX  0x7FFFFFFF
#define INT32_MIN  0x80000000
#define UINT32_MAX 0xFFFFFFFF
#endif

typedef signed   char           int8;
typedef unsigned char           uint8;
typedef int16_t                 int16;
typedef uint16_t                uint16;

typedef int32_t                 int32;
typedef uint32_t                uint32;
typedef int64_t                 int64;
typedef uint64_t                uint64;
}
#ifdef EXTERNAL_DISTRO
};
#endif
#endif  //  BASE_LINUX_TYPES_H

