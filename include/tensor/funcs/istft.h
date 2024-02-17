
#ifndef __TENSOR_UTILS_ISTFT_H__
#define __TENSOR_UTILS_ISTFT_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_funcs.h"
#include "../type.h"

	Tensor(i8) _Tensor_istft_i8 (Tensor(i8), size_t, size_t, size_t, Tensor(i8), bool, bool, bool,size_t);
	Tensor(i16) _Tensor_istft_i16 (Tensor(i16), size_t, size_t, size_t, Tensor(i16), bool, bool, bool,size_t);
	Tensor(i32) _Tensor_istft_i32 (Tensor(i32), size_t, size_t, size_t, Tensor(i32), bool, bool, bool,size_t);
	Tensor(i64) _Tensor_istft_i64 (Tensor(i64), size_t, size_t, size_t, Tensor(i64), bool, bool, bool,size_t);
	Tensor(i128) _Tensor_istft_i128 (Tensor(i128), size_t, size_t, size_t, Tensor(i128), bool, bool, bool,size_t);

	Tensor(u8) _Tensor_istft_u8 (Tensor(u8), size_t, size_t, size_t, Tensor(u8), bool, bool, bool,size_t);
	Tensor(u16) _Tensor_istft_u16 (Tensor(u16), size_t, size_t, size_t, Tensor(u16), bool, bool, bool,size_t);
	Tensor(u32) _Tensor_istft_u32 (Tensor(u32), size_t, size_t, size_t, Tensor(u32), bool, bool, bool,size_t);
	Tensor(u64) _Tensor_istft_u64 (Tensor(u64), size_t, size_t, size_t, Tensor(u64), bool, bool, bool,size_t);
	Tensor(u128) _Tensor_istft_u128 (Tensor(u128), size_t, size_t, size_t, Tensor(u128), bool, bool, bool,size_t);

	Tensor(f16) _Tensor_istft_f16 (Tensor(f16), size_t, size_t, size_t, Tensor(f16), bool, bool, bool,size_t);
	Tensor(f32) _Tensor_istft_f32 (Tensor(f32), size_t, size_t, size_t, Tensor(f32), bool, bool, bool,size_t);
	Tensor(f64) _Tensor_istft_f64 (Tensor(f64), size_t, size_t, size_t, Tensor(f64), bool, bool, bool,size_t);
	Tensor(f80) _Tensor_istft_f80 (Tensor(f80), size_t, size_t, size_t, Tensor(f80), bool, bool, bool,size_t);
	Tensor(f128) _Tensor_istft_f128 (Tensor(f128), size_t, size_t, size_t, Tensor(f128), bool, bool, bool,size_t);

	Tensor(cf16) _Tensor_istft_cf16 (Tensor(cf16), size_t, size_t, size_t, Tensor(cf16), bool, bool, bool,size_t);
	Tensor(cf32) _Tensor_istft_cf32 (Tensor(cf32), size_t, size_t, size_t, Tensor(cf32), bool, bool, bool,size_t);
	Tensor(cf64) _Tensor_istft_cf64 (Tensor(cf64), size_t, size_t, size_t, Tensor(cf64), bool, bool, bool,size_t);
	Tensor(cf80) _Tensor_istft_cf80 (Tensor(cf80), size_t, size_t, size_t, Tensor(cf80), bool, bool, bool,size_t);
	Tensor(cf128) _Tensor_istft_cf128 (Tensor(cf128), size_t, size_t, size_t, Tensor(cf128), bool, bool, bool,size_t);

#ifdef __cplusplus
}
#endif

#endif
