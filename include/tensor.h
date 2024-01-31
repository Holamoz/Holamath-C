#ifndef __TENSOR_H__
#define __TENSOR_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <stdint.h>

#define Tensor(Type) struct _Tensor_##Type

#define _Tensor( Type ) Tensor(Type){\
	size_t dim;\
	size_t *shape;\
	Type *T;\
	}

#define Tensor_i8 Tensor(i8)
#define Tensor_u8 Tensor(u8)
#define Tensor_i16 Tensor(i16)
#define Tensor_u16 Tensor(u16)
#define Tensor_i32 Tensor(i32)
#define Tensor_u32 Tensor(u32)
#define Tensor_i64 Tensor(i64)
#define Tensor_u64 Tensor(u64)
#define Tensor_i128 Tensor(i128)
#define Tensor_u128 Tensor(u128)
#define Tensor_f16 Tensor(f16)
#define Tensor_f32 Tensor(f32)
#define Tensor_f64 Tensor(f64)
#define Tensor_f80 Tensor(f80)
#define Tensor_f128 Tensor(f128)

	typedef int8_t i8;
	typedef uint8_t u8;
	typedef int16_t i16;
	typedef uint16_t u16;
	typedef int32_t i32;
	typedef uint32_t u32;
	typedef int64_t i64;
	typedef uint64_t u64;
	typedef __int128 i128;
	typedef unsigned __int128 u128;
	typedef _Float16 f16;
	typedef float f32;
	typedef double f64;
	typedef long double f80;
	typedef __float128 f128;

	_Tensor(i8);
	_Tensor(u8);
	_Tensor(i16);
	_Tensor(u16);
	_Tensor(i32);
	_Tensor(u32);
	_Tensor(i64);
	_Tensor(u64);
	_Tensor(i128);
	_Tensor(u128);
	_Tensor(f16);
	_Tensor(f32);
	_Tensor(f64);
	_Tensor(f80);
	_Tensor(f128);

#ifdef __cplusplus
}
#endif

#endif
