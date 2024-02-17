
#ifndef __TENSOR_UTILS_ISREAL_H__
#define __TENSOR_UTILS_ISREAL_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(bool) _Tensor_isreal_i8 (Tensor(i8));
	Tensor(bool) _Tensor_isreal_i16 (Tensor(i16));
	Tensor(bool) _Tensor_isreal_i32 (Tensor(i32));
	Tensor(bool) _Tensor_isreal_i64 (Tensor(i64));
	Tensor(bool) _Tensor_isreal_i128 (Tensor(i128));

	Tensor(bool) _Tensor_isreal_u8 (Tensor(u8));
	Tensor(bool) _Tensor_isreal_u16 (Tensor(u16));
	Tensor(bool) _Tensor_isreal_u32 (Tensor(u32));
	Tensor(bool) _Tensor_isreal_u64 (Tensor(u64));
	Tensor(bool) _Tensor_isreal_u128 (Tensor(u128));

	Tensor(bool) _Tensor_isreal_f16 (Tensor(f16));
	Tensor(bool) _Tensor_isreal_f32 (Tensor(f32));
	Tensor(bool) _Tensor_isreal_f64 (Tensor(f64));
	Tensor(bool) _Tensor_isreal_f80 (Tensor(f80));
	Tensor(bool) _Tensor_isreal_f128 (Tensor(f128));

	Tensor(bool) _Tensor_isreal_cf16 (Tensor(cf16));
	Tensor(bool) _Tensor_isreal_cf32 (Tensor(cf32));
	Tensor(bool) _Tensor_isreal_cf64 (Tensor(cf64));
	Tensor(bool) _Tensor_isreal_cf80 (Tensor(cf80));
	Tensor(bool) _Tensor_isreal_cf128 (Tensor(cf128));

#ifdef __cplusplus
}
#endif

#endif
