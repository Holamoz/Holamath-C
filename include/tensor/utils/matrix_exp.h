
#ifndef __TENSOR_UTILS_MATRIX_EXP_H__
#define __TENSOR_UTILS_MATRIX_EXP_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(f16) _Tensor_matrix_exp_f16 (Tensor(f16));
	Tensor(f32) _Tensor_matrix_exp_f32 (Tensor(f32));
	Tensor(f64) _Tensor_matrix_exp_f64 (Tensor(f64));
	Tensor(f80) _Tensor_matrix_exp_f80 (Tensor(f80));
	Tensor(f128) _Tensor_matrix_exp_f128 (Tensor(f128));

	Tensor(cf16) _Tensor_matrix_exp_cf16 (Tensor(cf16));
	Tensor(cf32) _Tensor_matrix_exp_cf32 (Tensor(cf32));
	Tensor(cf64) _Tensor_matrix_exp_cf64 (Tensor(cf64));
	Tensor(cf80) _Tensor_matrix_exp_cf80 (Tensor(cf80));
	Tensor(cf128) _Tensor_matrix_exp_cf128 (Tensor(cf128));

#ifdef __cplusplus
}
#endif

#endif
