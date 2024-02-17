
#ifndef __TENSOR_UTILS_IS_CONTIGUOUS_H__
#define __TENSOR_UTILS_IS_CONTIGUOUS_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

bool _Tensor_is_sparse_i8 (Tensor(i8));
bool _Tensor_is_sparse_i16 (Tensor(i16));
bool _Tensor_is_sparse_i32 (Tensor(i32));
bool _Tensor_is_sparse_i64 (Tensor(i64));
bool _Tensor_is_sparse_i128 (Tensor(i128));

bool _Tensor_is_sparse_u8 (Tensor(u8));
bool _Tensor_is_sparse_u16 (Tensor(u16));
bool _Tensor_is_sparse_u32 (Tensor(u32));
bool _Tensor_is_sparse_u64 (Tensor(u64));
bool _Tensor_is_sparse_u128 (Tensor(u128));

bool _Tensor_is_sparse_f16 (Tensor(f16));
bool _Tensor_is_sparse_f32 (Tensor(f32));
bool _Tensor_is_sparse_f64 (Tensor(f64));
bool _Tensor_is_sparse_f80 (Tensor(f80));
bool _Tensor_is_sparse_f128 (Tensor(f128));

bool _Tensor_is_sparse_cf16 (Tensor(cf16));
bool _Tensor_is_sparse_cf32 (Tensor(cf32));
bool _Tensor_is_sparse_cf64 (Tensor(cf64));
bool _Tensor_is_sparse_cf80 (Tensor(cf80));
bool _Tensor_is_sparse_cf128 (Tensor(cf128));

#ifdef __cplusplus
}
#endif

#endif
