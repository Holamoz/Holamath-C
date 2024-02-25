
#include "../../../../include/tensor/utils/malloc/empty.h"

#include "../../../../include/minmax.h"

#define ___Tensor_empty(Type) Tensor(Type)\
	_Tensor_empty(Type) (size_t dim, size_t *shape, bool require_grad){	\
	register Tensor(Type) ret = {						\
		.dim = 0,							\
		.shape = NULL,							\
		.stride = NULL,							\
		.grad = NULL,							\
		.require_grad = false,						\
		.data = NULL							\
	};									\
	register size_t len;							\
	register size_t ndim = max(dim, 1);					\
	register size_t i;							\
	ret.dim = dim;								\
	ret.require_grad = require_grad;					\
	len = 1;								\
	for( i = 0; i < ret.dim; i++ ){						\
		len *= *( shape + i );						\
	}									\
	ret.shape = malloc( sizeof( *ret.shape ) * ndim );			\
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );		\
	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );			\
	*ret.shape = 1;								\
	*( ret.stride + ndim ) = len;						\
	if( shape ){								\
		memcpy( ret.shape, shape, dim );				\
	}									\
	if( len ){								\
		for( i = 0; i < ret.dim; i++ ){					\
			len /= *( ret.shape + i );				\
			*( ret.stride + i ) = len;				\
		}								\
	}									\
	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );	\
	return ret;								\
}

___Tensor_empty(bool)

___Tensor_empty(i8)
___Tensor_empty(i16)
___Tensor_empty(i32)
___Tensor_empty(i64)
___Tensor_empty(i128)

___Tensor_empty(u8)
___Tensor_empty(u16)
___Tensor_empty(u32)
___Tensor_empty(u64)
___Tensor_empty(u128)

___Tensor_empty(f16)
___Tensor_empty(f32)
___Tensor_empty(f64)
___Tensor_empty(f80)
___Tensor_empty(f128)

___Tensor_empty(cf16)
___Tensor_empty(cf32)
___Tensor_empty(cf64)
___Tensor_empty(cf80)
___Tensor_empty(cf128)

