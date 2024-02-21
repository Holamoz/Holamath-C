
#ifndef __TENSOR_UTILS_INDEX_SELECT_H__
#define __TENSOR_UTILS_INDEX_SELECT_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "../_utils.h"
#include "../../type.h"

	Tensor(bool) _Tensor_index_select_bool (Tensor(bool), size_t, Tensor(u64));

	Tensor(i8) _Tensor_index_select_i8 (Tensor(i8), size_t, Tensor(u64));
	Tensor(i16) _Tensor_index_select_i16 (Tensor(i16), size_t, Tensor(u64));
	Tensor(i32) _Tensor_index_select_i32 (Tensor(i32), size_t, Tensor(u64));
	Tensor(i64) _Tensor_index_select_i64 (Tensor(i64), size_t, Tensor(u64));
	Tensor(i128) _Tensor_index_select_i128 (Tensor(i128), size_t, Tensor(u64));

	Tensor(u8) _Tensor_index_select_u8 (Tensor(u8), size_t, Tensor(u64));
	Tensor(u16) _Tensor_index_select_u16 (Tensor(u16), size_t, Tensor(u64));
	Tensor(u32) _Tensor_index_select_u32 (Tensor(u32), size_t, Tensor(u64));
	Tensor(u64) _Tensor_index_select_u64 (Tensor(u64), size_t, Tensor(u64));
	Tensor(u128) _Tensor_index_select_u128 (Tensor(u128), size_t, Tensor(u64));

	Tensor(f16) _Tensor_index_select_f16 (Tensor(f16), size_t, Tensor(u64));
	Tensor(f32) _Tensor_index_select_f32 (Tensor(f32), size_t, Tensor(u64));
	Tensor(f64) _Tensor_index_select_f64 (Tensor(f64), size_t, Tensor(u64));
	Tensor(f80) _Tensor_index_select_f80 (Tensor(f80), size_t, Tensor(u64));
	Tensor(f128) _Tensor_index_select_f128 (Tensor(f128), size_t, Tensor(u64));

	Tensor(cf16) _Tensor_index_select_cf16 (Tensor(cf16), size_t, Tensor(u64));
	Tensor(cf32) _Tensor_index_select_cf32 (Tensor(cf32), size_t, Tensor(u64));
	Tensor(cf64) _Tensor_index_select_cf64 (Tensor(cf64), size_t, Tensor(u64));
	Tensor(cf80) _Tensor_index_select_cf80 (Tensor(cf80), size_t, Tensor(u64));
	Tensor(cf128) _Tensor_index_select_cf128 (Tensor(cf128), size_t, Tensor(u64));

#ifdef __cplusplus
}
#endif

#endif
