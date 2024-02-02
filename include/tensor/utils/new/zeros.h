
#ifndef __TENSOR_UTILS_NEW_ZEROS_H__
#define __TENSOR_UTILS_NEW_ZEROS_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "../_utils.h"
#include "../../type.h"

	/*
	 *  dim, shape, require_grad
	 */
#define __Tensor_new_zeros(Type) Tensor(Type) _Tensor_new_zeros(Type) (size_t, size_t *, bool)

	__Tensor_new_zeros(bool);
	__Tensor_new_zeros(i8);
	__Tensor_new_zeros(u8);
	__Tensor_new_zeros(i16);
	__Tensor_new_zeros(u16);
	__Tensor_new_zeros(i32);
	__Tensor_new_zeros(u32);
	__Tensor_new_zeros(i64);
	__Tensor_new_zeros(u64);
	__Tensor_new_zeros(i128);
	__Tensor_new_zeros(u128);

	__Tensor_new_zeros(f16);
	__Tensor_new_zeros(f32);
	__Tensor_new_zeros(f64);
	__Tensor_new_zeros(f80);
	__Tensor_new_zeros(f128);

#if __ENABLE_COMPLEX__

	__Tensor_new_zeros(cf16);
	__Tensor_new_zeros(cf32);
	__Tensor_new_zeros(cf64);
	__Tensor_new_zeros(cf80);
	__Tensor_new_zeros(cf128);

#endif

#ifdef __cplusplus
}
#endif

#endif
