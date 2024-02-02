
#ifndef __TENSOR_UTILS_TRNAS_TYPE_H__
#define __TENSOR_UTILS_TRNAS_TYPE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "../type.h"

#include <stdlib.h>
#include <string.h>

#define _Tensor_to(Type1, Type2) Tensor_to_##Type1##_##Type2
#define __Tensor_to(Type1, Type2) Tensor(Type2) _Tensor_to(Type1, Type2) (Tensor(Type1) T)
#define ___Tensor_to(Type1, Type2) __Tensor_to(Type1, Type2){		\
	register Tensor(Type2) R;					\
	register size_t i;						\
	R.dim = T.dim;							\
	R.grad = NULL;							\
	R.require_grad = T.require_grad;				\
	R.shape = malloc( sizeof(Type2) * T.dim );			\
	R.stride = malloc( sizeof(Type2) * ( T.dim + 1 ) );		\
									\
	memcpy( R.shape, T.shape, T.dim );				\
	memcpy( R.stride, T.stride, T.dim + 1 );			\
									\
	R.data = malloc( sizeof(Type2) * *( R.stride + R.dim ) );	\
									\
	for( i = 0; i < *( R.stride + R.dim ); i++ ){			\
		*( R.data + i ) = (Type2)*( T.data + i );		\
	}								\
									\
	return R;							\
}

	___Tensor_to(i8, i8);
	___Tensor_to(i8, i16);
	___Tensor_to(i8, i32);
	___Tensor_to(i8, i64);
	___Tensor_to(i8, i128);
	___Tensor_to(i8, u8);
	___Tensor_to(i8, u16);
	___Tensor_to(i8, u32);
	___Tensor_to(i8, u64);
	___Tensor_to(i8, u128);
	___Tensor_to(i8, f16);
	___Tensor_to(i8, f32);
	___Tensor_to(i8, f64);
	___Tensor_to(i8, f80);
	___Tensor_to(i8, f128);

#if __ENABLE_COMPLEX__

	___Tensor_to(i8, cf16);
	___Tensor_to(i8, cf32);
	___Tensor_to(i8, cf64);
	___Tensor_to(i8, cf80);
	___Tensor_to(i8, cf128);

#endif

	___Tensor_to(i16, i8);
	___Tensor_to(i16, i16);
	___Tensor_to(i16, i32);
	___Tensor_to(i16, i64);
	___Tensor_to(i16, i128);
	___Tensor_to(i16, u8);
	___Tensor_to(i16, u16);
	___Tensor_to(i16, u32);
	___Tensor_to(i16, u64);
	___Tensor_to(i16, u128);
	___Tensor_to(i16, f16);
	___Tensor_to(i16, f32);
	___Tensor_to(i16, f64);
	___Tensor_to(i16, f80);
	___Tensor_to(i16, f128);

#if __ENABLE_COMPLEX__

	___Tensor_to(i16, cf16);
	___Tensor_to(i16, cf32);
	___Tensor_to(i16, cf64);
	___Tensor_to(i16, cf80);
	___Tensor_to(i16, cf128);

#endif

	___Tensor_to(i32, i8);
	___Tensor_to(i32, i16);
	___Tensor_to(i32, i32);
	___Tensor_to(i32, i64);
	___Tensor_to(i32, i128);
	___Tensor_to(i32, u8);
	___Tensor_to(i32, u16);
	___Tensor_to(i32, u32);
	___Tensor_to(i32, u64);
	___Tensor_to(i32, u128);
	___Tensor_to(i32, f16);
	___Tensor_to(i32, f32);
	___Tensor_to(i32, f64);
	___Tensor_to(i32, f80);
	___Tensor_to(i32, f128);

#if __ENABLE_COMPLEX__

	___Tensor_to(i32, cf16);
	___Tensor_to(i32, cf32);
	___Tensor_to(i32, cf64);
	___Tensor_to(i32, cf80);
	___Tensor_to(i32, cf128);

#endif

	___Tensor_to(i64, i8);
	___Tensor_to(i64, i16);
	___Tensor_to(i64, i32);
	___Tensor_to(i64, i64);
	___Tensor_to(i64, i128);
	___Tensor_to(i64, u8);
	___Tensor_to(i64, u16);
	___Tensor_to(i64, u32);
	___Tensor_to(i64, u64);
	___Tensor_to(i64, u128);
	___Tensor_to(i64, f16);
	___Tensor_to(i64, f32);
	___Tensor_to(i64, f64);
	___Tensor_to(i64, f80);
	___Tensor_to(i64, f128);

