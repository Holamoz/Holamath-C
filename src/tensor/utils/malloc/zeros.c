
#include "../../../../include/tensor/utils/malloc/zeros.h"
#include "../../../../include/minmax.h"

#define ___Tensor_zeros(Type) \
Tensor(Type) _Tensor_zeros_##Type (size_t dim, size_t *shape, bool require_grad){\
	register Tensor(Type) ret = {\
		.dim = 0,\
		.shape = NULL,\
		.stride = NULL,\
		.grad = NULL,\
		.require_grad = NULL,\
		.data = NULL\
	};\
\
	register size_t len;\
	register size_t ndim = max(dim, 1);\
\
	register size_t i;\
\
	ret.dim = dim;\
	ret.require_grad = require_grad;\
\
	len = 1;\
\
	for( i = 0; i < ret.dim; i++ ){\
		len *= *( shape + i );\
	}\
\
	ret.shape = malloc( sizeof( *ret.shape ) * ndim );\
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );\
\
	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );\
\
	*ret.shape = 1;\
	*( ret.stride + ndim ) = len;\
\
	if( shape ){\
		memcpy( ret.shape, shape, dim );\
	}\
\
	if( len ){\
		for( i = 0; i < ret.dim; i++ ){\
			len /= *( ret.shape + i );\
			*( ret.stride + i ) = len;\
		}\
	}\
\
	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );\
\
	memset( ret.data, 0, sizeof( *ret.data ) * *( ret.stride + ret.dim ) );\
\
	return ret;\
}

___Tensor_zeros(bool)

___Tensor_zeros(i8)
___Tensor_zeros(i16)
___Tensor_zeros(i32)
___Tensor_zeros(i64)
___Tensor_zeros(i128)

___Tensor_zeros(u8)
___Tensor_zeros(u16)
___Tensor_zeros(u32)
___Tensor_zeros(u64)
___Tensor_zeros(u128)

___Tensor_zeros(f16)
___Tensor_zeros(f32)
___Tensor_zeros(f64)
___Tensor_zeros(f80)
___Tensor_zeros(f128)

___Tensor_zeros(cf16)
___Tensor_zeros(cf32)
___Tensor_zeros(cf64)
___Tensor_zeros(cf80)
___Tensor_zeros(cf128)

