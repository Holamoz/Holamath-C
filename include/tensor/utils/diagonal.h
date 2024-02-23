
#ifndef __TENSOR_UTILS_DIAGONAL_H__
#define __TENSOR_UTILS_DIAGONAL_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(bool) _Tensor_diagonal_bool (Tensor(bool), i64, size_t, size_t);

	Tensor(i8) _Tensor_diagonal_i8 (Tensor(i8), i64, size_t, size_t);
	Tensor(i16) _Tensor_diagonal_i16 (Tensor(i16), i64, size_t, size_t);
	Tensor(i32) _Tensor_diagonal_i32 (Tensor(i32), i64, size_t, size_t);
	Tensor(i64) _Tensor_diagonal_i64 (Tensor(i64), i64, size_t, size_t);
	Tensor(i128) _Tensor_diagonal_i128 (Tensor(i128), i64, size_t, size_t);

	Tensor(u8) _Tensor_diagonal_u8 (Tensor(u8), i64, size_t, size_t);
	Tensor(u16) _Tensor_diagonal_u16 (Tensor(u16), i64, size_t, size_t);
	Tensor(u32) _Tensor_diagonal_u32 (Tensor(u32), i64, size_t, size_t);
	Tensor(u64) _Tensor_diagonal_u64 (Tensor(u64), i64, size_t, size_t);
	Tensor(u128) _Tensor_diagonal_u128 (Tensor(u128), i64, size_t, size_t);

	Tensor(f16) _Tensor_diagonal_f16 (Tensor(f16), i64, size_t, size_t);
	Tensor(f32) _Tensor_diagonal_f32 (Tensor(f32), i64, size_t, size_t);
	Tensor(f64) _Tensor_diagonal_f64 (Tensor(f64), i64, size_t, size_t);
	Tensor(f80) _Tensor_diagonal_f80 (Tensor(f80), i64, size_t, size_t);
	Tensor(f128) _Tensor_diagonal_f128 (Tensor(f128), i64, size_t, size_t);

	Tensor(cf16) _Tensor_diagonal_cf16 (Tensor(cf16), i64, size_t, size_t);
	Tensor(cf32) _Tensor_diagonal_cf32 (Tensor(cf32), i64, size_t, size_t);
	Tensor(cf64) _Tensor_diagonal_cf64 (Tensor(cf64), i64, size_t, size_t);
	Tensor(cf80) _Tensor_diagonal_cf80 (Tensor(cf80), i64, size_t, size_t);
	Tensor(cf128) _Tensor_diagonal_cf128 (Tensor(cf128), i64, size_t, size_t);

#ifdef __cplusplus
}
#endif

#endif
