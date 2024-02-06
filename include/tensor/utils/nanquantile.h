
#ifndef __TENSOR_UTILS_NANQUANTILE_H__
#define __TENSOR_UTILS_NANQUANTILE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(bool) _Tensor_nanquantile_bool (Tensor(bool), Tensor(f64));

	Tensor(i8) _Tensor_nanquantile_i8 (Tensor(i8), Tensor(f64));
	Tensor(i16) _Tensor_nanquantile_i16 (Tensor(i16), Tensor(f64));
	Tensor(i32) _Tensor_nanquantile_i32 (Tensor(i32), Tensor(f64));
	Tensor(i64) _Tensor_nanquantile_i64 (Tensor(i64), Tensor(f64));
	Tensor(i128) _Tensor_nanquantile_i128 (Tensor(i128), Tensor(f64));

	Tensor(u8) _Tensor_nanquantile_u8 (Tensor(u8), Tensor(f64));
	Tensor(u16) _Tensor_nanquantile_u16 (Tensor(u16), Tensor(f64));
	Tensor(u32) _Tensor_nanquantile_u32 (Tensor(u32), Tensor(f64));
	Tensor(u64) _Tensor_nanquantile_u64 (Tensor(u64), Tensor(f64));
	Tensor(u128) _Tensor_nanquantile_u128 (Tensor(u128), Tensor(f64));

	Tensor(f16) _Tensor_nanquantile_f16 (Tensor(f16), Tensor(f64));
	Tensor(f32) _Tensor_nanquantile_f32 (Tensor(f32), Tensor(f64));
	Tensor(f64) _Tensor_nanquantile_f64 (Tensor(f64), Tensor(f64));
	Tensor(f80) _Tensor_nanquantile_f80 (Tensor(f80), Tensor(f64));
	Tensor(f128) _Tensor_nanquantile_f128 (Tensor(f128), Tensor(f64));

#if __ENABLE_COMPLEX__

	Tensor(cf16) _Tensor_nanquantile_cf16 (Tensor(cf16), Tensor(f64));
	Tensor(cf32) _Tensor_nanquantile_cf32 (Tensor(cf32), Tensor(f64));
	Tensor(cf64) _Tensor_nanquantile_cf64 (Tensor(cf64), Tensor(f64));
	Tensor(cf80) _Tensor_nanquantile_cf80 (Tensor(cf80), Tensor(f64));
	Tensor(cf128) _Tensor_nanquantile_cf128 (Tensor(cf128), Tensor(f64));

#endif

#ifdef __cplusplus
}
#endif

#endif
