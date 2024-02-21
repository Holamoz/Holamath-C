
#ifndef __TENSOR_UTILS_MASKED_SELECT_H__
#define __TENSOR_UTILS_MASKED_SELECT_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(bool) _Tensor_masked_select_bool (Tensor(bool), Tensor(bool));

	Tensor(i8) _Tensor_masked_select_i8 (Tensor(i8), Tensor(bool));
	Tensor(i16) _Tensor_masked_select_i16 (Tensor(i16), Tensor(bool));
	Tensor(i32) _Tensor_masked_select_i32 (Tensor(i32), Tensor(bool));
	Tensor(i64) _Tensor_masked_select_i64 (Tensor(i64), Tensor(bool));
	Tensor(i128) _Tensor_masked_select_i128 (Tensor(i128), Tensor(bool));

	Tensor(u8) _Tensor_masked_select_u8 (Tensor(u8), Tensor(bool));
	Tensor(u16) _Tensor_masked_select_u16 (Tensor(u16), Tensor(bool));
	Tensor(u32) _Tensor_masked_select_u32 (Tensor(u32), Tensor(bool));
	Tensor(u64) _Tensor_masked_select_u64 (Tensor(u64), Tensor(bool));
	Tensor(u128) _Tensor_masked_select_u128 (Tensor(u128), Tensor(bool));

	Tensor(f16) _Tensor_masked_select_f16 (Tensor(f16), Tensor(bool));
	Tensor(f32) _Tensor_masked_select_f32 (Tensor(f32), Tensor(bool));
	Tensor(f64) _Tensor_masked_select_f64 (Tensor(f64), Tensor(bool));
	Tensor(f80) _Tensor_masked_select_f80 (Tensor(f80), Tensor(bool));
	Tensor(f128) _Tensor_masked_select_f128 (Tensor(f128), Tensor(bool));

	Tensor(cf16) _Tensor_masked_select_cf16 (Tensor(cf16), Tensor(bool));
	Tensor(cf32) _Tensor_masked_select_cf32 (Tensor(cf32), Tensor(bool));
	Tensor(cf64) _Tensor_masked_select_cf64 (Tensor(cf64), Tensor(bool));
	Tensor(cf80) _Tensor_masked_select_cf80 (Tensor(cf80), Tensor(bool));
	Tensor(cf128) _Tensor_masked_select_cf128 (Tensor(cf128), Tensor(bool));

#ifdef __cplusplus
}
#endif

#endif
