
#ifndef __TENSOR_UTILS_DIM_H__
#define __TENSOR_UTILS_DIM_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

#define Tensor_dim(T) (T.dim)
#define Tensor_dense_dim(T) (T.dim)
#define Tensor_sparse_dim(T) (T.dim)

#ifdef __cplusplus
}
#endif

#endif
