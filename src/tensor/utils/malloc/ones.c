
#include "../../../../include/tensor/utils/malloc/ones.h"
#include "../../../../include/minmax.h"

#define ___TENSOR_ONES(Type) \
Tensor(Type) _Tensor_ones_##Type (size_t dim, size_t *shape, bool require_grad){\
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
	for ( i = *( ret.stride + ret.dim ); --i; ){\
		*( ret.data + i ) = 1;\
	}\
\
	return ret;\
}

Tensor(bool) _Tensor_ones_bool (size_t dim, size_t *shape, bool require_grad){
	register Tensor(bool) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = NULL,
		.data = NULL
	};

	register size_t len;
	register size_t ndim = max(dim, 1);

	register size_t i;

	ret.dim = dim;
	ret.require_grad = require_grad;

	len = 1;

	for( i = 0; i < ret.dim; i++ ){
		len *= *( shape + i );
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	if( len ){
		for( i = 0; i < ret.dim; i++ ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	memset( ret.data, 1, sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(i8) _Tensor_ones_i8 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(i8) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = NULL,
		.data = NULL
	};

	register size_t len;
	register size_t ndim = max(dim, 1);

	register size_t i;

	ret.dim = dim;
	ret.require_grad = require_grad;

	len = 1;

	for( i = 0; i < ret.dim; i++ ){
		len *= *( shape + i );
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	if( len ){
		for( i = 0; i < ret.dim; i++ ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	memset( ret.data, 1, sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(u8) _Tensor_ones_u8 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(u8) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = NULL,
		.data = NULL
	};

	register size_t len;
	register size_t ndim = max(dim, 1);

	register size_t i;

	ret.dim = dim;
	ret.require_grad = require_grad;

	len = 1;

	for( i = 0; i < ret.dim; i++ ){
		len *= *( shape + i );
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	if( len ){
		for( i = 0; i < ret.dim; i++ ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	memset( ret.data, 1, sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

___TENSOR_ONES(i16);
___TENSOR_ONES(i32);
___TENSOR_ONES(i64);
___TENSOR_ONES(i128);

___TENSOR_ONES(u16);
___TENSOR_ONES(u32);
___TENSOR_ONES(u64);
___TENSOR_ONES(u128);

___TENSOR_ONES(f16);
___TENSOR_ONES(f32);
___TENSOR_ONES(f64);
___TENSOR_ONES(f80);
___TENSOR_ONES(f128);

___TENSOR_ONES(cf16);
___TENSOR_ONES(cf32);
___TENSOR_ONES(cf64);
___TENSOR_ONES(cf80);
___TENSOR_ONES(cf128);
