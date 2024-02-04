
#ifndef __TENSOR_UTILS_SQUEEZE_H__
#define __TENSOR_UTILS_SQUEEZE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "_utils.h"
#include "../type.h"

	/*
	 * Tensor(Type)
	 * Tensor(Type), dim
	 */

	Tensor(bool) _Tensor_squeeze_bool (Tensor(bool), ... );

	Tensor(i8) _Tensor_squeeze_i8 (Tensor(i8), ... );
	Tensor(i16) _Tensor_squeeze_i16 (Tensor(i16), ... );
	Tensor(i32) _Tensor_squeeze_i32 (Tensor(i32), ... );
	Tensor(i64) _Tensor_squeeze_i64 (Tensor(i64), ... );
	Tensor(i128) _Tensor_squeeze_i128 (Tensor(i128), ... );

	Tensor(u8) _Tensor_squeeze_u8 (Tensor(u8), ... );
	Tensor(u16) _Tensor_squeeze_u16 (Tensor(u16), ... );
	Tensor(u32) _Tensor_squeeze_u32 (Tensor(u32), ... );
	Tensor(u64) _Tensor_squeeze_u64 (Tensor(u64), ... );
	Tensor(u128) _Tensor_squeeze_u128 (Tensor(u128), ... );

	Tensor(f16) _Tensor_squeeze_f16 (Tensor(f16), ... );
	Tensor(f32) _Tensor_squeeze_f32 (Tensor(f32), ... );
	Tensor(f64) _Tensor_squeeze_f64 (Tensor(f64), ... );
	Tensor(f80) _Tensor_squeeze_f80 (Tensor(f80), ... );
	Tensor(f128) _Tensor_squeeze_f128 (Tensor(f128), ... );

#if __ENABLE_COMPLEX__

	Tensor(cf16) _Tensor_squeeze_cf16 (Tensor(cf16), ... );
	Tensor(cf32) _Tensor_squeeze_cf32 (Tensor(cf32), ... );
	Tensor(cf64) _Tensor_squeeze_cf64 (Tensor(cf64), ... );
	Tensor(cf80) _Tensor_squeeze_cf80 (Tensor(cf80), ... );
	Tensor(cf128) _Tensor_squeeze_cf128 (Tensor(cf128), ... );

#endif

	Tensor(bool) _Tensor_squeeze_bool_ (Tensor(bool), ... );

	Tensor(i8) _Tensor_squeeze_i8_ (Tensor(i8), ... );
	Tensor(i16) _Tensor_squeeze_i16_ (Tensor(i16), ... );
	Tensor(i32) _Tensor_squeeze_i32_ (Tensor(i32), ... );
	Tensor(i64) _Tensor_squeeze_i64_ (Tensor(i64), ... );
	Tensor(i128) _Tensor_squeeze_i128_ (Tensor(i128), ... );

	Tensor(u8) _Tensor_squeeze_u8_ (Tensor(u8), ... );
	Tensor(u16) _Tensor_squeeze_u16_ (Tensor(u16), ... );
	Tensor(u32) _Tensor_squeeze_u32_ (Tensor(u32), ... );
	Tensor(u64) _Tensor_squeeze_u64_ (Tensor(u64), ... );
	Tensor(u128) _Tensor_squeeze_u128_ (Tensor(u128), ... );

	Tensor(f16) _Tensor_squeeze_f16_ (Tensor(f16), ... );
	Tensor(f32) _Tensor_squeeze_f32_ (Tensor(f32), ... );
	Tensor(f64) _Tensor_squeeze_f64_ (Tensor(f64), ... );
	Tensor(f80) _Tensor_squeeze_f80_ (Tensor(f80), ... );
	Tensor(f128) _Tensor_squeeze_f128_ (Tensor(f128), ... );

#if __ENABLE_COMPLEX__

	Tensor(cf16) _Tensor_squeeze_cf16_ (Tensor(cf16), ... );
	Tensor(cf32) _Tensor_squeeze_cf32_ (Tensor(cf32), ... );
	Tensor(cf64) _Tensor_squeeze_cf64_ (Tensor(cf64), ... );
	Tensor(cf80) _Tensor_squeeze_cf80_ (Tensor(cf80), ... );
	Tensor(cf128) _Tensor_squeeze_cf128_ (Tensor(cf128), ... );

#endif

#define Tensor_squeeze(T, ...) _Tensor_squeeze(\
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
																						)))))))))))))))) (T, ##__VA_ARGS__)

#define Tensor_squeeze_(T, ...) _Tensor_squeeze_(\
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
																						)))))))))))))))) (T, ##__VA_ARGS__)

#ifdef __cplusplus
}
#endif

#endif
