
#include "../../../../include/tensor/utils/malloc/tensor.h"
#include "../../../../include/minmax.h"

#include <stdlib.h>

Tensor(bool) _Tensor_tensor_bool( size_t dim, size_t *shape, bool *data, bool require_grad ){
	register Tensor(bool) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))1 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

Tensor(i8) _Tensor_tensor_i8( size_t dim, size_t *shape, i8 *data, bool require_grad ){
	register Tensor(i8) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

Tensor(i16) _Tensor_tensor_i16( size_t dim, size_t *shape, i16 *data, bool require_grad ){
	register Tensor(i16) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

Tensor(i32) _Tensor_tensor_i32( size_t dim, size_t *shape, i32 *data, bool require_grad ){
	register Tensor(i32) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

Tensor(i64) _Tensor_tensor_i64( size_t dim, size_t *shape, i64 *data, bool require_grad ){
	register Tensor(i64) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

Tensor(i128) _Tensor_tensor_i128( size_t dim, size_t *shape, i128 *data, bool require_grad ){
	register Tensor(i128) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

Tensor(u8) _Tensor_tensor_u8( size_t dim, size_t *shape, u8 *data, bool require_grad ){
	register Tensor(u8) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

Tensor(u16) _Tensor_tensor_u16( size_t dim, size_t *shape, u16 *data, bool require_grad ){
	register Tensor(u16) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

Tensor(u32) _Tensor_tensor_u32( size_t dim, size_t *shape, u32 *data, bool require_grad ){
	register Tensor(u32) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

Tensor(u64) _Tensor_tensor_u64( size_t dim, size_t *shape, u64 *data, bool require_grad ){
	register Tensor(u64) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

Tensor(u128) _Tensor_tensor_u128( size_t dim, size_t *shape, u128 *data, bool require_grad ){
	register Tensor(u128) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

Tensor(f16) _Tensor_tensor_f16( size_t dim, size_t *shape, f16 *data, bool require_grad ){
	register Tensor(f16) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

Tensor(f32) _Tensor_tensor_f32( size_t dim, size_t *shape, f32 *data, bool require_grad ){
	register Tensor(f32) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

Tensor(f64) _Tensor_tensor_f64( size_t dim, size_t *shape, f64 *data, bool require_grad ){
	register Tensor(f64) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

Tensor(f80) _Tensor_tensor_f80( size_t dim, size_t *shape, f80 *data, bool require_grad ){
	register Tensor(f80) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

Tensor(f128) _Tensor_tensor_f128( size_t dim, size_t *shape, f128 *data, bool require_grad ){
	register Tensor(f128) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

#if __ENABLE_COMPLEX__

Tensor(cf16) _Tensor_tensor_cf16( size_t dim, size_t *shape, cf16 *data, bool require_grad ){
	register Tensor(cf16) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

Tensor(cf32) _Tensor_tensor_cf32( size_t dim, size_t *shape, cf32 *data, bool require_grad ){
	register Tensor(cf32) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

Tensor(cf64) _Tensor_tensor_cf64( size_t dim, size_t *shape, cf64 *data, bool require_grad ){
	register Tensor(cf64) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

Tensor(cf80) _Tensor_tensor_cf80( size_t dim, size_t *shape, cf80 *data, bool require_grad ){
	register Tensor(cf80) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

Tensor(cf128) _Tensor_tensor_cf128( size_t dim, size_t *shape, cf128 *data, bool require_grad ){
	register Tensor(cf128) ret = {
		.dim = 0,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = 0,
		.data = NULL
	};

	register size_t len;

	register size_t ndim;

	register size_t i;

	len = 1;

	for( i = 0; i < dim; i++ ){
		if( *( shape + i ) ){
			len *= *( shape + i );
		}
	}

	ret.require_grad = require_grad;

	ret.dim = dim;
	ndim = max( ret.dim, (__typeof__(ret.dim))0 );

	ret.shape = malloc( sizeof( *ret.shape ) * ndim );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ndim + 1 ) );

	*ret.shape = 1;

	if( shape ){
		memcpy( ret.shape, shape, sizeof( *ret.shape ) * ndim );
	}

	memset( ret.stride, 0, sizeof( *ret.stride ) * ndim );

	*( ret.stride + ret.dim ) = len;

	for( i = 0; i < ndim; i++ ){
		if( *( ret.shape + i ) ){
			len /= *( ret.shape + i );
			*( ret.shape + i ) = len;
		}
	}

	ret.data = malloc( sizeof( *ret.data ) * len );

	memcpy( ret.data, data, sizeof( *ret.data ) * len );

	return ret;
}

#endif
