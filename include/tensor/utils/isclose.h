
#ifndef __TENSOR_UTILS_ISCLOSE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	Tensor(bool) _Tensor_isclose_f16 (Tensor(f16), Tensor(f16), f16, f16);
	Tensor(bool) _Tensor_isclose_f32 (Tensor(f32), Tensor(f32), f32, f32);
	Tensor(bool) _Tensor_isclose_f64 (Tensor(f64), Tensor(f64), f64, f64);
	Tensor(bool) _Tensor_isclose_f80 (Tensor(f80), Tensor(f80), f80, f80);
	Tensor(bool) _Tensor_isclose_f128 (Tensor(f128), Tensor(f128), f128, f128);

	Tensor(bool) _Tensor_isclose_cf16 (Tensor(cf16), Tensor(cf16), cf16, cf16);
	Tensor(bool) _Tensor_isclose_cf32 (Tensor(cf32), Tensor(cf32), cf32, cf32);
	Tensor(bool) _Tensor_isclose_cf64 (Tensor(cf64), Tensor(cf64), cf64, cf64);
	Tensor(bool) _Tensor_isclose_cf80 (Tensor(cf80), Tensor(cf80), cf80, cf80);
	Tensor(bool) _Tensor_isclose_cf128 (Tensor(cf128), Tensor(cf128), cf128, cf128);

#ifdef __cplusplus
}
#endif

#endif
