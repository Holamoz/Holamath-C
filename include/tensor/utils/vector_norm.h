
#ifndef __TENSOR_UTILS_VECTOR_NORM_H__
#define __TENSOR_UTILS_VECTOR_NORM_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(f16) _Tensor_vector_norm_f16 (Tensor(f16), double, size_t);
	Tensor(f32) _Tensor_vector_norm_f32 (Tensor(f32), double, size_t);
	Tensor(f64) _Tensor_vector_norm_f64 (Tensor(f64), double, size_t);
	Tensor(f80) _Tensor_vector_norm_f80 (Tensor(f80), double, size_t);
	Tensor(f128) _Tensor_vector_norm_f128 (Tensor(f128), double, size_t);

	Tensor(cf16) _Tensor_vector_norm_cf16 (Tensor(cf16), double, size_t);
	Tensor(cf32) _Tensor_vector_norm_cf32 (Tensor(cf32), double, size_t);
	Tensor(cf64) _Tensor_vector_norm_cf64 (Tensor(cf64), double, size_t);
	Tensor(cf80) _Tensor_vector_norm_cf80 (Tensor(cf80), double, size_t);
	Tensor(cf128) _Tensor_vector_norm_cf128 (Tensor(cf128), double, size_t);

#ifdef __cplusplus
}
#endif

#endif
