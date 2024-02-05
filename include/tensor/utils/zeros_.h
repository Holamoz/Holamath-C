
#ifndef __TENSOR_UTILS_ZEROS__H__
#define __TENSOR_UTILS_ZEROS__H__

#ifdef __cplusplus
extern "C" {
#endif

#define Tensor_zero_(T) memset(T.data, 0, sizeof( *T.data ) * *( T.stride + T.dim ) )

#ifdef __cplusplus
}
#endif

#endif
