
#ifndef __TENSOR_UTILS_ISINF_H__
#define __TENSOR_UTILS_ISINF_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(bool) _Tensor_isinf_f16 (Tensor(f16));
	Tensor(bool) _Tensor_isinf_f32 (Tensor(f32));
	Tensor(bool) _Tensor_isinf_f64 (Tensor(f64));
	Tensor(bool) _Tensor_isinf_f80 (Tensor(f80));
	Tensor(bool) _Tensor_isinf_f128 (Tensor(f128));

	Tensor(bool) _Tensor_isinf_cf16 (Tensor(cf16));
	Tensor(bool) _Tensor_isinf_cf32 (Tensor(cf32));
	Tensor(bool) _Tensor_isinf_cf64 (Tensor(cf64));
	Tensor(bool) _Tensor_isinf_cf80 (Tensor(cf80));
	Tensor(bool) _Tensor_isinf_cf128 (Tensor(cf128));

#ifdef __cplusplus
}
#endif

#endif
