
#ifndef __TENSOR_UTILS_ELEMENT_SIZE_H__
#define __TENSOR_UTILS_ELEMENT_SIZE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

#define Tensor_size(T) (sizeof(*T.data))

#ifdef __cplusplus
}
#endif

#endif
