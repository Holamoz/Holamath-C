
#ifndef __TENSOR_UTILS_MASKED_SCATTER_H__
#define __TENSOR_UTILS_MASKED_SCATTER_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(bool) _Tensor_masked_scatter_bool (Tensor(bool), Tensor(bool));

	Tensor(i8) _Tensor_masked_scatter_i8 (Tensor(bool), Tensor(i8));
	Tensor(i16) _Tensor_masked_scatter_i16 (Tensor(bool), Tensor(i16));
	Tensor(i32) _Tensor_masked_scatter_i32 (Tensor(bool), Tensor(i32));
	Tensor(i64) _Tensor_masked_scatter_i64 (Tensor(bool), Tensor(i64));
	Tensor(i128) _Tensor_masked_scatter_i128 (Tensor(bool), Tensor(i128));

	Tensor(u8) _Tensor_masked_scatter_u8 (Tensor(bool), Tensor(u8));
	Tensor(u16) _Tensor_masked_scatter_u16 (Tensor(bool), Tensor(u16));
	Tensor(u32) _Tensor_masked_scatter_u32 (Tensor(bool), Tensor(u32));
	Tensor(u64) _Tensor_masked_scatter_u64 (Tensor(bool), Tensor(u64));
	Tensor(u128) _Tensor_masked_scatter_u128 (Tensor(bool), Tensor(u128));

	Tensor(f16) _Tensor_masked_scatter_f16 (Tensor(bool), Tensor(f16));
	Tensor(f32) _Tensor_masked_scatter_f32 (Tensor(bool), Tensor(f32));
	Tensor(f64) _Tensor_masked_scatter_f64 (Tensor(bool), Tensor(f64));
	Tensor(f80) _Tensor_masked_scatter_f80 (Tensor(bool), Tensor(f80));
	Tensor(f128) _Tensor_masked_scatter_f128 (Tensor(bool), Tensor(f128));

	Tensor(cf16) _Tensor_masked_scatter_cf16 (Tensor(bool), Tensor(cf16));
	Tensor(cf32) _Tensor_masked_scatter_cf32 (Tensor(bool), Tensor(cf32));
	Tensor(cf64) _Tensor_masked_scatter_cf64 (Tensor(bool), Tensor(cf64));
	Tensor(cf80) _Tensor_masked_scatter_cf80 (Tensor(bool), Tensor(cf80));
	Tensor(cf128) _Tensor_masked_scatter_cf128 (Tensor(bool), Tensor(cf128));

	void _Tensor_masked_scatter_bool_ (Tensor(bool), Tensor(bool));

	void _Tensor_masked_scatter_i8_ (Tensor(bool), Tensor(i8));
	void _Tensor_masked_scatter_i16_ (Tensor(bool), Tensor(i16));
	void _Tensor_masked_scatter_i32_ (Tensor(bool), Tensor(i32));
	void _Tensor_masked_scatter_i64_ (Tensor(bool), Tensor(i64));
	void _Tensor_masked_scatter_i128_ (Tensor(bool), Tensor(i128));

	void _Tensor_masked_scatter_u8_ (Tensor(bool), Tensor(u8));
	void _Tensor_masked_scatter_u16_ (Tensor(bool), Tensor(u16));
	void _Tensor_masked_scatter_u32_ (Tensor(bool), Tensor(u32));
	void _Tensor_masked_scatter_u64_ (Tensor(bool), Tensor(u64));
	void _Tensor_masked_scatter_u128_ (Tensor(bool), Tensor(u128));

	void _Tensor_masked_scatter_f16_ (Tensor(bool), Tensor(f16));
	void _Tensor_masked_scatter_f32_ (Tensor(bool), Tensor(f32));
	void _Tensor_masked_scatter_f64_ (Tensor(bool), Tensor(f64));
	void _Tensor_masked_scatter_f80_ (Tensor(bool), Tensor(f80));
	void _Tensor_masked_scatter_f128_ (Tensor(bool), Tensor(f128));

	void _Tensor_masked_scatter_cf16_ (Tensor(bool), Tensor(cf16));
	void _Tensor_masked_scatter_cf32_ (Tensor(bool), Tensor(cf32));
	void _Tensor_masked_scatter_cf64_ (Tensor(bool), Tensor(cf64));
	void _Tensor_masked_scatter_cf80_ (Tensor(bool), Tensor(cf80));
	void _Tensor_masked_scatter_cf128_ (Tensor(bool), Tensor(cf128));
#ifdef __cplusplus
}
#endif

#endif
