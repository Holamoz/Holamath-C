
#ifndef __TENSOR_UTILS_COPY__H__
#define __TENSOR_UTILS_COPY__H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(bool) _Tensor_copy_bool_ (Tensor(bool) *, Tensor(bool));

	Tensor(i8) _Tensor_copy_i8_ (Tensor(i8) *, Tensor(i8));
	Tensor(i16) _Tensor_copy_i16_ (Tensor(i16) *, Tensor(i16));
	Tensor(i32) _Tensor_copy_i32_ (Tensor(i32) *, Tensor(i32));
	Tensor(i64) _Tensor_copy_i64_ (Tensor(i64) *, Tensor(i64));
	Tensor(i128) _Tensor_copy_i128_ (Tensor(i128) *, Tensor(i128));

	Tensor(u8) _Tensor_copy_u8_ (Tensor(u8) *, Tensor(u8));
	Tensor(u16) _Tensor_copy_u16_ (Tensor(u16) *, Tensor(u16));
	Tensor(u32) _Tensor_copy_u32_ (Tensor(u32) *, Tensor(u32));
	Tensor(u64) _Tensor_copy_u64_ (Tensor(u64) *, Tensor(u64));
	Tensor(u128) _Tensor_copy_u128_ (Tensor(u128) *, Tensor(u128));

	Tensor(f16) _Tensor_copy_f16_ (Tensor(f16) *, Tensor(f16));
	Tensor(f32) _Tensor_copy_f32_ (Tensor(f32) *, Tensor(f32));
	Tensor(f64) _Tensor_copy_f64_ (Tensor(f64) *, Tensor(f64));
	Tensor(f80) _Tensor_copy_f80_ (Tensor(f80) *, Tensor(f80));
	Tensor(f128) _Tensor_copy_f128_ (Tensor(f128) *, Tensor(f128));

#if __ENABLE_COMPLEX__

	Tensor(cf16) _Tensor_copy_cf16_ (Tensor(cf16) *, Tensor(cf16));
	Tensor(cf32) _Tensor_copy_cf32_ (Tensor(cf32) *, Tensor(cf32));
	Tensor(cf64) _Tensor_copy_cf64_ (Tensor(cf64) *, Tensor(cf64));
	Tensor(cf80) _Tensor_copy_cf80_ (Tensor(cf80) *, Tensor(cf80));
	Tensor(cf128) _Tensor_copy_cf128_ (Tensor(cf128) *, Tensor(cf128));

#endif

#ifdef __cplusplus
}
#endif

#endif
