
#include "../../../../include/tensor/utils/malloc/tensor.h"
#include "../../../../include/minmax.h"

#include <stdlib.h>

#define ___Tensor_tensor(Type) \
Tensor(Type) _Tensor_tensor_##Type ( size_t dim, size_t *shape, Type *data, bool require_grad ){\
	register Tensor(Type) ret = {\
		.dim = 0,\
		.shape = NULL,\
		.stride = NULL,\
		.grad = NULL,\
		.require_grad = 0,\
		.data = NULL\
	};\
\
	register size_t len;\
\
	register size_t ndim;\
\
	register size_t i;\
\
	len = 1;\
\
	for( i = 0; i < dim; i++ ){\
		len *= *( shape + i );\
	}\
\
	ret.require_grad = require_grad;\
\
	ret.dim = dim;\
	ndim = max( ret.dim, (__typeof__(ret.dim))1 );\
\
	ret.shape = malloc( sizeof( *ret.shape ) * ndim );\
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );\
\
	*ret.shape = 1;\
\
	if( shape ){\
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );\
	}\
\
	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );\
\
	*( ret.stride + ret.dim ) = len;\
\
	if( len ){\
		for( i = 0; i < ndim; i++ ){\
			len /= *( ret.shape + i );\
			*( ret.shape + i ) = len;\
		}\
	}\
\
	ret.data = malloc( sizeof( *ret.data ) * len );\
\
	memcpy( ret.data, data, sizeof( *ret.data ) * len );\
\
	return ret;\
}

___Tensor_tensor(bool)

___Tensor_tensor(i8)
___Tensor_tensor(i16)
___Tensor_tensor(i32)
___Tensor_tensor(i64)
___Tensor_tensor(i128)

___Tensor_tensor(u8)
___Tensor_tensor(u16)
___Tensor_tensor(u32)
___Tensor_tensor(u64)
___Tensor_tensor(u128)

___Tensor_tensor(f16)
___Tensor_tensor(f32)
___Tensor_tensor(f64)
___Tensor_tensor(f80)
___Tensor_tensor(f128)

___Tensor_tensor(cf16)
___Tensor_tensor(cf32)
___Tensor_tensor(cf64)
___Tensor_tensor(cf80)
___Tensor_tensor(cf128)

