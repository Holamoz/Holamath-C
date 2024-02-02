
#ifndef __TENSOR_UTILS_NEW_TENSOR_H__
#define __TENSOR_UTILS_NEW_TENSOR_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "../_utils.h"
#include "../../type.h"

	/*
	 *  dim, shape, data, require_grad
	 */
#define __Tensor_new_tensor(Type) Tensor(Type) _Tensor_new_tensor(Type) (size_t, size_t *, Type *, bool)

	__Tensor_new_tensor(bool);
	__Tensor_new_tensor(i8);
	__Tensor_new_tensor(u8);
	__Tensor_new_tensor(i16);
	__Tensor_new_tensor(u16);
	__Tensor_new_tensor(i32);
	__Tensor_new_tensor(u32);
	__Tensor_new_tensor(i64);
	__Tensor_new_tensor(u64);
	__Tensor_new_tensor(i128);
	__Tensor_new_tensor(u128);

	__Tensor_new_tensor(f16);
	__Tensor_new_tensor(f32);
	__Tensor_new_tensor(f64);
	__Tensor_new_tensor(f80);
	__Tensor_new_tensor(f128);

#if __ENABLE_COMPLEX__

	__Tensor_new_tensor(cf16);
	__Tensor_new_tensor(cf32);
	__Tensor_new_tensor(cf64);
	__Tensor_new_tensor(cf80);
	__Tensor_new_tensor(cf128);

#endif

#ifdef __cplusplus
}
#endif

#endif
