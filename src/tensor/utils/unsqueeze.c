
#include "../../../include/tensor/utils.h"

#include <string.h>

#define ___Tensor(Type) 					\
	Tensor(Type)						\
	_Tensor_unsqueeze_##Type (Tensor(Type) T, size_t dim){	\
		register Tensor(Type) ret = {			\
			.dim = 0,				\
			.shape = NULL,				\
			.stride = NULL,				\
			.grad = NULL,				\
			.require_grad = false,			\
			.data = NULL				\
		};						\
		register size_t len = 0;			\
		register size_t i;				\
		register size_t j;				\
		if ( dim > T.dim ){ return ret; }		\
		len = *( T.stride + T.dim );			\
		ret.dim = T.dim + 1;				\
		ret.shape = malloc( sizeof( *ret.shape ) *	\
			ret.dim );				\
		ret.stride = malloc( sizeof( *ret.stride ) *	\
			( ret.dim + 1 ) );			\
		ret.data = malloc( sizeof( *ret.data ) * len );	\
		memcpy( ret.data, T.data, sizeof( *ret.data ) *	\
			len );					\
		*( ret.stride + ret.dim ) = len;		\
		for ( i = j = 0; i < T.dim; i++, j++ ){		\
			!( i - dim ) &&				\
			( *( ret.shape + j++ ) = 1 );		\
			*( ret.shape + j ) = *( T.shape + i );	\
		}						\
		i = 0;						\
		while( len ){					\
			len /= *( ret.shape + i );		\
			*( ret.stride + i++ ) = len;		\
		}						\
		return ret;					\
	}

#define ___Tensor_(Type) 					\
	Tensor(Type)						\
	_Tensor_unsqueeze_##Type##_ (Tensor(Type) *T, size_t dim){\
		register Tensor(Type) ret = *T;			\
		register size_t len = 0;			\
		register size_t i;				\
		register size_t j;				\
		if ( (*T).dim < dim ){ return ret; }		\
		len = *((*T).stride + (*T).dim );		\
		(*T).dim ++;					\
		(*T).shape = malloc( sizeof( *(*T).shape ) * len);\
		(*T).stride = malloc( sizeof( *(*T).stride ) *	\
			( (*T).dim + 1 ) );			\
		*((*T).stride + (*T).dim ) = len;		\
		for ( i = j = 0; i < (*T).dim; i++, j++ ){	\
			!( i - dim ) &&				\
			(*((*T).shape + j++ ) = 1 );		\
			*((*T).stride + j ) = *( ret.stride + i );\
		}						\
		i = 0;						\
		while( len ){					\
			len /= *((*T).shape + i );		\
			*((*T).stride + i++ ) = len;		\
		}						\
		ret = *T;					\
		return ret;					\
	}

___Tensor(bool)

___Tensor(i8)
___Tensor(i16)
___Tensor(i32)
___Tensor(i64)
___Tensor(i128)

___Tensor(u8)
___Tensor(u16)
___Tensor(u32)
___Tensor(u64)
___Tensor(u128)

___Tensor(f16)
___Tensor(f32)
___Tensor(f64)
___Tensor(f80)
___Tensor(f128)

___Tensor(cf16)
___Tensor(cf32)
___Tensor(cf64)
___Tensor(cf80)
___Tensor(cf128)

___Tensor_(bool)

___Tensor_(i8)
___Tensor_(i16)
___Tensor_(i32)
___Tensor_(i64)
___Tensor_(i128)

___Tensor_(u8)
___Tensor_(u16)
___Tensor_(u32)
___Tensor_(u64)
___Tensor_(u128)

___Tensor_(f16)
___Tensor_(f32)
___Tensor_(f64)
___Tensor_(f80)
___Tensor_(f128)

___Tensor_(cf16)
___Tensor_(cf32)
___Tensor_(cf64)
___Tensor_(cf80)
___Tensor_(cf128)

