
#ifndef __HOLAMATH_MINMAX_H__
#define __HOLAMATH_MINMAX_H__

#ifdef __cplusplus
extern "C" {
#endif

#define __is_constexpr(x) \
	(sizeof(int) == sizeof(*(8 ? ((void *)((long)(x) * 0l)) : (int *)8)))

#define is_signed_type(type) (((type)(-1)) < (__force type)1)
#define is_unsigned_type(type) (!is_signed_type(type))

#define __is_signed(x) 								\
	__builtin_choose_expr(__is_constexpr(is_signed_type(typeof(x))),	\
		is_signed_type(typeof(x)), 0)

#define __is_noneg_int(x)	\
	(__builtin_choose_expr(__is_constexpr(x) && __is_signed(x), x, -1) >= 0)

#define ___PASTE(a, b) a##b
#define __PASTE(a, b) ___PASTE(a, b)
#define __UNIQUE_ID(a) __PASTE(__UNIQUE_ID_, __PASTE(a, __COUNTER__))

#define __types_ok(x, y)					\
	(__is_signed(x) == __is_signed(y) ||			\
	 __is_signed((x) + 0) == __is_signed((y) + 0) ||	\
	 __is_noneg_int(x) || __is_noneg_int(y))

#define __cmp_op_min <
#define __cmp_op_max >

#define __cmp(op, x, y) ((x) __cmp_op_##op (y) ? (x) : (y))

#define __cmp_once(op, x, y, unique_x, unique_y) __extension__({	\
		__typeof__(x) unique_x = (x);				\
		__typeof__(y) unique_y = (y);				\
		__cmp(op, unique_x, unique_y);	})			\

#define __careful_cmp(op, x, y)					\
	__builtin_choose_expr(__is_constexpr((x) - (y)),	\
			__cmp(op, x, y),			\
			__cmp_once(op, x, y, __UNIQUE_ID(__x), __UNIQUE_ID(__y)))

#define min(x, y) __careful_cmp(min, x, y)
#define max(x, y) __careful_cmp(max, x, y)

#ifdef __cplusplus
}
#endif

#endif
