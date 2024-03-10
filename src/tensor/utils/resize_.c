
#include "../../../include/tensor/utils/resize_.h"
#include "../../../include/minmax.h"

#define ___Tensor_resize(Type) \
	Tensor(Type) _Tensor_resize_##Type			\
	(Tensor(Type) *T, size_t dim, size_t *shape){		\
		register size_t len;				\
		register size_t i;				\
		register Type *data = NULL;			\
		if ( !shape ) { return *T; }			\
		for ( len = 1, i = 0; i < dim; i++ ){		\
			len *= *( shape + i );			\
		}						\
		if ( len - *( (*T).stride + (*T).dim ) && dim ){\
			return *T;				\
		}						\
		if ( len > *( (*T).stride + (*T).dim ) ){	\
			free( (*T).shape );			\
			(*T).shape =				\
			malloc( sizeof( *(*T).shape ) * dim );	\
			data = malloc( sizeof( *data ) * len );	\
			memcpy( data, (*T).data, sizeof( *data )\
				**((*T).stride + (*T).dim));	\
			free ( (*T).data );			\
			free( (*T).stride );			\
			(*T).stride=				\
			malloc(sizeof( *(*T).stride )*(1+dim));	\
			(*T).data = data;			\
		}						\
		(*T).dim = dim;					\
		memcpy((*T).shape, shape, sizeof(*shape)* dim );\
		*((*T).stride + (*T).dim ) = len;		\
		memset( (*T).stride, 0, sizeof( *(*T).stride ) *\
			( 1 + (*T).dim ) );			\
		*((*T).stride + (*T).dim) = len;		\
		if ( len ){					\
			for ( i = 0; i < dim; i++ ){		\
				len /= *( (*T).shape + i );	\
				*( (*T).stride + i ) = len;	\
			}					\
		}						\
		return *T;					\
	}

___Tensor_resize(bool);

___Tensor_resize(i8);
___Tensor_resize(i16);
___Tensor_resize(i32);
___Tensor_resize(i64);
___Tensor_resize(i128);

___Tensor_resize(u8);
___Tensor_resize(u16);
___Tensor_resize(u32);
___Tensor_resize(u64);
___Tensor_resize(u128);

___Tensor_resize(f16);
___Tensor_resize(f32);
___Tensor_resize(f64);
___Tensor_resize(f80);
___Tensor_resize(f128);

___Tensor_resize(cf16);
___Tensor_resize(cf32);
___Tensor_resize(cf64);
___Tensor_resize(cf80);
___Tensor_resize(cf128);

