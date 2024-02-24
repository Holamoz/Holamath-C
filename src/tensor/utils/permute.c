
#include "../../../include/tensor/utils/_utils.h"

#define ___Tensor_permute(Type) \
	Tensor(Type) _Tensor_permute_##Type (Tensor(Type) T, size_t dim, size_t *dims){\
		register Tensor(Type) ret = {\
			.dim = 0,\
			.shape = NULL,\
			.stride = NULL,\
			.grad = NULL,\
			.require_grad = NULL,\
			.data = NULL\
		};\
		register size_t len = 0;\
		register size_t *shape = NULL;\
		register size_t i;\
		if ( T.dim - dim ){ return ret; }\
		len = 0;\
		for ( i = 0; i < dim; i++ ){\
			if ( *( dims + i ) >= T.dim ){ return ret; }\
			len += *( dims + i );\
		}\
		if ( len != ( dim * ( dim -1 ) ) >> 1 ){ return ret; }\
		len = *( T.stride + T.dim );\
		shape = malloc( sizeof( *shape ) * dim );\
		for ( i = 0; i < dim; i++ ){\
			*( shape + i ) = *( T.shape + *( dims + i ) );\
			*( T.stride + i ) = 0;\
			if ( *( shape + i ) ){\
				len /= *( shape + i );\
				*( T.stride ) = len;\
		}\
		}\
		memcpy ( T.shape, shape, sizeof( *shape ) * dim );\
		ret.data = T.data;\
		return ret;\
	}

___Tensor_permute(bool)

___Tensor_permute(i8)
___Tensor_permute(i16)
___Tensor_permute(i32)
___Tensor_permute(i64)
___Tensor_permute(i128)

___Tensor_permute(u8)
___Tensor_permute(u16)
___Tensor_permute(u32)
___Tensor_permute(u64)
___Tensor_permute(u128)

___Tensor_permute(f16)
___Tensor_permute(f32)
___Tensor_permute(f64)
___Tensor_permute(f80)
___Tensor_permute(f128)

___Tensor_permute(cf16)
___Tensor_permute(cf32)
___Tensor_permute(cf64)
___Tensor_permute(cf80)
___Tensor_permute(cf128)

