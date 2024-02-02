
#ifndef __TENSOR_UTILS_MALLOC_ZEROS_H__
#define __TENSOR_UTILS_MALLOC_ZEROS_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "../../type.h"
#include "../_utils.h"

	Tensor(bool) _Tensor_zeros_bool (size_t, size_t *, bool);

	Tensor(i8) _Tensor_zeros_i8 (size_t, size_t *, bool);
	Tensor(i16) _Tensor_zeros_i16 (size_t, size_t *, bool);
	Tensor(i32) _Tensor_zeros_i32 (size_t, size_t *, bool);
	Tensor(i64) _Tensor_zeros_i64 (size_t, size_t *, bool);
	Tensor(i128) _Tensor_zeros_i128 (size_t, size_t *, bool);

	Tensor(u8) _Tensor_zeros_u8 (size_t, size_t *, bool);
	Tensor(u16) _Tensor_zeros_u16 (size_t, size_t *, bool);
	Tensor(u32) _Tensor_zeros_u32 (size_t, size_t *, bool);
	Tensor(u64) _Tensor_zeros_u64 (size_t, size_t *, bool);
	Tensor(u128) _Tensor_zeros_u128 (size_t, size_t *, bool);
	
	Tensor(f16) _Tensor_zeros_f16 (size_t, size_t *, bool);
	Tensor(f32) _Tensor_zeros_f32 (size_t, size_t *, bool);
	Tensor(f64) _Tensor_zeros_f64 (size_t, size_t *, bool);
	Tensor(f80) _Tensor_zeros_f80 (size_t, size_t *, bool);
	Tensor(f128) _Tensor_zeros_f128 (size_t, size_t *, bool);
	
#if __ENABLE_COMPLEX__

	Tensor(cf16) _Tensor_zeros_cf16 (size_t, size_t *, bool);
	Tensor(cf32) _Tensor_zeros_cf32 (size_t, size_t *, bool);
	Tensor(cf64) _Tensor_zeros_cf64 (size_t, size_t *, bool);
	Tensor(cf80) _Tensor_zeros_cf80 (size_t, size_t *, bool);
	Tensor(cf128) _Tensor_zeros_cf128 (size_t, size_t *, bool);

#endif

#ifdef __cplusplus
}
#endif

#endif
