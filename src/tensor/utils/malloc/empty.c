
#include "../../../../include/tensor/utils/malloc/empty.h"

#include "../../../../include/minmax.h"

Tensor(bool) _Tensor_empty_bool (size_t dim, size_t *shape, bool require_grad){
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(i8) _Tensor_empty_i8 (size_t dim, size_t *shape, bool require_grad){
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(i16) _Tensor_empty_i16 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(i16) ret = {
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(i32) _Tensor_empty_i32 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(i32) ret = {
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(i64) _Tensor_empty_i64 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(i64) ret = {
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(i128) _Tensor_empty_i128 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(i128) ret = {
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(u8) _Tensor_empty_u8 (size_t dim, size_t *shape, bool require_grad){
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(u16) _Tensor_empty_u16 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(u16) ret = {
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(u32) _Tensor_empty_u32 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(u32) ret = {
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(u64) _Tensor_empty_u64 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(u64) ret = {
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(u128) _Tensor_empty_u128 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(u128) ret = {
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(f16) _Tensor_empty_f16 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(f16) ret = {
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(f32) _Tensor_empty_f32 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(f32) ret = {
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(f64) _Tensor_empty_f64 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(f64) ret = {
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(f80) _Tensor_empty_f80 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(f80) ret = {
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(f128) _Tensor_empty_f128 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(f128) ret = {
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

#if __ENABLE_COMPLEX__

Tensor(cf16) _Tensor_empty_cf16 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(cf16) ret = {
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(cf32) _Tensor_empty_cf32 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(cf32) ret = {
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(cf64) _Tensor_empty_cf64 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(cf64) ret = {
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(cf80) _Tensor_empty_cf80 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(cf80) ret = {
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

Tensor(cf128) _Tensor_empty_cf128 (size_t dim, size_t *shape, bool require_grad){
	register Tensor(cf128) ret = {
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
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*ret.shape = 1;
	*( ret.stride + ndim ) = len;

	if( shape ){
		memcpy( ret.shape, shape, dim );
	}

	for( i = 0; i < ret.dim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.stride + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * *( ret.stride + ret.dim ) );

	return ret;
}

#endif
