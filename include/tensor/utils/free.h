
#ifndef __TENSOR_UTILS_FREE_H__
#define __TENSOR_UTILS_FREE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	void _Tensor_free_bool (Tensor(bool));

	void _Tensor_free_i8 (Tensor(i8));
	void _Tensor_free_i16 (Tensor(i16));
	void _Tensor_free_i32 (Tensor(i32));
	void _Tensor_free_i64 (Tensor(i64));
	void _Tensor_free_i128 (Tensor(i128));

	void _Tensor_free_u8 (Tensor(u8));
	void _Tensor_free_u16 (Tensor(u16));
	void _Tensor_free_u32 (Tensor(u32));
	void _Tensor_free_u64 (Tensor(u64));
	void _Tensor_free_u128 (Tensor(u128));

	void _Tensor_free_f16 (Tensor(f16));
	void _Tensor_free_f32 (Tensor(f32));
	void _Tensor_free_f64 (Tensor(f64));
	void _Tensor_free_f80 (Tensor(f80));
	void _Tensor_free_f128 (Tensor(f128));

#if __ENABLE_COMPLEX__

	void _Tensor_free_cf16 (Tensor(cf16));
	void _Tensor_free_cf32 (Tensor(cf32));
	void _Tensor_free_cf64 (Tensor(cf64));
	void _Tensor_free_cf80 (Tensor(cf80));
	void _Tensor_free_cf128 (Tensor(cf128));

#endif

#define _Tensor_free_void ((void)0)

#define Tensor_free(T) _Tensor_free(\
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
																						)))))))))))))))) (T)

#ifdef __cplusplus
}
#endif

#endif
