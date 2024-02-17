
#ifndef __TENSOR_UTILS_IS_FLOAT_POINT_H__
#define __TENSOR_UTILS_IS_FLOAT_POINT_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

#define Tensor_is_floating_point(T) __choose_builtin_expr(\
		__builtin_types_compatible_p(__typeof__(T),Tensor(f16)) ||\
		__builtin_types_compatible_p(__typeof__(T),Tensor(f32)) ||\
		__builtin_types_compatible_p(__typeof__(T),Tensor(f64)) ||\
		__builtin_types_compatible_p(__typeof__(T),Tensor(f80)) ||\
		__builtin_types_compatible_p(__typeof__(T),Tensor(f128))||\
		__builtin_types_compatible_p(__typeof__(T),Tensor(cf16)) ||\
		__builtin_types_compatible_p(__typeof__(T),Tensor(cf32)) ||\
		__builtin_types_compatible_p(__typeof__(T),Tensor(cf64)) ||\
		__builtin_types_compatible_p(__typeof__(T),Tensor(cf80)) ||\
		__builtin_types_compatible_p(__typeof__(T),Tensor(cf128))\
		, (1), (0) )

#ifdef __cplusplus
}
#endif

#endif