#if __ENABLE_COMPLEX__

	___Tensor_to(i64, cf16);
	___Tensor_to(i64, cf32);
	___Tensor_to(i64, cf64);
	___Tensor_to(i64, cf80);
	___Tensor_to(i64, cf128);

#endif

	___Tensor_to(i128, i8);
	___Tensor_to(i128, i16);
	___Tensor_to(i128, i32);
	___Tensor_to(i128, i64);
	___Tensor_to(i128, i128);
	___Tensor_to(i128, u8);
	___Tensor_to(i128, u16);
	___Tensor_to(i128, u32);
	___Tensor_to(i128, u64);
	___Tensor_to(i128, u128);
	___Tensor_to(i128, f16);
	___Tensor_to(i128, f32);
	___Tensor_to(i128, f64);
	___Tensor_to(i128, f80);
	___Tensor_to(i128, f128);

#if __ENABLE_COMPLEX__

	___Tensor_to(i128, cf16);
	___Tensor_to(i128, cf32);
	___Tensor_to(i128, cf64);
	___Tensor_to(i128, cf80);
	___Tensor_to(i128, cf128);

#endif

	___Tensor_to(u8, i8);
	___Tensor_to(u8, i16);
	___Tensor_to(u8, i32);
	___Tensor_to(u8, i64);
	___Tensor_to(u8, i128);
	___Tensor_to(u8, u8);
	___Tensor_to(u8, u16);
	___Tensor_to(u8, u32);
	___Tensor_to(u8, u64);
	___Tensor_to(u8, u128);
	___Tensor_to(u8, f16);
	___Tensor_to(u8, f32);
	___Tensor_to(u8, f64);
	___Tensor_to(u8, f80);
	___Tensor_to(u8, f128);

#if __ENABLE_COMPLEX__

	___Tensor_to(u8, cf16);
	___Tensor_to(u8, cf32);
	___Tensor_to(u8, cf64);
	___Tensor_to(u8, cf80);
	___Tensor_to(u8, cf128);

#endif

	___Tensor_to(u16, i8);
	___Tensor_to(u16, i16);
	___Tensor_to(u16, i32);
	___Tensor_to(u16, i64);
	___Tensor_to(u16, i128);
	___Tensor_to(u16, u8);
	___Tensor_to(u16, u16);
	___Tensor_to(u16, u32);
	___Tensor_to(u16, u64);
	___Tensor_to(u16, u128);
	___Tensor_to(u16, f16);
	___Tensor_to(u16, f32);
	___Tensor_to(u16, f64);
	___Tensor_to(u16, f80);
	___Tensor_to(u16, f128);

#if __ENABLE_COMPLEX__

	___Tensor_to(u16, cf16);
	___Tensor_to(u16, cf32);
	___Tensor_to(u16, cf64);
	___Tensor_to(u16, cf80);
	___Tensor_to(u16, cf128);

#endif

	___Tensor_to(u32, i8);
	___Tensor_to(u32, i16);
	___Tensor_to(u32, i32);
	___Tensor_to(u32, i64);
	___Tensor_to(u32, i128);
	___Tensor_to(u32, u8);
	___Tensor_to(u32, u16);
	___Tensor_to(u32, u32);
	___Tensor_to(u32, u64);
	___Tensor_to(u32, u128);
	___Tensor_to(u32, f16);
	___Tensor_to(u32, f32);
	___Tensor_to(u32, f64);
	___Tensor_to(u32, f80);
	___Tensor_to(u32, f128);

#if __ENABLE_COMPLEX__

	___Tensor_to(u32, cf16);
	___Tensor_to(u32, cf32);
	___Tensor_to(u32, cf64);
	___Tensor_to(u32, cf80);
	___Tensor_to(u32, cf128);

#endif

	___Tensor_to(u64, i8);
	___Tensor_to(u64, i16);
	___Tensor_to(u64, i32);
	___Tensor_to(u64, i64);
	___Tensor_to(u64, i128);
	___Tensor_to(u64, u8);
	___Tensor_to(u64, u16);
	___Tensor_to(u64, u32);
	___Tensor_to(u64, u64);
	___Tensor_to(u64, u128);
	___Tensor_to(u64, f16);
	___Tensor_to(u64, f32);
	___Tensor_to(u64, f64);
	___Tensor_to(u64, f80);
	___Tensor_to(u64, f128);

