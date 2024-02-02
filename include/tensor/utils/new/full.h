
#ifndef __TENSOR_UTILS_NEW_FULL_H__
#define __TENSOR_UTILS_NEW_FULL_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "../_utils.h"
#include "../../type.h"

	/*
	 * dim, shape, value, require_grad
	 */

#define __Tensor_new_full(Type) Tensor(Type) _Tensor_new_full(Type) (size_t, size_t *, Type, bool)

	__Tensor_new_full(bool);
	__Tensor_new_full(i8);
	__Tensor_new_full(u8);
	__Tensor_new_full(i16);
	__Tensor_new_full(u16);
	__Tensor_new_full(i32);
	__Tensor_new_full(u32);
	__Tensor_new_full(i64);
	__Tensor_new_full(u64);
	__Tensor_new_full(i128);
	__Tensor_new_full(u128);

	__Tensor_new_full(f16);
	__Tensor_new_full(f32);
	__Tensor_new_full(f64);
	__Tensor_new_full(f80);
	__Tensor_new_full(f128);

#if __ENABLE_COMPLEX__

	__Tensor_new_full(cf16);
	__Tensor_new_full(cf32);
	__Tensor_new_full(cf64);
	__Tensor_new_full(cf80);
	__Tensor_new_full(cf128);

#endif

#ifdef __cplusplus
}
#endif

#endif
