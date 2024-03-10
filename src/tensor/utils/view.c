
#include "../../../include/tensor/utils/view.h"

#define ___Tensor_view(Type) \
Tensor(Type) _Tensor_view_##Type (Tensor(Type) T, size_t dim, size_t *shape){\
	register Tensor(Type) ret = {\
		.dim = 0,\
		.shape = NULL,\
		.stride = NULL,\
		.grad = NULL,\
		.require_grad = false,\
		.data = NULL\
	};\
	register size_t len = 1;\
	register size_t i;\
	if ( !dim && !shape ){ return ret; }\
	for ( i = 0; i < dim; i++ ){\
		len *= *( shape + i );\
	}\
	if ( len != *( T.stride + T.dim ) ){ return ret; }\
	ret.dim = dim;\
	ret.shape = malloc( sizeof( *ret.shape ) * ret.dim );\
	memcpy ( ret.shape, shape, dim );\
	ret.stride = malloc( sizeof( *ret.stride ) * (dim+1) );\
	ret.data = T.data;\
	memset( ret.stride, 0, sizeof( *ret.stride ) * ( 1 + ret.dim ) );\
	*( ret.stride + dim ) = len;\
	if( len ){\
		for ( i = 0; i < dim; i++ ){\
			len /= *( ret.shape + i );\
			*( ret.stride + i ) = len;\
		}\
	}\
	return ret;\
}

___Tensor_view(bool)

___Tensor_view(i8)
___Tensor_view(i16)
___Tensor_view(i32)
___Tensor_view(i64)
___Tensor_view(i128)

___Tensor_view(u8)
___Tensor_view(u16)
___Tensor_view(u32)
___Tensor_view(u64)
___Tensor_view(u128)

___Tensor_view(f16)
___Tensor_view(f32)
___Tensor_view(f64)
___Tensor_view(f80)
___Tensor_view(f128)

___Tensor_view(cf16)
___Tensor_view(cf32)
___Tensor_view(cf64)
___Tensor_view(cf80)
___Tensor_view(cf128)

