#pragma once


/* Include */
#include <string>

/* Define */

/* Type Definition */
typedef signed char			int8_t;
typedef unsigned char		uint8_t;
typedef short				int16_t;
typedef unsigned short		uint16_t;
typedef int					int32_t;
typedef unsigned int		uint32_t;

#if defined(_WIN32) || defined(_WIN64)
typedef long long			int64_t;
typedef unsigned long long	uint64_t;
typedef int32_t				socklen_t;
#endif

typedef float				float32_t;
typedef double				float64_t;

