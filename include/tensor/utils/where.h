
#ifndef __TENSOR_UTILS_WHERE_H__
#define __TENSOR_UTILS_WHERE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(Type) _Tensor_where_Type (Tensor(bool), Tensor(Type), Tensor(Type));

	Tensor(i8) _Tensor_where_i8 (Tensor(bool), Tensor(i8), Tensor(i8));
	Tensor(i16) _Tensor_where_i16 (Tensor(bool), Tensor(i16), Tensor(i16));
	Tensor(i32) _Tensor_where_i32 (Tensor(bool), Tensor(i32), Tensor(i32));
	Tensor(i64) _Tensor_where_i64 (Tensor(bool), Tensor(i64), Tensor(i64));
	Tensor(i128) _Tensor_where_i128 (Tensor(bool), Tensor(i128), Tensor(i128));

	Tensor(u8) _Tensor_where_u8 (Tensor(bool), Tensor(u8), Tensor(u8));
	Tensor(u16) _Tensor_where_u16 (Tensor(bool), Tensor(u16), Tensor(u16));
	Tensor(u32) _Tensor_where_u32 (Tensor(bool), Tensor(u32), Tensor(u32));
	Tensor(u64) _Tensor_where_u64 (Tensor(bool), Tensor(u64), Tensor(u64));
	Tensor(u128) _Tensor_where_u128 (Tensor(bool), Tensor(u128), Tensor(u128));

	Tensor(f16) _Tensor_where_f16 (Tensor(bool), Tensor(f16), Tensor(f16));
	Tensor(f32) _Tensor_where_f32 (Tensor(bool), Tensor(f32), Tensor(f32));
	Tensor(f64) _Tensor_where_f64 (Tensor(bool), Tensor(f64), Tensor(f64));
	Tensor(f80) _Tensor_where_f80 (Tensor(bool), Tensor(f80), Tensor(f80));
	Tensor(f128) _Tensor_where_f128 (Tensor(bool), Tensor(f128), Tensor(f128));

#if __ENABLE_COMPLEX__

	Tensor(cf16) _Tensor_where_cf16 (Tensor(bool), Tensor(cf16), Tensor(cf16));
	Tensor(cf32) _Tensor_where_cf32 (Tensor(bool), Tensor(cf32), Tensor(cf32));
	Tensor(cf64) _Tensor_where_cf64 (Tensor(bool), Tensor(cf64), Tensor(cf64));
	Tensor(cf80) _Tensor_where_cf80 (Tensor(bool), Tensor(cf80), Tensor(cf80));
	Tensor(cf128) _Tensor_where_cf128 (Tensor(bool), Tensor(cf128), Tensor(cf128));

#endif

#ifdef __cplusplus
}
#endif

#endif
