
#ifndef __TENSOR_UTILS_NEW_FULL_H__
#define __TENSOR_UTILS_NEW_FULL_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "../_utils.h"
#include "../../type.h"

	/*
	 *                 !!! WARNNING !!!
	 * THIS FUNCTION WOULD BE A ALIAS OF Tensor_full()
	 */

	/*
	 * Tensor, dim of new tensor, shape of new tensor, the value to fill
	 */

	Tensor(bool) _Tensor_new_full_bool (Tensor(bool), size_t, size_t *, bool);
	
	Tensor(i8) _Tensor_new_full_i8 (Tensor(i8), size_t, size_t *, i8);
	Tensor(i16) _Tensor_new_full_i16 (Tensor(i16), size_t, size_t *, i16);
	Tensor(i32) _Tensor_new_full_i32 (Tensor(i32), size_t, size_t *, i32);
	Tensor(i64) _Tensor_new_full_i64 (Tensor(i64), size_t, size_t *, i64);
	Tensor(i128) _Tensor_new_full_i128 (Tensor(i128), size_t, size_t *, i128);

	Tensor(u8) _Tensor_new_full_u8 (Tensor(u8), size_t, size_t *, u8);
	Tensor(u16) _Tensor_new_full_u16 (Tensor(u16), size_t, size_t *, u16);
	Tensor(u32) _Tensor_new_full_u32 (Tensor(u32), size_t, size_t *, u32);
	Tensor(u64) _Tensor_new_full_u64 (Tensor(u64), size_t, size_t *, u64);
	Tensor(u128) _Tensor_new_full_u128 (Tensor(u128), size_t, size_t *, u128);

	Tensor(f16) _Tensor_new_full_f16 (Tensor(f16), size_t, size_t *, f16);
	Tensor(f32) _Tensor_new_full_f32 (Tensor(f32), size_t, size_t *, f32);
	Tensor(f64) _Tensor_new_full_f64 (Tensor(f64), size_t, size_t *, f64);
	Tensor(f80) _Tensor_new_full_f80 (Tensor(f80), size_t, size_t *, f80);
	Tensor(f128) _Tensor_new_full_f128 (Tensor(f128), size_t, size_t *, f128);


#if __ENABLE_COMPLEX__

	Tensor(cf16) _Tensor_new_full_cf16 (Tensor(cf16), size_t, size_t *, cf16);
	Tensor(cf32) _Tensor_new_full_cf32 (Tensor(cf32), size_t, size_t *, cf32);
	Tensor(cf64) _Tensor_new_full_cf64 (Tensor(cf64), size_t, size_t *, cf64);
	Tensor(cf80) _Tensor_new_full_cf80 (Tensor(cf80), size_t, size_t *, cf80);
	Tensor(cf128) _Tensor_new_full_cf128 (Tensor(cf128), size_t, size_t *, cf128);

#endif

#define Tensor_new_full(T, dim, shape, value) _Tensor_new_full(\
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
																						(void)0 )))), (void)0 )\
																						)))))))))))))))) (T, dim, shape, value)

#ifdef __cplusplus
}
#endif

#endif
