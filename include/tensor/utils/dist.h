
#ifndef __TENSOR_UTILS_DIST_H__
#define __TENSOR_UTILS_DIST_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(i8) _Tensor_dist_i8 (Tensor(i8), Tensor(i8), double);
	Tensor(i16) _Tensor_dist_i16 (Tensor(i16), Tensor(i16), double);
	Tensor(i32) _Tensor_dist_i32 (Tensor(i32), Tensor(i32), double);
	Tensor(i64) _Tensor_dist_i64 (Tensor(i64), Tensor(i64), double);
	Tensor(i128) _Tensor_dist_i128 (Tensor(i128), Tensor(i128), double);

	Tensor(u8) _Tensor_dist_u8 (Tensor(u8), Tensor(u8), double);
	Tensor(u16) _Tensor_dist_u16 (Tensor(u16), Tensor(u16), double);
	Tensor(u32) _Tensor_dist_u32 (Tensor(u32), Tensor(u32), double);
	Tensor(u64) _Tensor_dist_u64 (Tensor(u64), Tensor(u64), double);
	Tensor(u128) _Tensor_dist_u128 (Tensor(u128), Tensor(u128), double);

	Tensor(f16) _Tensor_dist_f16 (Tensor(f16), Tensor(f16), double);
	Tensor(f32) _Tensor_dist_f32 (Tensor(f32), Tensor(f32), double);
	Tensor(f64) _Tensor_dist_f64 (Tensor(f64), Tensor(f64), double);
	Tensor(f80) _Tensor_dist_f80 (Tensor(f80), Tensor(f80), double);
	Tensor(f128) _Tensor_dist_f128 (Tensor(f128), Tensor(f128), double);

	Tensor(cf16) _Tensor_dist_cf16 (Tensor(cf16), Tensor(cf16), double);
	Tensor(cf32) _Tensor_dist_cf32 (Tensor(cf32), Tensor(cf32), double);
	Tensor(cf64) _Tensor_dist_cf64 (Tensor(cf64), Tensor(cf64), double);
	Tensor(cf80) _Tensor_dist_cf80 (Tensor(cf80), Tensor(cf80), double);
	Tensor(cf128) _Tensor_dist_cf128 (Tensor(cf128), Tensor(cf128), double);

#ifdef __cplusplus
}
#endif

#endif
