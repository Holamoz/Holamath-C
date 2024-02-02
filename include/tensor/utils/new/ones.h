
#ifndef __TENSOR_UTILS_NEW_ONES_H__
#define __TENSOR_UTILS_NEW_ONES_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "../_utils.h"
#include "../../type.h"

	/*
	 *  dim, shape, require_grad
	 */
#define __Tensor_new_ones(Type) Tensor(Type) _Tensor_new_ones(Type) (size_t, size_t *, bool)

	__Tensor_new_ones(bool);
	__Tensor_new_ones(i8);
	__Tensor_new_ones(u8);
	__Tensor_new_ones(i16);
	__Tensor_new_ones(u16);
	__Tensor_new_ones(i32);
	__Tensor_new_ones(u32);
	__Tensor_new_ones(i64);
	__Tensor_new_ones(u64);
	__Tensor_new_ones(i128);
	__Tensor_new_ones(u128);

	__Tensor_new_ones(f16);
	__Tensor_new_ones(f32);
	__Tensor_new_ones(f64);
	__Tensor_new_ones(f80);
	__Tensor_new_ones(f128);

#if __ENABLE_COMPLEX__

	__Tensor_new_ones(cf16);
	__Tensor_new_ones(cf32);
	__Tensor_new_ones(cf64);
	__Tensor_new_ones(cf80);
	__Tensor_new_ones(cf128);

#endif

#ifdef __cplusplus
}
#endif

#endif
