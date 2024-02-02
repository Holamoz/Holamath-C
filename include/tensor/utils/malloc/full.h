
#ifndef __TENSOR_UTILS_MALLOC_FULL_H__
#define __TENSOR_UTILS_MALLOC_FULL_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "../../type.h"
#include "../_utils.h"

	Tensor(bool) _Tensor_full_bool (size_t, size_t *, bool, bool);

	Tensor(i8) _Tensor_full_i8 (size_t, size_t *, i8, bool);
	Tensor(i16) _Tensor_full_i16 (size_t, size_t *, i16, bool);
	Tensor(i32) _Tensor_full_i32 (size_t, size_t *, i32, bool);
	Tensor(i64) _Tensor_full_i64 (size_t, size_t *, i64, bool);
	Tensor(i128) _Tensor_full_i128 (size_t, size_t *, i128, bool);

	Tensor(u8) _Tensor_full_u8 (size_t, size_t *, u8, bool);
	Tensor(u16) _Tensor_full_u16 (size_t, size_t *, u16, bool);
	Tensor(u32) _Tensor_full_u32 (size_t, size_t *, u32, bool);
	Tensor(u64) _Tensor_full_u64 (size_t, size_t *, u64, bool);
	Tensor(u128) _Tensor_full_u128 (size_t, size_t *, u128, bool);
	
	Tensor(f16) _Tensor_full_f16 (size_t, size_t *, f16, bool);
	Tensor(f32) _Tensor_full_f32 (size_t, size_t *, f32, bool);
	Tensor(f64) _Tensor_full_f64 (size_t, size_t *, f64, bool);
	Tensor(f80) _Tensor_full_f80 (size_t, size_t *, f80, bool);
	Tensor(f128) _Tensor_full_f128 (size_t, size_t *, f128, bool);
	
#if __ENABLE_COMPLEX__

	Tensor(cf16) _Tensor_full_cf16 (size_t, size_t *, cf16, bool);
	Tensor(cf32) _Tensor_full_cf32 (size_t, size_t *, cf32, bool);
	Tensor(cf64) _Tensor_full_cf64 (size_t, size_t *, cf64, bool);
	Tensor(cf80) _Tensor_full_cf80 (size_t, size_t *, cf80, bool);
	Tensor(cf128) _Tensor_full_cf128 (size_t, size_t *, cf128, bool);

#endif

#ifdef __cplusplus
}
#endif

#endif
