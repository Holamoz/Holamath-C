
#ifndef __TENSOR_UTILS_NAN_TO_NUM_H__
#define __TENSOR_UTILS_NAN_TO_NUM_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(f16) _Tensor_nan_to_num_f16 (Tensor(f16));
	Tensor(f32) _Tensor_nan_to_num_f32 (Tensor(f32));
	Tensor(f64) _Tensor_nan_to_num_f64 (Tensor(f64));
	Tensor(f80) _Tensor_nan_to_num_f80 (Tensor(f80));
	Tensor(f128) _Tensor_nan_to_num_f128 (Tensor(f128));

	Tensor(cf16) _Tensor_nan_to_num_cf16 (Tensor(cf16));
	Tensor(cf32) _Tensor_nan_to_num_cf32 (Tensor(cf32));
	Tensor(cf64) _Tensor_nan_to_num_cf64 (Tensor(cf64));
	Tensor(cf80) _Tensor_nan_to_num_cf80 (Tensor(cf80));
	Tensor(cf128) _Tensor_nan_to_num_cf128 (Tensor(cf128));

#ifdef __cplusplus
}
#endif

#endif
