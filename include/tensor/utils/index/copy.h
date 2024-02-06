
#ifndef __TENSOR_UTILS_INTEX_COPY_H__
#define __TENSOR_UTILS_INTEX_COPY_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "../_utils.h"
#include "../../type.h"

	/*
	 * Tensor(Type)
	 * input, dim, len of index, index, tensor
	 */

	Tensor(bool) _Tensor_index_copy_bool (Tensor(bool), size_t, size_t, size_t *, Tensor(bool));

	Tensor(i8) _Tensor_index_copy_i8 (Tensor(i8), size_t, size_t, size_t *, Tensor(i8));
	Tensor(i16) _Tensor_index_copy_i16 (Tensor(i16), size_t, size_t, size_t *, Tensor(i16));
	Tensor(i32) _Tensor_index_copy_i32 (Tensor(i32), size_t, size_t, size_t *, Tensor(i32));
	Tensor(i64) _Tensor_index_copy_i64 (Tensor(i64), size_t, size_t, size_t *, Tensor(i64));
	Tensor(i128) _Tensor_index_copy_i128 (Tensor(i128), size_t, size_t, size_t *, Tensor(i128));

	Tensor(u8) _Tensor_index_copy_u8 (Tensor(u8), size_t, size_t, size_t *, Tensor(u8));
	Tensor(u16) _Tensor_index_copy_u16 (Tensor(u16), size_t, size_t, size_t *, Tensor(u16));
	Tensor(u32) _Tensor_index_copy_u32 (Tensor(u32), size_t, size_t, size_t *, Tensor(u32));
	Tensor(u64) _Tensor_index_copy_u64 (Tensor(u64), size_t, size_t, size_t *, Tensor(u64));
	Tensor(u128) _Tensor_index_copy_u128 (Tensor(u128), size_t, size_t, size_t *, Tensor(u128));

	Tensor(f16) _Tensor_index_copy_f16 (Tensor(f16), size_t, size_t, size_t *, Tensor(f16));
	Tensor(f32) _Tensor_index_copy_f32 (Tensor(f32), size_t, size_t, size_t *, Tensor(f32));
	Tensor(f64) _Tensor_index_copy_f64 (Tensor(f64), size_t, size_t, size_t *, Tensor(f64));
	Tensor(f80) _Tensor_index_copy_f80 (Tensor(f80), size_t, size_t, size_t *, Tensor(f80));
	Tensor(f128) _Tensor_index_copy_f128 (Tensor(f128), size_t, size_t, size_t *, Tensor(f128));

#if __ENABLE_COMPLEX__

	Tensor(cf16) _Tensor_index_copy_cf16 (Tensor(cf16), size_t, size_t, size_t *, Tensor(cf16));
	Tensor(cf32) _Tensor_index_copy_cf32 (Tensor(cf32), size_t, size_t, size_t *, Tensor(cf32));
	Tensor(cf64) _Tensor_index_copy_cf64 (Tensor(cf64), size_t, size_t, size_t *, Tensor(cf64));
	Tensor(cf80) _Tensor_index_copy_cf80 (Tensor(cf80), size_t, size_t, size_t *, Tensor(cf80));
	Tensor(cf128) _Tensor_index_copy_cf128 (Tensor(cf128), size_t, size_t, size_t *, Tensor(cf128));

#endif

#ifdef __cplusplus
}
#endif

#endif
