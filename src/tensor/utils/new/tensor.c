
#include "../../../../include/tensor/utils/new/tensor.h"
#include "../../../../include/minmax.h"

Tensor(bool) _Tensor_new_tensor_bool (Tensor(bool) T, size_t len, bool *data){
	register Tensor(bool) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

Tensor(i8) _Tensor_new_tensor_i8 (Tensor(i8) T, size_t len, i8 *data){
	register Tensor(i8) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

Tensor(i16) _Tensor_new_tensor_i16 (Tensor(i16) T, size_t len, i16 *data){
	register Tensor(i16) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

Tensor(i32) _Tensor_new_tensor_i32 (Tensor(i32) T, size_t len, i32 *data){
	register Tensor(i32) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

Tensor(i64) _Tensor_new_tensor_i64 (Tensor(i64) T, size_t len, i64 *data){
	register Tensor(i64) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

Tensor(i128) _Tensor_new_tensor_i128 (Tensor(i128) T, size_t len, i128 *data){
	register Tensor(i128) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

Tensor(u8) _Tensor_new_tensor_u8 (Tensor(u8) T, size_t len, u8 *data){
	register Tensor(u8) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

Tensor(u16) _Tensor_new_tensor_u16 (Tensor(u16) T, size_t len, u16 *data){
	register Tensor(u16) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

Tensor(u32) _Tensor_new_tensor_u32 (Tensor(u32) T, size_t len, u32 *data){
	register Tensor(u32) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

Tensor(u64) _Tensor_new_tensor_u64 (Tensor(u64) T, size_t len, u64 *data){
	register Tensor(u64) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

Tensor(u128) _Tensor_new_tensor_u128 (Tensor(u128) T, size_t len, u128 *data){
	register Tensor(u128) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

Tensor(f16) _Tensor_new_tensor_f16 (Tensor(f16) T, size_t len, f16 *data){
	register Tensor(f16) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

Tensor(f32) _Tensor_new_tensor_f32 (Tensor(f32) T, size_t len, f32 *data){
	register Tensor(f32) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

Tensor(f64) _Tensor_new_tensor_f64 (Tensor(f64) T, size_t len, f64 *data){
	register Tensor(f64) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

Tensor(f80) _Tensor_new_tensor_f80 (Tensor(f80) T, size_t len, f80 *data){
	register Tensor(f80) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

Tensor(f128) _Tensor_new_tensor_f128 (Tensor(f128) T, size_t len, f128 *data){
	register Tensor(f128) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

#if __ENABLE_COMPLEX__

Tensor(cf16) _Tensor_new_tensor_cf16 (Tensor(cf16) T, size_t len, cf16 *data){
	register Tensor(cf16) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

Tensor(cf32) _Tensor_new_tensor_cf32 (Tensor(cf32) T, size_t len, cf32 *data){
	register Tensor(cf32) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

Tensor(cf64) _Tensor_new_tensor_cf64 (Tensor(cf64) T, size_t len, cf64 *data){
	register Tensor(cf64) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

Tensor(cf80) _Tensor_new_tensor_cf80 (Tensor(cf80) T, size_t len, cf80 *data){
	register Tensor(cf80) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

Tensor(cf128) _Tensor_new_tensor_cf128 (Tensor(cf128) T, size_t len, cf128 *data){
	register Tensor(cf128) ret = {
		.dim = T.dim,
		.shape = NULL,
		.stride = NULL,
		.grad = NULL,
		.require_grad = T.require_grad,
		data = NULL
	};

	ret.shape = malloc( sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	ret.stride = malloc( sizeof( *ret.stride ) * ( ret.dim + 1 ) );
	ret.data = malloc( sizeof( *ret.data ) * *( T.stride + ret.dim ) );
	memcpy( ret.shape, T.shape, sizeof( *ret.shape ) * max( ret.dim, 1 ) );
	memcpy( ret.stride, T.stride, sizeof( *ret.stride )* ( ret.dim + 1 ) );
	memcpy( ret.data, T.data, *( ret.stride + ret.dim ) );
	memcpy( ret.data, data, min( len, *( ret.stride + ret.dim ) ) );

	return ret;
}

#endif
