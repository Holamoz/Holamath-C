
#ifndef __TENSOR_UTILS_NEW_EMPTY_H__
#define __TENSOR_UTILS_NEW_EMPTY_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "../_utils.h"
#include "../../type.h"

	/*
	 * dim, shape, require_grad
	 */
#define __Tensor_new_empty(Type) Tensor(Type) _Tensor_new_empty(Type) (size_t, size_t *, bool)

	__Tensor_new_empty(bool);
	__Tensor_new_empty(i8);
	__Tensor_new_empty(u8);
	__Tensor_new_empty(i16);
	__Tensor_new_empty(u16);
	__Tensor_new_empty(i32);
	__Tensor_new_empty(u32);
	__Tensor_new_empty(i64);
	__Tensor_new_empty(u64);
	__Tensor_new_empty(i128);
	__Tensor_new_empty(u128);

	__Tensor_new_empty(f16);
	__Tensor_new_empty(f32);
	__Tensor_new_empty(f64);
	__Tensor_new_empty(f80);
	__Tensor_new_empty(f128);

#if __ENABLE_COMPLEX__

	__Tensor_new_empty(cf16);
	__Tensor_new_empty(cf32);
	__Tensor_new_empty(cf64);
	__Tensor_new_empty(cf80);
	__Tensor_new_empty(cf128);

#endif

#ifdef __cplusplus
}
#endif

#endif
