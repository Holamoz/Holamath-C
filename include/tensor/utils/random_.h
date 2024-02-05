
#ifndef __TENSOR_UTILS_RANDOM__H__
#define __TENSOR_UTILS_RANDOM__H__

#ifdef __cplusplus
extern "C" {
#endif

#include <unistd.h>
#include <sys/syscall.h>

#define Tensor_random_(T) \
	syscall( SYS_getrandom, T.data, sizeof( *T.data ) * *( T.stride + T.dim ) )

#ifdef __cplusplus
}
#endif

#endif
