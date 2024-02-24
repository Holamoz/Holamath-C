
#include "../../../include/tensor/utils/free.h"

void _Tensor_free_bool (Tensor(bool) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}

void _Tensor_free_i8 (Tensor(i8) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}
void _Tensor_free_i16 (Tensor(i16) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}
void _Tensor_free_i32 (Tensor(i32) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}
void _Tensor_free_i64 (Tensor(i64) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}
void _Tensor_free_i128 (Tensor(i128) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}

void _Tensor_free_u8 (Tensor(u8) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}
void _Tensor_free_u16 (Tensor(u16) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}
void _Tensor_free_u32 (Tensor(u32) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}
void _Tensor_free_u64 (Tensor(u64) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}
void _Tensor_free_u128 (Tensor(u128) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}

void _Tensor_free_f16 (Tensor(f16) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}
void _Tensor_free_f32 (Tensor(f32) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}
void _Tensor_free_f64 (Tensor(f64) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}
void _Tensor_free_f80 (Tensor(f80) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}
void _Tensor_free_f128 (Tensor(f128) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}

void _Tensor_free_cf16 (Tensor(cf16) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}
void _Tensor_free_cf32 (Tensor(cf32) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}
void _Tensor_free_cf64 (Tensor(cf64) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}
void _Tensor_free_cf80 (Tensor(cf80) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}
void _Tensor_free_cf128 (Tensor(cf128) T) { free ( T.shape ); free ( T.stride ); free ( T.grad ); free ( T.data );}