#if __ENABLE_COMPLEX__

	___Tensor_to(u64, cf16);
	___Tensor_to(u64, cf32);
	___Tensor_to(u64, cf64);
	___Tensor_to(u64, cf80);
	___Tensor_to(u64, cf128);

#endif

	___Tensor_to(u128, i8);
	___Tensor_to(u128, i16);
	___Tensor_to(u128, i32);
	___Tensor_to(u128, i64);
	___Tensor_to(u128, i128);
	___Tensor_to(u128, u8);
	___Tensor_to(u128, u16);
	___Tensor_to(u128, u32);
	___Tensor_to(u128, u64);
	___Tensor_to(u128, u128);
	___Tensor_to(u128, f16);
	___Tensor_to(u128, f32);
	___Tensor_to(u128, f64);
	___Tensor_to(u128, f80);
	___Tensor_to(u128, f128);

#if __ENABLE_COMPLEX__

	___Tensor_to(u128, cf16);
	___Tensor_to(u128, cf32);
	___Tensor_to(u128, cf64);
	___Tensor_to(u128, cf80);
	___Tensor_to(u128, cf128);

#endif

	___Tensor_to(f16, i8);
	___Tensor_to(f16, i16);
	___Tensor_to(f16, i32);
	___Tensor_to(f16, i64);
	___Tensor_to(f16, i128);
	___Tensor_to(f16, u8);
	___Tensor_to(f16, u16);
	___Tensor_to(f16, u32);
	___Tensor_to(f16, u64);
	___Tensor_to(f16, u128);
	___Tensor_to(f16, f16);
	___Tensor_to(f16, f32);
	___Tensor_to(f16, f64);
	___Tensor_to(f16, f80);
	___Tensor_to(f16, f128);

#if __ENABLE_COMPLEX__

	___Tensor_to(f16, cf16);
	___Tensor_to(f16, cf32);
	___Tensor_to(f16, cf64);
	___Tensor_to(f16, cf80);
	___Tensor_to(f16, cf128);

#endif

	___Tensor_to(f32, i8);
	___Tensor_to(f32, i16);
	___Tensor_to(f32, i32);
	___Tensor_to(f32, i64);
	___Tensor_to(f32, i128);
	___Tensor_to(f32, u8);
	___Tensor_to(f32, u16);
	___Tensor_to(f32, u32);
	___Tensor_to(f32, u64);
	___Tensor_to(f32, u128);
	___Tensor_to(f32, f16);
	___Tensor_to(f32, f32);
	___Tensor_to(f32, f64);
	___Tensor_to(f32, f80);
	___Tensor_to(f32, f128);

#if __ENABLE_COMPLEX__

	___Tensor_to(f32, cf16);
	___Tensor_to(f32, cf32);
	___Tensor_to(f32, cf64);
	___Tensor_to(f32, cf80);
	___Tensor_to(f32, cf128);

#endif

	___Tensor_to(f64, i8);
	___Tensor_to(f64, i16);
	___Tensor_to(f64, i32);
	___Tensor_to(f64, i64);
	___Tensor_to(f64, i128);
	___Tensor_to(f64, u8);
	___Tensor_to(f64, u16);
	___Tensor_to(f64, u32);
	___Tensor_to(f64, u64);
	___Tensor_to(f64, u128);
	___Tensor_to(f64, f16);
	___Tensor_to(f64, f32);
	___Tensor_to(f64, f64);
	___Tensor_to(f64, f80);
	___Tensor_to(f64, f128);

#if __ENABLE_COMPLEX__

	___Tensor_to(f64, cf16);
	___Tensor_to(f64, cf32);
	___Tensor_to(f64, cf64);
	___Tensor_to(f64, cf80);
	___Tensor_to(f64, cf128);

