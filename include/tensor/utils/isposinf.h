
#ifndef __TENSOR_UTILS_ISPOSINF_H__
#define __TENSOR_UTILS_ISPOSINF_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(bool) _Tensor_isposinf_f16 (Tensor(f16));
	Tensor(bool) _Tensor_isposinf_f32 (Tensor(f32));
	Tensor(bool) _Tensor_isposinf_f64 (Tensor(f64));
	Tensor(bool) _Tensor_isposinf_f80 (Tensor(f80));
	Tensor(bool) _Tensor_isposinf_f128 (Tensor(f128));

	Tensor(bool) _Tensor_isposinf_cf16 (Tensor(cf16));
	Tensor(bool) _Tensor_isposinf_cf32 (Tensor(cf32));
	Tensor(bool) _Tensor_isposinf_cf64 (Tensor(cf64));
	Tensor(bool) _Tensor_isposinf_cf80 (Tensor(cf80));
	Tensor(bool) _Tensor_isposinf_cf128 (Tensor(cf128));

#ifdef __cplusplus
}
#endif

#endif
