
#ifndef __TENSOR_UTILS_MATRIX_POWER_H__
#define __TENSOR_UTILS_MATRIX_POWER_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(f16) _Tensor_matrix_power_f16 (Tensor(f16), i64);
	Tensor(f32) _Tensor_matrix_power_f32 (Tensor(f32), i64);
	Tensor(f64) _Tensor_matrix_power_f64 (Tensor(f64), i64);
	Tensor(f80) _Tensor_matrix_power_f80 (Tensor(f80), i64);
	Tensor(f128) _Tensor_matrix_power_f128 (Tensor(f128), i64);

	Tensor(cf16) _Tensor_matrix_power_cf16 (Tensor(cf16), i64);
	Tensor(cf32) _Tensor_matrix_power_cf32 (Tensor(cf32), i64);
	Tensor(cf64) _Tensor_matrix_power_cf64 (Tensor(cf64), i64);
	Tensor(cf80) _Tensor_matrix_power_cf80 (Tensor(cf80), i64);
	Tensor(cf128) _Tensor_matrix_power_cf128 (Tensor(cf128), i64);

#ifdef __cplusplus
}
#endif

#endif
