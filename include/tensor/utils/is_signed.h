
#ifndef __TENSOR_UTILS_IS_SIGNED_H__
#define __TENSOR_UTILS_IS_SIGNED_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

#define Tensor_is_signed(T) __choose_builtin_expr(\
		__builtin_types_compatible_p(__typeof__(T),Tensor(bool))||\
		__builtin_types_compatible_p(__typeof__(T),Tensor(u8)) 	||\
		__builtin_types_compatible_p(__typeof__(T),Tensor(u16)) ||\
		__builtin_types_compatible_p(__typeof__(T),Tensor(u32)) ||\
		__builtin_types_compatible_p(__typeof__(T),Tensor(u64)) ||\
		__builtin_types_compatible_p(__typeof__(T),Tensor(u128))\
		, (0), (1) )

#ifdef __cplusplus
}
#endif

#endif
