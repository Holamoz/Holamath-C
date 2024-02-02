
#ifndef __TENSOR_UTILS_NEW_EMPTY_H__
#define __TENSOR_UTILS_NEW_EMPTY_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "../_utils.h"
#include "../../type.h"

	Tensor(bool) _Tensor_new_empty_bool (Tensor(bool));

	Tensor(i8) _Tensor_new_empty_i8 (Tensor(i8));
	Tensor(u8) _Tensor_new_empty_u8 (Tensor(u8));
	Tensor(i16) _Tensor_new_empty_i16 (Tensor(i16));
	Tensor(u16) _Tensor_new_empty_u16 (Tensor(u16));
	Tensor(i32) _Tensor_new_empty_i32 (Tensor(i32));
	Tensor(u32) _Tensor_new_empty_u32 (Tensor(u32));
	Tensor(i64) _Tensor_new_empty_i64 (Tensor(i64));
	Tensor(u64) _Tensor_new_empty_u64 (Tensor(u64));
	Tensor(i128) _Tensor_new_empty_i128 (Tensor(i128));
	Tensor(u128) _Tensor_new_empty_u128 (Tensor(u128));

	Tensor(f16) _Tensor_new_empty_f16 (Tensor(f16));
	Tensor(f32) _Tensor_new_empty_f32 (Tensor(f32));
	Tensor(f64) _Tensor_new_empty_f64 (Tensor(f64));
	Tensor(f80) _Tensor_new_empty_f80 (Tensor(f80));
	Tensor(f128) _Tensor_new_empty_f128 (Tensor(f128));

#if __ENABLE_COMPLEX__

	Tensor(cf16) _Tensor_new_empty_cf16 (Tensor(cf16));
	Tensor(cf32) _Tensor_new_empty_cf32 (Tensor(cf32));
	Tensor(cf64) _Tensor_new_empty_cf64 (Tensor(cf64));
	Tensor(cf80) _Tensor_new_empty_cf80 (Tensor(cf80));
	Tensor(cf128) _Tensor_new_empty_cf128 (Tensor(cf128));

#endif

#ifdef __cplusplus
}
#endif

#endif