#endif

	___Tensor_to(f80, i8);
	___Tensor_to(f80, i16);
	___Tensor_to(f80, i32);
	___Tensor_to(f80, i64);
	___Tensor_to(f80, i128);
	___Tensor_to(f80, u8);
	___Tensor_to(f80, u16);
	___Tensor_to(f80, u32);
	___Tensor_to(f80, u64);
	___Tensor_to(f80, u128);
	___Tensor_to(f80, f16);
	___Tensor_to(f80, f32);
	___Tensor_to(f80, f64);
	___Tensor_to(f80, f80);
	___Tensor_to(f80, f128);

#if __ENABLE_COMPLEX__

	___Tensor_to(f80, cf16);
	___Tensor_to(f80, cf32);
	___Tensor_to(f80, cf64);
	___Tensor_to(f80, cf80);
	___Tensor_to(f80, cf128);

#endif

	___Tensor_to(f128, i8);
	___Tensor_to(f128, i16);
	___Tensor_to(f128, i32);
	___Tensor_to(f128, i64);
	___Tensor_to(f128, i128);
	___Tensor_to(f128, u8);
	___Tensor_to(f128, u16);
	___Tensor_to(f128, u32);
	___Tensor_to(f128, u64);
	___Tensor_to(f128, u128);
	___Tensor_to(f128, f16);
	___Tensor_to(f128, f32);
	___Tensor_to(f128, f64);
	___Tensor_to(f128, f80);
	___Tensor_to(f128, f128);

#if __ENABLE_COMPLEX__

	___Tensor_to(f128, cf16);
	___Tensor_to(f128, cf32);
	___Tensor_to(f128, cf64);
	___Tensor_to(f128, cf80);
	___Tensor_to(f128, cf128);

#endif

#if __ENABLE_COMPLEX__

	___Tensor_to(cf16, i8);
	___Tensor_to(cf16, i16);
	___Tensor_to(cf16, i32);
	___Tensor_to(cf16, i64);
	___Tensor_to(cf16, i128);
	___Tensor_to(cf16, u8);
	___Tensor_to(cf16, u16);
	___Tensor_to(cf16, u32);
	___Tensor_to(cf16, u64);
	___Tensor_to(cf16, u128);
	___Tensor_to(cf16, f16);
	___Tensor_to(cf16, f32);
	___Tensor_to(cf16, f64);
	___Tensor_to(cf16, f80);
	___Tensor_to(cf16, f128);

	___Tensor_to(cf16, cf16);
	___Tensor_to(cf16, cf32);
	___Tensor_to(cf16, cf64);
	___Tensor_to(cf16, cf80);
	___Tensor_to(cf16, cf128);

#endif

#if __ENABLE_COMPLEX__

	___Tensor_to(cf32, i8);
	___Tensor_to(cf32, i16);
	___Tensor_to(cf32, i32);
	___Tensor_to(cf32, i64);
	___Tensor_to(cf32, i128);
	___Tensor_to(cf32, u8);
	___Tensor_to(cf32, u16);
	___Tensor_to(cf32, u32);
	___Tensor_to(cf32, u64);
	___Tensor_to(cf32, u128);
	___Tensor_to(cf32, f16);
	___Tensor_to(cf32, f32);
	___Tensor_to(cf32, f64);
	___Tensor_to(cf32, f80);
	___Tensor_to(cf32, f128);

	___Tensor_to(cf32, cf16);
	___Tensor_to(cf32, cf32);
	___Tensor_to(cf32, cf64);
	___Tensor_to(cf32, cf80);
	___Tensor_to(cf32, cf128);

#endif

#if __ENABLE_COMPLEX__

	___Tensor_to(cf64, i8);
	___Tensor_to(cf64, i16);
	___Tensor_to(cf64, i32);
	___Tensor_to(cf64, i64);
	___Tensor_to(cf64, i128);
	___Tensor_to(cf64, u8);
	___Tensor_to(cf64, u16);
	___Tensor_to(cf64, u32);
	___Tensor_to(cf64, u64);
	___Tensor_to(cf64, u128);
	___Tensor_to(cf64, f16);
	___Tensor_to(cf64, f32);
	___Tensor_to(cf64, f64);
	___Tensor_to(cf64, f80);
	___Tensor_to(cf64, f128);

	___Tensor_to(cf64, cf16);
	___Tensor_to(cf64, cf32);
	___Tensor_to(cf64, cf64);
	___Tensor_to(cf64, cf80);
	___Tensor_to(cf64, cf128);

#endif

