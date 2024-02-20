
#ifndef __TENSOR_UTILS_SELECT_H__
#define __TENSOR_UTILS_SELECT_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(bool) _Tensor_select_scatter_bool (Tensor(bool), Tensor(bool), size_t, size_t);

	Tensor(i8) _Tensor_select_scatter_i8 (Tensor(i8), Tensor(i8), size_t, size_t);
	Tensor(i16) _Tensor_select_scatter_i16 (Tensor(i16), Tensor(i16), size_t, size_t);
	Tensor(i32) _Tensor_select_scatter_i32 (Tensor(i32), Tensor(i32), size_t, size_t);
	Tensor(i64) _Tensor_select_scatter_i64 (Tensor(i64), Tensor(i64), size_t, size_t);
	Tensor(i128) _Tensor_select_scatter_i128 (Tensor(i128), Tensor(i128), size_t, size_t);

	Tensor(u8) _Tensor_select_scatter_u8 (Tensor(u8), Tensor(u8), size_t, size_t);
	Tensor(u16) _Tensor_select_scatter_u16 (Tensor(u16), Tensor(u16), size_t, size_t);
	Tensor(u32) _Tensor_select_scatter_u32 (Tensor(u32), Tensor(u32), size_t, size_t);
	Tensor(u64) _Tensor_select_scatter_u64 (Tensor(u64), Tensor(u64), size_t, size_t);
	Tensor(u128) _Tensor_select_scatter_u128 (Tensor(u128), Tensor(u128), size_t, size_t);

	Tensor(f16) _Tensor_select_scatter_f16 (Tensor(f16), Tensor(f16), size_t, size_t);
	Tensor(f32) _Tensor_select_scatter_f32 (Tensor(f32), Tensor(f32), size_t, size_t);
	Tensor(f64) _Tensor_select_scatter_f64 (Tensor(f64), Tensor(f64), size_t, size_t);
	Tensor(f80) _Tensor_select_scatter_f80 (Tensor(f80), Tensor(f80), size_t, size_t);
	Tensor(f128) _Tensor_select_scatter_f128 (Tensor(f128), Tensor(f128), size_t, size_t);

	Tensor(cf16) _Tensor_select_scatter_cf16 (Tensor(cf16), Tensor(cf16), size_t, size_t);
	Tensor(cf32) _Tensor_select_scatter_cf32 (Tensor(cf32), Tensor(cf32), size_t, size_t);
	Tensor(cf64) _Tensor_select_scatter_cf64 (Tensor(cf64), Tensor(cf64), size_t, size_t);
	Tensor(cf80) _Tensor_select_scatter_cf80 (Tensor(cf80), Tensor(cf80), size_t, size_t);
	Tensor(cf128) _Tensor_select_scatter_cf128 (Tensor(cf128), Tensor(cf128), size_t, size_t);

#ifdef __cplusplus
}
#endif

#endif
