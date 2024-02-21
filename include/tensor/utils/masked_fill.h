
#ifndef __TENSOR_UTILS_MASKED_FILL_H__
#define __TENSOR_UTILS_MASKED_FILL_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(bool) _Tensor_masked_fill_bool (Tensor(bool), bool);

	Tensor(i8) _Tensor_masked_fill_i8 (Tensor(bool), i8);
	Tensor(i16) _Tensor_masked_fill_i16 (Tensor(bool), i16);
	Tensor(i32) _Tensor_masked_fill_i32 (Tensor(bool), i32);
	Tensor(i64) _Tensor_masked_fill_i64 (Tensor(bool), i64);
	Tensor(i128) _Tensor_masked_fill_i128 (Tensor(bool), i128);

	Tensor(u8) _Tensor_masked_fill_u8 (Tensor(bool), u8);
	Tensor(u16) _Tensor_masked_fill_u16 (Tensor(bool), u16);
	Tensor(u32) _Tensor_masked_fill_u32 (Tensor(bool), u32);
	Tensor(u64) _Tensor_masked_fill_u64 (Tensor(bool), u64);
	Tensor(u128) _Tensor_masked_fill_u128 (Tensor(bool), u128);

	Tensor(f16) _Tensor_masked_fill_f16 (Tensor(bool), f16);
	Tensor(f32) _Tensor_masked_fill_f32 (Tensor(bool), f32);
	Tensor(f64) _Tensor_masked_fill_f64 (Tensor(bool), f64);
	Tensor(f80) _Tensor_masked_fill_f80 (Tensor(bool), f80);
	Tensor(f128) _Tensor_masked_fill_f128 (Tensor(bool), f128);

	Tensor(cf16) _Tensor_masked_fill_cf16 (Tensor(bool), cf16);
	Tensor(cf32) _Tensor_masked_fill_cf32 (Tensor(bool), cf32);
	Tensor(cf64) _Tensor_masked_fill_cf64 (Tensor(bool), cf64);
	Tensor(cf80) _Tensor_masked_fill_cf80 (Tensor(bool), cf80);
	Tensor(cf128) _Tensor_masked_fill_cf128 (Tensor(bool), cf128);


	Tensor(bool) _Tensor_masked_fill_bool_ (Tensor(bool), bool);

	Tensor(i8) _Tensor_masked_fill_i8_ (Tensor(bool), i8);
	Tensor(i16) _Tensor_masked_fill_i16_ (Tensor(bool), i16);
	Tensor(i32) _Tensor_masked_fill_i32_ (Tensor(bool), i32);
	Tensor(i64) _Tensor_masked_fill_i64_ (Tensor(bool), i64);
	Tensor(i128) _Tensor_masked_fill_i128_ (Tensor(bool), i128);

	Tensor(u8) _Tensor_masked_fill_u8_ (Tensor(bool), u8);
	Tensor(u16) _Tensor_masked_fill_u16_ (Tensor(bool), u16);
	Tensor(u32) _Tensor_masked_fill_u32_ (Tensor(bool), u32);
	Tensor(u64) _Tensor_masked_fill_u64_ (Tensor(bool), u64);
	Tensor(u128) _Tensor_masked_fill_u128_ (Tensor(bool), u128);

	Tensor(f16) _Tensor_masked_fill_f16_ (Tensor(bool), f16);
	Tensor(f32) _Tensor_masked_fill_f32_ (Tensor(bool), f32);
	Tensor(f64) _Tensor_masked_fill_f64_ (Tensor(bool), f64);
	Tensor(f80) _Tensor_masked_fill_f80_ (Tensor(bool), f80);
	Tensor(f128) _Tensor_masked_fill_f128_ (Tensor(bool), f128);

	Tensor(cf16) _Tensor_masked_fill_cf16_ (Tensor(bool), cf16);
	Tensor(cf32) _Tensor_masked_fill_cf32_ (Tensor(bool), cf32);
	Tensor(cf64) _Tensor_masked_fill_cf64_ (Tensor(bool), cf64);
	Tensor(cf80) _Tensor_masked_fill_cf80_ (Tensor(bool), cf80);
	Tensor(cf128) _Tensor_masked_fill_cf128_ (Tensor(bool), cf128);

#ifdef __cplusplus
}
#endif

#endif
