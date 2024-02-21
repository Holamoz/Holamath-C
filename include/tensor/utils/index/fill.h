#ifndef __TENSOR_UTILS_FILE_H__
#define __TENSOR_UTILS_FILE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "../_utils.h"
#include "../../type.h"

	Tensor(bool) _Tensor_index_fill_bool (Tensor(bool), size_t, Tensor(u64), bool);

	Tensor(i8) _Tensor_index_fill_i8 (Tensor(i8), size_t, Tensor(u64), i8);
	Tensor(i16) _Tensor_index_fill_i16 (Tensor(i16), size_t, Tensor(u64), i16);
	Tensor(i32) _Tensor_index_fill_i32 (Tensor(i32), size_t, Tensor(u64), i32);
	Tensor(i64) _Tensor_index_fill_i64 (Tensor(i64), size_t, Tensor(u64), i64);
	Tensor(i128) _Tensor_index_fill_i128 (Tensor(i128), size_t, Tensor(u64), i128);

	Tensor(u8) _Tensor_index_fill_u8 (Tensor(u8), size_t, Tensor(u64), u8);
	Tensor(u16) _Tensor_index_fill_u16 (Tensor(u16), size_t, Tensor(u64), u16);
	Tensor(u32) _Tensor_index_fill_u32 (Tensor(u32), size_t, Tensor(u64), u32);
	Tensor(u64) _Tensor_index_fill_u64 (Tensor(u64), size_t, Tensor(u64), u64);
	Tensor(u128) _Tensor_index_fill_u128 (Tensor(u128), size_t, Tensor(u64), u128);

	Tensor(f16) _Tensor_index_fill_f16 (Tensor(f16), size_t, Tensor(u64), f16);
	Tensor(f32) _Tensor_index_fill_f32 (Tensor(f32), size_t, Tensor(u64), f32);
	Tensor(f64) _Tensor_index_fill_f64 (Tensor(f64), size_t, Tensor(u64), f64);
	Tensor(f80) _Tensor_index_fill_f80 (Tensor(f80), size_t, Tensor(u64), f80);
	Tensor(f128) _Tensor_index_fill_f128 (Tensor(f128), size_t, Tensor(u64), f128);

	Tensor(cf16) _Tensor_index_fill_cf16 (Tensor(cf16), size_t, Tensor(u64), cf16);
	Tensor(cf32) _Tensor_index_fill_cf32 (Tensor(cf32), size_t, Tensor(u64), cf32);
	Tensor(cf64) _Tensor_index_fill_cf64 (Tensor(cf64), size_t, Tensor(u64), cf64);
	Tensor(cf80) _Tensor_index_fill_cf80 (Tensor(cf80), size_t, Tensor(u64), cf80);
	Tensor(cf128) _Tensor_index_fill_cf128 (Tensor(cf128), size_t, Tensor(u64), cf128);

	Tensor(bool) _Tensor_index_fill_bool_ (Tensor(bool), size_t, Tensor(u64), bool);

	Tensor(i8) _Tensor_index_fill_i8_ (Tensor(i8), size_t, Tensor(u64), i8);
	Tensor(i16) _Tensor_index_fill_i16_ (Tensor(i16), size_t, Tensor(u64), i16);
	Tensor(i32) _Tensor_index_fill_i32_ (Tensor(i32), size_t, Tensor(u64), i32);
	Tensor(i64) _Tensor_index_fill_i64_ (Tensor(i64), size_t, Tensor(u64), i64);
	Tensor(i128) _Tensor_index_fill_i128_ (Tensor(i128), size_t, Tensor(u64), i128);

	Tensor(u8) _Tensor_index_fill_u8_ (Tensor(u8), size_t, Tensor(u64), u8);
	Tensor(u16) _Tensor_index_fill_u16_ (Tensor(u16), size_t, Tensor(u64), u16);
	Tensor(u32) _Tensor_index_fill_u32_ (Tensor(u32), size_t, Tensor(u64), u32);
	Tensor(u64) _Tensor_index_fill_u64_ (Tensor(u64), size_t, Tensor(u64), u64);
	Tensor(u128) _Tensor_index_fill_u128_ (Tensor(u128), size_t, Tensor(u64), u128);

	Tensor(f16) _Tensor_index_fill_f16_ (Tensor(f16), size_t, Tensor(u64), f16);
	Tensor(f32) _Tensor_index_fill_f32_ (Tensor(f32), size_t, Tensor(u64), f32);
	Tensor(f64) _Tensor_index_fill_f64_ (Tensor(f64), size_t, Tensor(u64), f64);
	Tensor(f80) _Tensor_index_fill_f80_ (Tensor(f80), size_t, Tensor(u64), f80);
	Tensor(f128) _Tensor_index_fill_f128_ (Tensor(f128), size_t, Tensor(u64), f128);

	Tensor(cf16) _Tensor_index_fill_cf16_ (Tensor(cf16), size_t, Tensor(u64), cf16);
	Tensor(cf32) _Tensor_index_fill_cf32_ (Tensor(cf32), size_t, Tensor(u64), cf32);
	Tensor(cf64) _Tensor_index_fill_cf64_ (Tensor(cf64), size_t, Tensor(u64), cf64);
	Tensor(cf80) _Tensor_index_fill_cf80_ (Tensor(cf80), size_t, Tensor(u64), cf80);
	Tensor(cf128) _Tensor_index_fill_cf128_ (Tensor(cf128), size_t, Tensor(u64), cf128);

#ifdef __cplusplus
}
#endif

#endif

