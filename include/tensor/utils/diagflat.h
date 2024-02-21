
#ifndef __TENSOR_UTILS_DIAGFLAT_H__
#define __TENSOR_UTILS_DIAGFLAT_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(bool) _Tensor_diagflat_bool (Tensor(bool), i64);

	Tensor(i8) _Tensor_diagflat_i8 (Tensor(i8), i64);
	Tensor(i16) _Tensor_diagflat_i16 (Tensor(i16), i64);
	Tensor(i32) _Tensor_diagflat_i32 (Tensor(i32), i64);
	Tensor(i64) _Tensor_diagflat_i64 (Tensor(i64), i64);
	Tensor(i128) _Tensor_diagflat_i128 (Tensor(i128), i64);

	Tensor(u8) _Tensor_diagflat_u8 (Tensor(u8), i64);
	Tensor(u16) _Tensor_diagflat_u16 (Tensor(u16), i64);
	Tensor(u32) _Tensor_diagflat_u32 (Tensor(u32), i64);
	Tensor(u64) _Tensor_diagflat_u64 (Tensor(u64), i64);
	Tensor(u128) _Tensor_diagflat_u128 (Tensor(u128), i64);

	Tensor(f16) _Tensor_diagflat_f16 (Tensor(f16), i64);
	Tensor(f32) _Tensor_diagflat_f32 (Tensor(f32), i64);
	Tensor(f64) _Tensor_diagflat_f64 (Tensor(f64), i64);
	Tensor(f80) _Tensor_diagflat_f80 (Tensor(f80), i64);
	Tensor(f128) _Tensor_diagflat_f128 (Tensor(f128), i64);

	Tensor(cf16) _Tensor_diagflat_cf16 (Tensor(cf16), i64);
	Tensor(cf32) _Tensor_diagflat_cf32 (Tensor(cf32), i64);
	Tensor(cf64) _Tensor_diagflat_cf64 (Tensor(cf64), i64);
	Tensor(cf80) _Tensor_diagflat_cf80 (Tensor(cf80), i64);
	Tensor(cf128) _Tensor_diagflat_cf128 (Tensor(cf128), i64);

#ifdef __cplusplus
}
#endif

#endif
