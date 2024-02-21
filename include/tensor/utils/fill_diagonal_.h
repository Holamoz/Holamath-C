
#ifndef __TENSOR_UTILS_FILL_DIAGONAL__H__
#define __TENSOR_UTILS_FILL_DIAGONAL__H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(bool) _Tensor_fill_diagonal_bool_ (Tensor(bool), bool);

	Tensor(i8) _Tensor_fill_diagonal_i8_ (Tensor(i8), i8);
	Tensor(i16) _Tensor_fill_diagonal_i16_ (Tensor(i16), i16);
	Tensor(i32) _Tensor_fill_diagonal_i32_ (Tensor(i32), i32);
	Tensor(i64) _Tensor_fill_diagonal_i64_ (Tensor(i64), i64);
	Tensor(i128) _Tensor_fill_diagonal_i128_ (Tensor(i128), i128);

	Tensor(u8) _Tensor_fill_diagonal_u8_ (Tensor(u8), u8);
	Tensor(u16) _Tensor_fill_diagonal_u16_ (Tensor(u16), u16);
	Tensor(u32) _Tensor_fill_diagonal_u32_ (Tensor(u32), u32);
	Tensor(u64) _Tensor_fill_diagonal_u64_ (Tensor(u64), u64);
	Tensor(u128) _Tensor_fill_diagonal_u128_ (Tensor(u128), u128);

	Tensor(f16) _Tensor_fill_diagonal_f16_ (Tensor(f16), f16);
	Tensor(f32) _Tensor_fill_diagonal_f32_ (Tensor(f32), f32);
	Tensor(f64) _Tensor_fill_diagonal_f64_ (Tensor(f64), f64);
	Tensor(f80) _Tensor_fill_diagonal_f80_ (Tensor(f80), f80);
	Tensor(f128) _Tensor_fill_diagonal_f128_ (Tensor(f128), f128);

	Tensor(cf16) _Tensor_fill_diagonal_cf16_ (Tensor(cf16), cf16);
	Tensor(cf32) _Tensor_fill_diagonal_cf32_ (Tensor(cf32), cf32);
	Tensor(cf64) _Tensor_fill_diagonal_cf64_ (Tensor(cf64), cf64);
	Tensor(cf80) _Tensor_fill_diagonal_cf80_ (Tensor(cf80), cf80);
	Tensor(cf128) _Tensor_fill_diagonal_cf128_ (Tensor(cf128), cf128);

#ifdef __cplusplus
}
#endif

#endif
