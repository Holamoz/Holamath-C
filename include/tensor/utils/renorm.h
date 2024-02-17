
#ifndef __TENSOR_UTILS_FILE_H__
#define __TENSOR_UTILS_FILE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(i8) _Tensor_renorm_i8 (Tensor(i8), double, size_t, double);
	Tensor(i16) _Tensor_renorm_i16 (Tensor(i16), double, size_t, double);
	Tensor(i32) _Tensor_renorm_i32 (Tensor(i32), double, size_t, double);
	Tensor(i64) _Tensor_renorm_i64 (Tensor(i64), double, size_t, double);
	Tensor(i128) _Tensor_renorm_i128 (Tensor(i128), double, size_t, double);

	Tensor(u8) _Tensor_renorm_u8 (Tensor(u8), double, size_t, double);
	Tensor(u16) _Tensor_renorm_u16 (Tensor(u16), double, size_t, double);
	Tensor(u32) _Tensor_renorm_u32 (Tensor(u32), double, size_t, double);
	Tensor(u64) _Tensor_renorm_u64 (Tensor(u64), double, size_t, double);
	Tensor(u128) _Tensor_renorm_u128 (Tensor(u128), double, size_t, double);

	Tensor(f16) _Tensor_renorm_f16 (Tensor(f16), double, size_t, double);
	Tensor(f32) _Tensor_renorm_f32 (Tensor(f32), double, size_t, double);
	Tensor(f64) _Tensor_renorm_f64 (Tensor(f64), double, size_t, double);
	Tensor(f80) _Tensor_renorm_f80 (Tensor(f80), double, size_t, double);
	Tensor(f128) _Tensor_renorm_f128 (Tensor(f128), double, size_t, double);

	Tensor(cf16) _Tensor_renorm_cf16 (Tensor(cf16), double, size_t, double);
	Tensor(cf32) _Tensor_renorm_cf32 (Tensor(cf32), double, size_t, double);
	Tensor(cf64) _Tensor_renorm_cf64 (Tensor(cf64), double, size_t, double);
	Tensor(cf80) _Tensor_renorm_cf80 (Tensor(cf80), double, size_t, double);
	Tensor(cf128) _Tensor_renorm_cf128 (Tensor(cf128), double, size_t, double);

	void _Tensor_renorm_i8_ (Tensor(i8), double, size_t, double);
	void _Tensor_renorm_i16_ (Tensor(i16), double, size_t, double);
	void _Tensor_renorm_i32_ (Tensor(i32), double, size_t, double);
	void _Tensor_renorm_i64_ (Tensor(i64), double, size_t, double);
	void _Tensor_renorm_i128_ (Tensor(i128), double, size_t, double);

	void _Tensor_renorm_u8_ (Tensor(u8), double, size_t, double);
	void _Tensor_renorm_u16_ (Tensor(u16), double, size_t, double);
	void _Tensor_renorm_u32_ (Tensor(u32), double, size_t, double);
	void _Tensor_renorm_u64_ (Tensor(u64), double, size_t, double);
	void _Tensor_renorm_u128_ (Tensor(u128), double, size_t, double);

	void _Tensor_renorm_f16_ (Tensor(f16), double, size_t, double);
	void _Tensor_renorm_f32_ (Tensor(f32), double, size_t, double);
	void _Tensor_renorm_f64_ (Tensor(f64), double, size_t, double);
	void _Tensor_renorm_f80_ (Tensor(f80), double, size_t, double);
	void _Tensor_renorm_f128_ (Tensor(f128), double, size_t, double);

	void _Tensor_renorm_cf16_ (Tensor(cf16), double, size_t, double);
	void _Tensor_renorm_cf32_ (Tensor(cf32), double, size_t, double);
	void _Tensor_renorm_cf64_ (Tensor(cf64), double, size_t, double);
	void _Tensor_renorm_cf80_ (Tensor(cf80), double, size_t, double);
	void _Tensor_renorm_cf128_ (Tensor(cf128), double, size_t, double);

#ifdef __cplusplus
}
#endif

#endif
