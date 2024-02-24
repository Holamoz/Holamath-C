
#define _Tensor(Type,func,RET,...) RET _Tensor_##func##_##Type (__VA_ARGS__)
#define __Tensor(Type) _Tensor(Type, FuncName, \
		RET Type,\
		Arg1 Type\
		)

__Tensor(bool);

__Tensor(i8);
__Tensor(i16);
__Tensor(i32);
__Tensor(i64);
__Tensor(i128);

__Tensor(u8);
__Tensor(u16);
__Tensor(u32);
__Tensor(u64);
__Tensor(u128);

__Tensor(f16);
__Tensor(f32);
__Tensor(f64);
__Tensor(f80);
__Tensor(f128);

__Tensor(cf16);
__Tensor(cf32);
__Tensor(cf64);
__Tensor(cf80);
__Tensor(cf128);

