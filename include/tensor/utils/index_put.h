
#ifndef __TENSOR_UTILS_INDEX_PUI_H__
#define __TENSOR_UTILS_INDEX_PUI_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(bool) _Tensor_index_put_bool (Tensor(bool), size_t, Tensor(u64) *, Tensor(bool));

	Tensor(i8) _Tensor_index_put_i8 (Tensor(i8), size_t, Tensor(u64) *, Tensor(i8));
	Tensor(i16) _Tensor_index_put_i16 (Tensor(i16), size_t, Tensor(u64) *, Tensor(i16));
	Tensor(i32) _Tensor_index_put_i32 (Tensor(i32), size_t, Tensor(u64) *, Tensor(i32));
	Tensor(i64) _Tensor_index_put_i64 (Tensor(i64), size_t, Tensor(u64) *, Tensor(i64));
	Tensor(i128) _Tensor_index_put_i128 (Tensor(i128), size_t, Tensor(u64) *, Tensor(i128));

	Tensor(u8) _Tensor_index_put_u8 (Tensor(u8), size_t, Tensor(u64) *, Tensor(u8));
	Tensor(u16) _Tensor_index_put_u16 (Tensor(u16), size_t, Tensor(u64) *, Tensor(u16));
	Tensor(u32) _Tensor_index_put_u32 (Tensor(u32), size_t, Tensor(u64) *, Tensor(u32));
	Tensor(u64) _Tensor_index_put_u64 (Tensor(u64), size_t, Tensor(u64) *, Tensor(u64));
	Tensor(u128) _Tensor_index_put_u128 (Tensor(u128), size_t, Tensor(u64) *, Tensor(u128));

	Tensor(f16) _Tensor_index_put_f16 (Tensor(f16), size_t, Tensor(u64) *, Tensor(f16));
	Tensor(f32) _Tensor_index_put_f32 (Tensor(f32), size_t, Tensor(u64) *, Tensor(f32));
	Tensor(f64) _Tensor_index_put_f64 (Tensor(f64), size_t, Tensor(u64) *, Tensor(f64));
	Tensor(f80) _Tensor_index_put_f80 (Tensor(f80), size_t, Tensor(u64) *, Tensor(f80));
	Tensor(f128) _Tensor_index_put_f128 (Tensor(f128), size_t, Tensor(u64) *, Tensor(f128));

	Tensor(cf16) _Tensor_index_put_cf16 (Tensor(cf16), size_t, Tensor(u64) *, Tensor(cf16));
	Tensor(cf32) _Tensor_index_put_cf32 (Tensor(cf32), size_t, Tensor(u64) *, Tensor(cf32));
	Tensor(cf64) _Tensor_index_put_cf64 (Tensor(cf64), size_t, Tensor(u64) *, Tensor(cf64));
	Tensor(cf80) _Tensor_index_put_cf80 (Tensor(cf80), size_t, Tensor(u64) *, Tensor(cf80));
	Tensor(cf128) _Tensor_index_put_cf128 (Tensor(cf128), size_t, Tensor(u64) *, Tensor(cf128));

	Tensor(bool) _Tensor_index_put_bool_ (Tensor(bool) *, size_t, Tensor(u64) *, Tensor(bool));

	Tensor(i8) _Tensor_index_put_i8_ (Tensor(i8) *, size_t, Tensor(u64) *, Tensor(i8));
	Tensor(i16) _Tensor_index_put_i16_ (Tensor(i16) *, size_t, Tensor(u64) *, Tensor(i16));
	Tensor(i32) _Tensor_index_put_i32_ (Tensor(i32) *, size_t, Tensor(u64) *, Tensor(i32));
	Tensor(i64) _Tensor_index_put_i64_ (Tensor(i64) *, size_t, Tensor(u64) *, Tensor(i64));
	Tensor(i128) _Tensor_index_put_i128_ (Tensor(i128) *, size_t, Tensor(u64) *, Tensor(i128));

	Tensor(u8) _Tensor_index_put_u8_ (Tensor(u8) *, size_t, Tensor(u64) *, Tensor(u8));
	Tensor(u16) _Tensor_index_put_u16_ (Tensor(u16) *, size_t, Tensor(u64) *, Tensor(u16));
	Tensor(u32) _Tensor_index_put_u32_ (Tensor(u32) *, size_t, Tensor(u64) *, Tensor(u32));
	Tensor(u64) _Tensor_index_put_u64_ (Tensor(u64) *, size_t, Tensor(u64) *, Tensor(u64));
	Tensor(u128) _Tensor_index_put_u128_ (Tensor(u128) *, size_t, Tensor(u64) *, Tensor(u128));

	Tensor(f16) _Tensor_index_put_f16_ (Tensor(f16) *, size_t, Tensor(u64) *, Tensor(f16));
	Tensor(f32) _Tensor_index_put_f32_ (Tensor(f32) *, size_t, Tensor(u64) *, Tensor(f32));
	Tensor(f64) _Tensor_index_put_f64_ (Tensor(f64) *, size_t, Tensor(u64) *, Tensor(f64));
	Tensor(f80) _Tensor_index_put_f80_ (Tensor(f80) *, size_t, Tensor(u64) *, Tensor(f80));
	Tensor(f128) _Tensor_index_put_f128_ (Tensor(f128) *, size_t, Tensor(u64) *, Tensor(f128));

	Tensor(cf16) _Tensor_index_put_cf16_ (Tensor(cf16) *, size_t, Tensor(u64) *, Tensor(cf16));
	Tensor(cf32) _Tensor_index_put_cf32_ (Tensor(cf32) *, size_t, Tensor(u64) *, Tensor(cf32));
	Tensor(cf64) _Tensor_index_put_cf64_ (Tensor(cf64) *, size_t, Tensor(u64) *, Tensor(cf64));
	Tensor(cf80) _Tensor_index_put_cf80_ (Tensor(cf80) *, size_t, Tensor(u64) *, Tensor(cf80));
	Tensor(cf128) _Tensor_index_put_cf128_ (Tensor(cf128) *, size_t, Tensor(u64) *, Tensor(cf128));

#ifdef __cplusplus
}
#endif

#endif
