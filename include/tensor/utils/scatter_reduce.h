
#ifndef __TENSOR_UTILS_SCATTER_REDUCE_H__
#define __TENSOR_UTILS_SCATTER_REDUCE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	enum TENSOR_SCATTER_REDUCE_FUNC {
		TENSOR_SCATTER_REDUCE_FUNC_SUM,
		TENSOR_SCATTER_REDUCE_FUNC_PROD,
		TENSOR_SCATTER_REDUCE_FUNC_MEAN,
		TENSOR_SCATTER_REDUCE_FUNC_AMAX,
		TENSOR_SCATTER_REDUCE_FUNC_AMIN,
	};

	Tensor(bool) _Tensor_scatter_reduce_bool (Tensor(bool), size_t, Tensor(u64), Tensor(bool), enum TENSOR_SCATTER_REDUCE_FUNC);

	Tensor(i8) _Tensor_scatter_reduce_i8 (Tensor(i8), size_t, Tensor(u64), Tensor(i8), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(i16) _Tensor_scatter_reduce_i16 (Tensor(i16), size_t, Tensor(u64), Tensor(i16), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(i32) _Tensor_scatter_reduce_i32 (Tensor(i32), size_t, Tensor(u64), Tensor(i32), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(i64) _Tensor_scatter_reduce_i64 (Tensor(i64), size_t, Tensor(u64), Tensor(i64), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(i128) _Tensor_scatter_reduce_i128 (Tensor(i128), size_t, Tensor(u64), Tensor(i128), enum TENSOR_SCATTER_REDUCE_FUNC);

	Tensor(u8) _Tensor_scatter_reduce_u8 (Tensor(u8), size_t, Tensor(u64), Tensor(u8), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(u16) _Tensor_scatter_reduce_u16 (Tensor(u16), size_t, Tensor(u64), Tensor(u16), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(u32) _Tensor_scatter_reduce_u32 (Tensor(u32), size_t, Tensor(u64), Tensor(u32), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(u64) _Tensor_scatter_reduce_u64 (Tensor(u64), size_t, Tensor(u64), Tensor(u64), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(u128) _Tensor_scatter_reduce_u128 (Tensor(u128), size_t, Tensor(u64), Tensor(u128), enum TENSOR_SCATTER_REDUCE_FUNC);

	Tensor(f16) _Tensor_scatter_reduce_f16 (Tensor(f16), size_t, Tensor(u64), Tensor(f16), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(f32) _Tensor_scatter_reduce_f32 (Tensor(f32), size_t, Tensor(u64), Tensor(f32), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(f64) _Tensor_scatter_reduce_f64 (Tensor(f64), size_t, Tensor(u64), Tensor(f64), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(f80) _Tensor_scatter_reduce_f80 (Tensor(f80), size_t, Tensor(u64), Tensor(f80), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(f128) _Tensor_scatter_reduce_f128 (Tensor(f128), size_t, Tensor(u64), Tensor(f128), enum TENSOR_SCATTER_REDUCE_FUNC);

	Tensor(cf16) _Tensor_scatter_reduce_cf16 (Tensor(cf16), size_t, Tensor(u64), Tensor(cf16), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(cf32) _Tensor_scatter_reduce_cf32 (Tensor(cf32), size_t, Tensor(u64), Tensor(cf32), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(cf64) _Tensor_scatter_reduce_cf64 (Tensor(cf64), size_t, Tensor(u64), Tensor(cf64), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(cf80) _Tensor_scatter_reduce_cf80 (Tensor(cf80), size_t, Tensor(u64), Tensor(cf80), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(cf128) _Tensor_scatter_reduce_cf128 (Tensor(cf128), size_t, Tensor(u64), Tensor(cf128), enum TENSOR_SCATTER_REDUCE_FUNC);

	Tensor(bool) _Tensor_scatter_reduce_bool_ (Tensor(bool), size_t, Tensor(u64), Tensor(bool), enum TENSOR_SCATTER_REDUCE_FUNC);

	Tensor(i8) _Tensor_scatter_reduce_i8_ (Tensor(i8), size_t, Tensor(u64), Tensor(i8), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(i16) _Tensor_scatter_reduce_i16_ (Tensor(i16), size_t, Tensor(u64), Tensor(i16), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(i32) _Tensor_scatter_reduce_i32_ (Tensor(i32), size_t, Tensor(u64), Tensor(i32), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(i64) _Tensor_scatter_reduce_i64_ (Tensor(i64), size_t, Tensor(u64), Tensor(i64), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(i128) _Tensor_scatter_reduce_i128_ (Tensor(i128), size_t, Tensor(u64), Tensor(i128), enum TENSOR_SCATTER_REDUCE_FUNC);

	Tensor(u8) _Tensor_scatter_reduce_u8_ (Tensor(u8), size_t, Tensor(u64), Tensor(u8), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(u16) _Tensor_scatter_reduce_u16_ (Tensor(u16), size_t, Tensor(u64), Tensor(u16), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(u32) _Tensor_scatter_reduce_u32_ (Tensor(u32), size_t, Tensor(u64), Tensor(u32), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(u64) _Tensor_scatter_reduce_u64_ (Tensor(u64), size_t, Tensor(u64), Tensor(u64), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(u128) _Tensor_scatter_reduce_u128_ (Tensor(u128), size_t, Tensor(u64), Tensor(u128), enum TENSOR_SCATTER_REDUCE_FUNC);

	Tensor(f16) _Tensor_scatter_reduce_f16_ (Tensor(f16), size_t, Tensor(u64), Tensor(f16), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(f32) _Tensor_scatter_reduce_f32_ (Tensor(f32), size_t, Tensor(u64), Tensor(f32), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(f64) _Tensor_scatter_reduce_f64_ (Tensor(f64), size_t, Tensor(u64), Tensor(f64), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(f80) _Tensor_scatter_reduce_f80_ (Tensor(f80), size_t, Tensor(u64), Tensor(f80), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(f128) _Tensor_scatter_reduce_f128_ (Tensor(f128), size_t, Tensor(u64), Tensor(f128), enum TENSOR_SCATTER_REDUCE_FUNC);

	Tensor(cf16) _Tensor_scatter_reduce_cf16_ (Tensor(cf16), size_t, Tensor(u64), Tensor(cf16), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(cf32) _Tensor_scatter_reduce_cf32_ (Tensor(cf32), size_t, Tensor(u64), Tensor(cf32), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(cf64) _Tensor_scatter_reduce_cf64_ (Tensor(cf64), size_t, Tensor(u64), Tensor(cf64), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(cf80) _Tensor_scatter_reduce_cf80_ (Tensor(cf80), size_t, Tensor(u64), Tensor(cf80), enum TENSOR_SCATTER_REDUCE_FUNC);
	Tensor(cf128) _Tensor_scatter_reduce_cf128_ (Tensor(cf128), size_t, Tensor(u64), Tensor(cf128), enum TENSOR_SCATTER_REDUCE_FUNC);

#ifdef __cplusplus
}
#endif

#endif
