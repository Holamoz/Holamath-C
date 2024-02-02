
#ifndef __TENSOR_UTILS_DIM_H__
#define __TENSOR_UTILS_DIM_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

#define __Tensor_dim(Type) size_t _Tensor_dim(Type)(Tensor(Type) T) { return T.dim; }
#define __Tensor_dense_dim(Type) size_t _Tensor_dense_dim(Type)(Tensor(Type) T) { return T.dim; }
#define __Tensor_sparse_dim(Type) size_t _Tensor_sparse_dim(Type)(Tensor(Type) T) { return T.dim; }

	__Tensor_dim(bool);
	__Tensor_dim(i8);
	__Tensor_dim(u8);
	__Tensor_dim(i16);
	__Tensor_dim(u16);
	__Tensor_dim(i32);
	__Tensor_dim(u32);
	__Tensor_dim(i64);
	__Tensor_dim(u64);
	__Tensor_dim(i128);
	__Tensor_dim(u128);

	__Tensor_dim(f16);
	__Tensor_dim(f32);
	__Tensor_dim(f64);
	__Tensor_dim(f80);
	__Tensor_dim(f128);

#if __ENABLE_COMPLEX__

	__Tensor_dim(cf16);
	__Tensor_dim(cf32);
	__Tensor_dim(cf64);
	__Tensor_dim(cf80);
	__Tensor_dim(cf128);

#endif

	__Tensor_dense_dim(bool);
	__Tensor_dense_dim(i8);
	__Tensor_dense_dim(u8);
	__Tensor_dense_dim(i16);
	__Tensor_dense_dim(u16);
	__Tensor_dense_dim(i32);
	__Tensor_dense_dim(u32);
	__Tensor_dense_dim(i64);
	__Tensor_dense_dim(u64);
	__Tensor_dense_dim(i128);
	__Tensor_dense_dim(u128);

	__Tensor_dense_dim(f16);
	__Tensor_dense_dim(f32);
	__Tensor_dense_dim(f64);
	__Tensor_dense_dim(f80);
	__Tensor_dense_dim(f128);

#if __ENABLE_COMPLEX__

	__Tensor_dense_dim(cf16);
	__Tensor_dense_dim(cf32);
	__Tensor_dense_dim(cf64);
	__Tensor_dense_dim(cf80);
	__Tensor_dense_dim(cf128);

#endif

	__Tensor_sparse_dim(bool);
	__Tensor_sparse_dim(i8);
	__Tensor_sparse_dim(u8);
	__Tensor_sparse_dim(i16);
	__Tensor_sparse_dim(u16);
	__Tensor_sparse_dim(i32);
	__Tensor_sparse_dim(u32);
	__Tensor_sparse_dim(i64);
	__Tensor_sparse_dim(u64);
	__Tensor_sparse_dim(i128);
	__Tensor_sparse_dim(u128);

	__Tensor_sparse_dim(f16);
	__Tensor_sparse_dim(f32);
	__Tensor_sparse_dim(f64);
	__Tensor_sparse_dim(f80);
	__Tensor_sparse_dim(f128);

#if __ENABLE_COMPLEX__

	__Tensor_sparse_dim(cf16);
	__Tensor_sparse_dim(cf32);
	__Tensor_sparse_dim(cf64);
	__Tensor_sparse_dim(cf80);
	__Tensor_sparse_dim(cf128);

#endif

#ifdef __cplusplus
}
#endif

#endif