#if __ENABLE_COMPLEX__

	___Tensor_to(cf80, i8);
	___Tensor_to(cf80, i16);
	___Tensor_to(cf80, i32);
	___Tensor_to(cf80, i64);
	___Tensor_to(cf80, i128);
	___Tensor_to(cf80, u8);
	___Tensor_to(cf80, u16);
	___Tensor_to(cf80, u32);
	___Tensor_to(cf80, u64);
	___Tensor_to(cf80, u128);
	___Tensor_to(cf80, f16);
	___Tensor_to(cf80, f32);
	___Tensor_to(cf80, f64);
	___Tensor_to(cf80, f80);
	___Tensor_to(cf80, f128);

	___Tensor_to(cf80, cf16);
	___Tensor_to(cf80, cf32);
	___Tensor_to(cf80, cf64);
	___Tensor_to(cf80, cf80);
	___Tensor_to(cf80, cf128);

#endif

#if __ENABLE_COMPLEX__

	___Tensor_to(cf128, i8);
	___Tensor_to(cf128, i16);
	___Tensor_to(cf128, i32);
	___Tensor_to(cf128, i64);
	___Tensor_to(cf128, i128);
	___Tensor_to(cf128, u8);
	___Tensor_to(cf128, u16);
	___Tensor_to(cf128, u32);
	___Tensor_to(cf128, u64);
	___Tensor_to(cf128, u128);
	___Tensor_to(cf128, f16);
	___Tensor_to(cf128, f32);
	___Tensor_to(cf128, f64);
	___Tensor_to(cf128, f80);
	___Tensor_to(cf128, f128);

	___Tensor_to(cf128, cf16);
	___Tensor_to(cf128, cf32);
	___Tensor_to(cf128, cf64);
	___Tensor_to(cf128, cf80);
	___Tensor_to(cf128, cf128);

#endif

#define Tensor_to(T, Type2) _Tensor_to(\
		__builtin_choose_expr(\
			__builtin_types_compatible_p (__typeof__(T), i8), i8,\
			__builtin_choose_expr (\
				__builtin_types_compatible_p (__typeof__(T), u8), u8,\
				__builtin_choose_expr (\
					__builtin_types_compatible_p (__typeof__(T), i16), i16,\
					__builtin_choose_expr (\
						__builtin_types_compatible_p (__typeof__(T), u16), u16,\
						__builtin_choose_expr (\
							__builtin_types_compatible_p (__typeof__(T), i32), i32,\
							__builtin_choose_expr (\
								__builtin_types_compatible_p (__typeof__(T), u32), u32,\
								__builtin_choose_expr (\
									__builtin_types_compatible_p (__typeof__(T), i64), i64,\
									__builtin_choose_expr (\
										__builtin_types_compatible_p (__typeof__(T), u64), u64,\
										__builtin_choose_expr (\
											__builtin_types_compatible_p (__typeof__(T), i128), i128,\
											__builtin_choose_expr (\
												__builtin_types_compatible_p (__typeof__(T), u128), u128,\
												__builtin_choose_expr (\
													__builtin_types_compatible_p (__typeof__(T), f16), f16,\
													__builtin_choose_expr (\
														__builtin_types_compatible_p (__typeof__(T), f32), f32,\
														__builtin_choose_expr (\
															__builtin_types_compatible_p (__typeof__(T), f64), f64,\
															__builtin_choose_expr (\
																__builtin_types_compatible_p (__typeof__(T), f80), f80,\
																__builtin_choose_expr (\
																	__builtin_types_compatible_p (__typeof__(T), f128), f128,\
																	__builtin_choose_expr( __ENABLE_COMPLEX__,\
																		__builtin_types_compatible_p (__typeof__(T), cf16), cf16,\
																		__builtin_choose_expr (\
																			__builtin_types_compatible_p (__typeof__(T), cf32), cf32,\
																			__builtin_choose_expr (\
																				__builtin_types_compatible_p (__typeof__(T), cf64), cf64,\
																				__builtin_choose_expr (\
																					__builtin_types_compatible_p (__typeof__(T), cf80), cf80,\
																					__builtin_choose_expr (\
																						__builtin_types_compatible_p (__typeof__(T), cf128), cf128,\
																						(void)0 )))), (void)0 )\
																						))))))))))))))), Type2) (T)

#ifdef ___cplusplus
}
#endif

#endif
