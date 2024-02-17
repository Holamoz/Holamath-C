
#ifndef __TENSOR_UTILS_MATRIX_NORM_H__
#define __TENSOR_UTILS_MATRIX_NORM_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	enum TENSOR_MATRIX_NORM_ORD {
		TENSOR_MATRIX_NORM_ORD_FRO,
		TENSOR_MATRIX_NORM_ORD_NUC,
		TENSOR_MATRIX_NORM_ORD_NEGINF,
		TENSOR_MATRIX_NORM_ORD_INF,
		TENSOR_MATRIX_NORM_ORD_1 = 1,
		TENSOR_MATRIX_NORM_ORD_NEG1 = -1,
		TENSOR_MATRIX_NORM_ORD_2 = 2,
		TENSOR_MATRIX_NORM_ORD_NEG2 = -2,
	};

	Tensor(f16) _Tensor_matrix_norm_f16 (Tensor(f16), enum TENSOR_MATRIX_NORM_ORD, size_t *);
	Tensor(f32) _Tensor_matrix_norm_f32 (Tensor(f32), enum TENSOR_MATRIX_NORM_ORD, size_t *);
	Tensor(f64) _Tensor_matrix_norm_f64 (Tensor(f64), enum TENSOR_MATRIX_NORM_ORD, size_t *);
	Tensor(f80) _Tensor_matrix_norm_f80 (Tensor(f80), enum TENSOR_MATRIX_NORM_ORD, size_t *);
	Tensor(f128) _Tensor_matrix_norm_f128 (Tensor(f128), enum TENSOR_MATRIX_NORM_ORD, size_t *);

	Tensor(cf16) _Tensor_matrix_norm_cf16 (Tensor(cf16), enum TENSOR_MATRIX_NORM_ORD, size_t *);
	Tensor(cf32) _Tensor_matrix_norm_cf32 (Tensor(cf32), enum TENSOR_MATRIX_NORM_ORD, size_t *);
	Tensor(cf64) _Tensor_matrix_norm_cf64 (Tensor(cf64), enum TENSOR_MATRIX_NORM_ORD, size_t *);
	Tensor(cf80) _Tensor_matrix_norm_cf80 (Tensor(cf80), enum TENSOR_MATRIX_NORM_ORD, size_t *);
	Tensor(cf128) _Tensor_matrix_norm_cf128 (Tensor(cf128), enum TENSOR_MATRIX_NORM_ORD, size_t *);

#ifdef __cplusplus
}
#endif

#endif
