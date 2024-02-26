
#include "../../../include/tensor/utils/_utils.h"

#define ___Tensor_clone(Type) \
	Tensor(Type) _Tensor_clone(Type) (Tensor(Type) T){	\
		register Tensor(Type) ret = T;			\
		ret.shape = malloc(sizeof(*ret.shape)*ret.dim);	\
		ret.stride = malloc(sizeof(*ret.stride) *	\
			(ret.dim + 1));				\
		ret.data = malloc(sizeof(*ret.data) * 		\
			*( T.stride + ret.dim ));		\
		memcpy(ret.shape, T.shape, sizeof(*T.shape) *	\
			ret.dim );				\
		memcpy(ret.stride, T.stride, sizeof(*T.stride) *\
			( 1 + ret.dim ) );			\
		memcpy(ret.data, T.data, sizeof(*T.data) *	\
			*( T.stride + ret.dim ) );		\
		if ( ret.grad ){				\
			ret.grad = malloc(sizeof(*ret.data) * 	\
				*( T.stride + ret.dim ));	\
			memcpy(ret.grad, T.grad, sizeof(*T.grad)\
				* *(T.stride + ret.dim));	\
		}						\
		return ret;					\
	}

___Tensor_clone(bool)

___Tensor_clone(i8)
___Tensor_clone(i16)
___Tensor_clone(i32)
___Tensor_clone(i64)
___Tensor_clone(i128)

___Tensor_clone(u8)
___Tensor_clone(u16)
___Tensor_clone(u32)
___Tensor_clone(u64)
___Tensor_clone(u128)

___Tensor_clone(f16)
___Tensor_clone(f32)
___Tensor_clone(f64)
___Tensor_clone(f80)
___Tensor_clone(f128)

___Tensor_clone(cf16)
___Tensor_clone(cf32)
___Tensor_clone(cf64)
___Tensor_clone(cf80)
___Tensor_clone(cf128)

