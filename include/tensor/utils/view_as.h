
#ifndef __TENSOR_UTILS_VIEW_AS_H__
#define __TENSOR_UTILS_VIEW_AS_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	/*
	 * __typeof__(Tensor1)
	 * Tensor1, Tensor2
	 * view Tensor1 as the same shape as Tensor2
	 */

#define Tensor_view_as(T1, T2) Tensor_view(T1, T2.dim, T2.shape)

#ifdef __cplusplus
}
#endif

#endif
