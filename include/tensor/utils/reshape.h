
#ifndef __TENSOR_UTILS_RESHAOE_H__
#define __TENSOR_UTILS_RESHAOE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	/*
	 * Tensor(Type)
	 * Tensor(Type), dim, shape
	 */

	Tensor(bool) _Tensor_reshape_bool (Tensor(bool), size_t, size_t *);

	Tensor(i8) _Tensor_reshape_i8 (Tensor(i8), size_t, size_t *);
	Tensor(i16) _Tensor_reshape_i16 (Tensor(i16), size_t, size_t *);
	Tensor(i32) _Tensor_reshape_i32 (Tensor(i32), size_t, size_t *);
	Tensor(i64) _Tensor_reshape_i64 (Tensor(i64), size_t, size_t *);
	Tensor(i128) _Tensor_reshape_i128 (Tensor(i128), size_t, size_t *);

	Tensor(u8) _Tensor_reshape_u8 (Tensor(u8), size_t, size_t *);
	Tensor(u16) _Tensor_reshape_u16 (Tensor(u16), size_t, size_t *);
	Tensor(u32) _Tensor_reshape_u32 (Tensor(u32), size_t, size_t *);
	Tensor(u64) _Tensor_reshape_u64 (Tensor(u64), size_t, size_t *);
	Tensor(u128) _Tensor_reshape_u128 (Tensor(u128), size_t, size_t *);

#if __ENABLE_COMPLEX__

	Tensor(cf16) _Tensor_reshape_cf16 (Tensor(cf16), size_t, size_t *);
	Tensor(cf32) _Tensor_reshape_cf32 (Tensor(cf32), size_t, size_t *);
	Tensor(cf64) _Tensor_reshape_cf64 (Tensor(cf64), size_t, size_t *);
	Tensor(cf80) _Tensor_reshape_cf80 (Tensor(cf80), size_t, size_t *);
	Tensor(cf128) _Tensor_reshape_cf128 (Tensor(cf128), size_t, size_t *);

#endif

#define Tensor_reshape(T, dim, shape) _Tensor_reshape(\
		__builtin_choose_expr(\
			__builtin_types_compatible_p (__typeof__(T), Tensor(i8)), i8,\
			__builtin_choose_expr (\
				__builtin_types_compatible_p (__typeof__(T), Tensor(u8)), u8,\
				__builtin_choose_expr (\
					__builtin_types_compatible_p (__typeof__(T), Tensor(i16)), i16,\
					__builtin_choose_expr (\
						__builtin_types_compatible_p (__typeof__(T), Tensor(u16)), u16,\
						__builtin_choose_expr (\
							__builtin_types_compatible_p (__typeof__(T), Tensor(i32)), i32,\
							__builtin_choose_expr (\
								__builtin_types_compatible_p (__typeof__(T), Tensor(u32)), u32,\
								__builtin_choose_expr (\
									__builtin_types_compatible_p (__typeof__(T), Tensor(i64)), i64,\
									__builtin_choose_expr (\
										__builtin_types_compatible_p (__typeof__(T), Tensor(u64)), u64,\
										__builtin_choose_expr (\
											__builtin_types_compatible_p (__typeof__(T), Tensor(i128)), i128,\
											__builtin_choose_expr (\
												__builtin_types_compatible_p (__typeof__(T), Tensor(u128)), u128,\
												__builtin_choose_expr (\
													__builtin_types_compatible_p (__typeof__(T), Tensor(f16)), f16,\
													__builtin_choose_expr (\
														__builtin_types_compatible_p (__typeof__(T), Tensor(f32)), f32,\
														__builtin_choose_expr (\
															__builtin_types_compatible_p (__typeof__(T), Tensor(f64)), f64,\
															__builtin_choose_expr (\
																__builtin_types_compatible_p (__typeof__(T), Tensor(f80)), f80,\
																__builtin_choose_expr (\
																	__builtin_types_compatible_p (__typeof__(T), Tensor(f128)), f128,\
																	__builtin_choose_expr( __ENABLE_COMPLEX__,\
																		__builtin_types_compatible_p (__typeof__(T), Tensor(cf16)), cf16,\
																		__builtin_choose_expr (\
																			__builtin_types_compatible_p (__typeof__(T), Tensor(cf32)), cf32,\
																			__builtin_choose_expr (\
																				__builtin_types_compatible_p (__typeof__(T), Tensor(cf64)), cf64,\
																				__builtin_choose_expr (\
																					__builtin_types_compatible_p (__typeof__(T), Tensor(cf80)), cf80,\
																					__builtin_choose_expr (\
																						__builtin_types_compatible_p (__typeof__(T), Tensor(cf128)), cf128,\
																						void)))), void)\
																						)))))))))))))))) (T, dim, shape)

#define Tensor_reshape_as(T1, T2) Tensor_reshape(T1, T2.dim, T2.shape)

#ifdef __cplusplus
}
#endif

#endif
