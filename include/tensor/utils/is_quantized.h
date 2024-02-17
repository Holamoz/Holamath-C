
#ifndef __TENSOR_UTILS_IS_QUANTIZED_H__
#define __TENSOR_UTILS_IS_QUANTIZED_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	bool _Tensor_is_quantized_i8 (Tensor(i8));
	bool _Tensor_is_quantized_i16 (Tensor(i16));
	bool _Tensor_is_quantized_i32 (Tensor(i32));
	bool _Tensor_is_quantized_i64 (Tensor(i64));
	bool _Tensor_is_quantized_i128 (Tensor(i128));

	bool _Tensor_is_quantized_u8 (Tensor(u8));
	bool _Tensor_is_quantized_i16 (Tensor(i16));
	bool _Tensor_is_quantized_i32 (Tensor(i32));
	bool _Tensor_is_quantized_i64 (Tensor(i64));
	bool _Tensor_is_quantized_i128 (Tensor(i128));

	bool _Tensor_is_quantized_f16 (Tensor(f16));
	bool _Tensor_is_quantized_f32 (Tensor(f32));
	bool _Tensor_is_quantized_f64 (Tensor(f64));
	bool _Tensor_is_quantized_f80 (Tensor(f80));
	bool _Tensor_is_quantized_f128 (Tensor(f128));

#if __ENABLE_COMPLEX__

	bool _Tensor_is_quantized_cf16 (Tensor(cf16));
	bool _Tensor_is_quantized_cf32 (Tensor(cf32));
	bool _Tensor_is_quantized_cf64 (Tensor(cf64));
	bool _Tensor_is_quantized_cf80 (Tensor(cf80));
	bool _Tensor_is_quantized_cf128 (Tensor(cf128));

#endif

#ifdef __cplusplus
}
#endif

#endif
