
#include "../../../../include/tensor/utils/malloc/full.h"
#include "../../../../include/minmax.h"

#define ___Tensor_full(Type) \
Tensor(Type) _Tensor_full_##Type (size_t dim, size_t *shape, Type value, bool require_grad){	\
	register Tensor(Type) ret = {								\
		.dim = 0,									\
		.shape = NULL,									\
		.stride = NULL,									\
		.grad = NULL,									\
		.require_grad = false,								\
		.data = NULL									\
	};											\
	register size_t len;									\
	register size_t ndim = max(dim, 1);							\
	register size_t i;									\
	ret.dim = dim;										\
	ret.require_grad = require_grad;							\
	len = 1;										\
	for( i = 0; i < ret.dim; i++ ){								\
		len *= *( shape + i );								\
	}											\
	ret.shape = malloc( sizeof( *ret.shape ) * ndim );					\
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );				\
	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );					\
	*ret.shape = 1;										\
	*( ret.stride + ndim ) = len;								\
	if( shape ){										\
		memcpy( ret.shape, shape, dim );						\
	}											\
	if( len ){										\
		for( i = 0; i < ret.dim; i++ ){							\
			len /= *( ret.shape + i );						\
			*( ret.stride + i ) = len;						\
		}										\
	}											\
	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );			\
	for( i = *( ret.stride + ret.dim ); --i; ){						\
		*( ret.data + i ) = value;							\
	}											\
	return ret;										\
}

Tensor(bool) _Tensor_full_bool (size_t dim, size_t *shape, bool value, bool require_grad){
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
	
	memset( ret.data, value, sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(i8) _Tensor_full_i8 (size_t dim, size_t *shape, i8 value, bool require_grad){
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

	if ( len ){
		for( i = 0; i < ret.dim; i++ ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	memset( ret.data, value, sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(u8) _Tensor_full_u8 (size_t dim, size_t *shape, u8 value, bool require_grad){
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

	memset( ret.data, value, sizeof( *( ret.stride + ret.dim ) ) );

	return ret;
}

___Tensor_full(i16)
___Tensor_full(i32)
___Tensor_full(i64)
___Tensor_full(i128)

___Tensor_full(u16)
___Tensor_full(u32)
___Tensor_full(u64)
___Tensor_full(u128)

___Tensor_full(f16)
___Tensor_full(f32)
___Tensor_full(f64)
___Tensor_full(f80)
___Tensor_full(f128)

___Tensor_full(cf16)
___Tensor_full(cf32)
___Tensor_full(cf64)
___Tensor_full(cf80)
___Tensor_full(cf128)
