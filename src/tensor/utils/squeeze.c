
#include "../../../include/tensor/utils/_utils.h"
#include <stdarg.h>

#define ___Tensor_squeeze(Type) \
	Tensor(Type)\
	_Tensor_squeeze(Type) (Tensor(Type) T, size_t dim, ...){	\
		va_list list;						\
		register Tensor(Type) ret = {				\
			.dim = 0,					\
			.shape = NULL,					\
			.stride = NULL,					\
			.grad = NULL,					\
			.require_grad = false,				\
			.data = NULL };					\
		register size_t len;					\
		register size_t *dims = NULL;				\
		register size_t ndim;					\
		register size_t i, ii, iii;				\
		if ( dim ){						\
			dims = malloc( sizeof(*dims) *dim );		\
			va_start(list, dim);				\
			for ( i = 0; i < dim; i++ ){			\
				*( dims + i ) = va_arg(list, size_t);	\
			}						\
			va_end(list);					\
			qsort( dims, dim, sizeof( *dims ), _cmp );	\
			ndim = T.dim;					\
			for( i = 0; i < dim &&				\
				*( dims + i ) < T.dim; i++ ){		\
				ndim -= !(*( T.shape +*( dims + i ))-1);\
			}						\
			ret.shape = malloc( sizeof(*ret.shape) * ndim );\
			for ( i = 0, ii = 0, iii = 0; i < T.dim; i++ ){	\
				if ( i == *( dims + ii ) &&		\
					!(*(T.shape + i ) - 1 )){	\
					ii++;				\
					continue;			\
				}					\
				*(ret.shape + iii) = *(T.shape + i);	\
				iii++;					\
			}						\
			free( dims );					\
		}else{							\
			ndim = 0;					\
			for ( i = 0; i < T.dim; i++ ){			\
				ndim += !( *(T.shape + i) - 1 );	\
			}						\
			ret.shape = malloc( sizeof(*ret.shape) * ndim );\
			for ( i = 0, ii = 0; i < T.dim; i++ ){		\
				if( *(T.shape + i ) - 1 ){		\
					*( ret.shape + ii ) =		\
					*( T.shape + i );		\
					ii++;				\
				}					\
			}						\
		}							\
		ret.dim = ndim;						\
		ret.stride = malloc( sizeof( *ret.stride ) *		\
				( 1 + ret.dim ) );			\
		*( ret.stride + ret.dim ) = len =			\
		*( T.stride + T.dim );					\
		if( len ){						\
			for ( i = 0; i < ret.dim; i++ ){		\
				len /= *( ret.shape + i ); 		\
				*( ret.stride + i ) = len;		\
			}						\
		}							\
		ret.data = malloc( sizeof( *ret.data ) *		\
			*( ret.stride + ret.dim ) );			\
		memcpy( ret.data, T.data, sizeof( *ret.data ) *		\
			*( ret.stride + ret.dim ) );			\
		return ret;						\
	}

#define ___Tensor_squeeze_(Type) \
	Tensor(Type)\
	_Tensor_squeeze_(Type) (Tensor(Type) *T, size_t dim, ...){	\
		va_list list;						\
		register size_t ndim;					\
		register char *shape;					\
		register size_t i, ii, iii;				\
		if( !T ){ return *T; }					\
		shape = malloc( sizeof( *shape ) * (*T).dim );		\
		memset(shape, 0, sizeof(*shape) * (*T).dim );		\
		ndim = (*T).dim;					\
		if( dim ){						\
			va_start(list, dim);				\
			for( i = 0; i < dim; i++ ){			\
				ii = va_arg(list, size_t);		\
				if( ii >= (*T).dim ){			\
					free(shape);			\
					return *T;			\
				}					\
				if( !( *((*T).shape + ii) - 1 ) ){	\
					*(shape + ii) = 1;		\
					ndim--;				\
				}					\
			}						\
			for( i = 0, ii = 0; i < (*T).dim; i++ ){	\
				if( *(shape + i) ){			\
					continue;			\
				}					\
				*((*T).shape + ii) = *((*T).shape + i);	\
				ii++;					\
			}						\
			va_end(list);					\
		}else{							\
			ndim = 0;					\
			for( i = 0, ii = 0; i < (*T).dim; i++ ){	\
				if( !(*((*T).shape + i) - 1 ) ){	\
					continue;			\
				}					\
				*((*T).shape + ii) = *((*T).shape + i );\
				ii++;					\
				ndim++;					\
			}						\
		}							\
		free(shape);						\
		iii = *((*T).stride + (*T).dim);			\
		memset((*T).stride, 0, sizeof( (*T).stride ) *		\
			( (*T).dim + 1 ) );				\
		*((*T).stride + ndim ) = iii;				\
		(*T).dim = ndim;					\
		if(iii){						\
			for(i = 0; i < (*T).dim; i++ ){			\
				iii /= *((*T).shape + i );		\
				*((*T).stride + i ) = iii;		\
			}						\
		}							\
		return *T;						\
	}

int _cmp(const void *a, const void *b){
	return (*(size_t *)a > *(size_t *)b) - (*(size_t *)a < *(size_t *)b);
}

___Tensor_squeeze(bool);

___Tensor_squeeze(i8);
___Tensor_squeeze(i16);
___Tensor_squeeze(i32);
___Tensor_squeeze(i64);
___Tensor_squeeze(i128);

___Tensor_squeeze(u8);
___Tensor_squeeze(u16);
___Tensor_squeeze(u32);
___Tensor_squeeze(u64);
___Tensor_squeeze(u128);

___Tensor_squeeze(f16);
___Tensor_squeeze(f32);
___Tensor_squeeze(f64);
___Tensor_squeeze(f80);
___Tensor_squeeze(f128);

___Tensor_squeeze(cf16);
___Tensor_squeeze(cf32);
___Tensor_squeeze(cf64);
___Tensor_squeeze(cf80);
___Tensor_squeeze(cf128);

___Tensor_squeeze_(bool);

___Tensor_squeeze_(i8);
___Tensor_squeeze_(i16);
___Tensor_squeeze_(i32);
___Tensor_squeeze_(i64);
___Tensor_squeeze_(i128);

___Tensor_squeeze_(u8);
___Tensor_squeeze_(u16);
___Tensor_squeeze_(u32);
___Tensor_squeeze_(u64);
___Tensor_squeeze_(u128);

___Tensor_squeeze_(f16);
___Tensor_squeeze_(f32);
___Tensor_squeeze_(f64);
___Tensor_squeeze_(f80);
___Tensor_squeeze_(f128);

___Tensor_squeeze_(cf16);
___Tensor_squeeze_(cf32);
___Tensor_squeeze_(cf64);
___Tensor_squeeze_(cf80);
___Tensor_squeeze_(cf128);

