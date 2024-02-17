
#ifndef __TENSOR_FUNC_H__
#define __TENSOR_FUNC_H__

#ifdef __cplusplus
extern "C" {
#endif

#define _Tensor_add(Type) _Tensor_add_##Type
#define _Tensor_add_(Type) _Tensor_add_##Type##_

#define _Tensor_sub(Type) _Tensor_sub_##Type
#define _Tensor_sub_(Type) _Tensor_sub_##Type##_

#define _Tensor_mul(Type) _Tensor_mul_##Type
#define _Tensor_mul_(Type) _Tensor_mul_##Type##_

#define _Tensor_multinomial(Type) _Tensor_multinomial_##Type

#define _Tensor_mv(Type) _Tensor_mv_##Type

#define _Tensor_div(Type) _Tensor_div_##Type
#define _Tensor_div_(Type) _Tensor_div_##Type##_

#define _Tensor_reciprocal(Type) _Tensor_reciprocal_##Type
#define _Tensor_reciprocal_(Type) _Tensor_reciprocal_##Type##_

#define _Tensor_true_divide(Type) _Tensor_true_divide_##Type
#define _Tensor_true_divide_(Type) _Tensor_true_divide_##Type##_

#define _Tensor_floor_divide(Type) _Tensor_floor_divide_##Type
#define _Tensor_floor_divide_(Type) _Tensor_floor_divide_##Type##_

#define _Tensor_trunc(Type) _Tensor_trunc_##Type
#define _Tensor_trunc_(Type) _Tensor_trunc_##Type##_

#define _Tensor_remainder(Type) _Tensor_remainder_##Type
#define _Tensor_remainder_(Type) _Tensor_remainder_##Type##_

#define _Tensor_fmod(Type) _Tensor_fmod_##Type
#define _Tensor_fmod_(Type) _Tensor_fmod_##Type##_

#define _Tensor_outer(Type) _Tensor_outer_##Type
#define _Tensor_inner(Type) _Tensor_inner_##Type

#define _Tensor_index_add(Type) _Tensor_index_add_##Type
#define _Tensor_index_add_(Type) _Tensor_index_add_##Type##_

#define _Tensor_dot(Type) _Tensor_dot_##Type
#define _Tensor_vdot(Type) _Tensor_vdot_##Type

#define _Tensor_prod(Type) _Tensor_prod_##Type

#define _Tensor_mulltinomial(Type) _Tensor_multinomial_##Type

#define _Tensor_inverse(Type) _Tensor_inverse_##Type

#define _Tensor_cross(Type) _Tensor_cross_##Type
#define _Tensor_cross_(Type) _Tensor_cross_##Type##_

#define _Tensor_addbmm(Type) _Tensor_addbmm_##Type
#define _Tensor_addbmm_(Type) _Tensor_addbmm_##Type##_

#define _Tensor_addcdiv(Type) _Tensor_addcdiv_##Type
#define _Tensor_addcdiv_(Type) _Tensor_addcdiv_##Type##_

#define _Tensor_addcmul(Type) _Tensor_addcmul_##Type
#define _Tensor_addcmul_(Type) _Tensor_addcmul_##Type##_

#define _Tensor_addmm(Type) _Tensor_addmm_##Type
#define _Tensor_addmm_(Type) _Tensor_addmm_##Type##_

#define _Tensor_addmv(Type) _Tensor_addmv_##Type
#define _Tensor_addmv_(Type) _Tensor_addmv_##Type##_

#define _Tensor_sspaddmm(Type) _Tensor_sspaddmm_##Type

#define _Tensor_addr(Type) _Tensor_addr_##Type
#define _Tensor_addr_(Type) _Tensor_addr_##Type##_

#define _Tensor_matmul(Type) _Tensor_matmul_##Type
#define _Tensor_mm(Type) _Tensor_mm_##Type
#define _Tensor_smm(Type) _Tensor_smm_##Type

#define _Tensor_adjoint(Type) _Tensor_adjoint_##Type

#define _Tensor_allclose(Type) _Tensor_allclose_##Type

#define _Tensor_angle(Type) _Tensor_angle_##Type

#define _Tensor_argmax(Type) _Tensor_argmax_##Type
#define _Tensor_argmin(Type) _Tensor_argmin_##Type

#define _Tensor_sigmoid(Type) _Tensor_sigmoid_##Type
#define _Tensor_sigmoid_(Type) _Tensor_sigmoid_##Type##_

#define _Tensor_softmax(Type) _Tensor_softmax_##Type

#define _Tensor_argsort(Type) _Tensor_argsort_##Type

#define _Tensor_argwhere(Type) _Tensor_argwhere_##Type

#define _Tensor_istft(Tyoe) _Tensor_istft_##Type
#define _Tensor_stft(Type) _Tensor_stft_##Type

#define _Tensor_square(Type) _Tensor_square_##Type
#define _Tensor_square_(Type) _Tensor_square_##Type##_

#define _Tensor_sqrt(Type) _Tensor_sqrt_##Type
#define _Tensor_sqrt_(Type) _Tensor_sqrt_##Type##_

#define _Tensor_rsqrt(Type) _Tensor_rsqrt_##Type
#define _Tensor_rsqrt_(Type) _Tensor_rsqrt_##Type##_

#define _Tensor_exp(Type) _Tensor_exp_##Type
#define _Tensor_exp_(Type) _Tensor_exp_##Type##_

#define _Tensor_log(Type) _Tensor_log_##Type
#define _Tensor_log_(Type) _Tensor_log_##Type##_

/* log(x + 1) */
#define _Tensor_log1p(Type) _Tensor_log1p_##Type
#define _Tensor_log1p_(Type) _Tensor_log1p_##Type##_

#define _Tensor_logit(Type) _Tensor_logit_##Type
#define _Tensor_logit_(Type) _Tensor_logit_##Type##_

#define _Tensor_log2(Type) _Tensor_log2_##Type
#define _Tensor_log2_(Type) _Tensor_log2_##Type##_

#define _Tensor_log10(Type) _Tensor_log10_##Type
#define _Tensor_log10_(Type) _Tensor_log10_##Type##_

#define _Tensor_xlogy(Type) _Tensor_xlogy_##Type
#define _Tensor_xlogy_(Type) _Tensor_xlogy_##Type##_

#define _Tensor_ldexp(Type) _Tensor_ldexp_##Type
#define _Tensor_ldexp_(Type) _Tensor_ldexp_##Type##_

#define _Tensor_frexp(Type) _Tensor_frexp_##Type

#define _Tensor_lerp(Type) _Tensor_lerp_##Type
#define _Tensor_lerp_(Type) _Tensor_lerp_##Type##_

/* y_i = e^{x_i} - 1 */
#define _Tensor_expm1(Type) _Tensor_expm1_##Type
#define _Tensor_expm1_(Type) _Tensor_expm1_##Type##_

#define _Tensor_logaddexp(Type) _Tensor_logaddexp_##Type
#define _Tensor_logaddexp2(Type) _Tensor_logaddexp2_##Type

#define _Tensor_sin(Type) _Tensor_sin_##Type
#define _Tensor_sin_(Type) _Tensor_sin_##Type##_

#define _Tensor_cos(Type) _Tensor_cos_##Type
#define _Tensor_cos_(Type) _Tensor_cos_##Type##_

#define _Tensor_tan(Type) _Tensor_tan_##Type
#define _Tensor_tan_(Type) _Tensor_tan_##Type##_

#define _Tensor_sinh(Type) _Tensor_sinh_##Type
#define _Tensor_sinh_(Type) _Tensor_sinh_##Type##_

#define _Tensor_cosh(Type) _Tensor_cosh_##Type
#define _Tensor_cosh_(Type) _Tensor_cosh_##Type##_

#define _Tensor_tanh(Type) _Tensor_tanh_##Type
#define _Tensor_tanh_(Type) _Tensor_tanh_##Type##_

#define _Tensor_asin(Type) _Tensor_asin_##Type
#define _Tensor_asin_(Type) _Tensor_asin_##Type##_

#define _Tensor_arcsin(Type) _Tensor_asin(Type)
#define _Tensor_arcsin_(Type) _Tensor_asin_(Type)

#define _Tensor_acos(Type) _Tensor_acos_##Type
#define _Tensor_acos_(Type) _Tensor_acos_##Type##_

#define _Tensor_arccos(Type) _Tensor_acos(Type)
#define _Tensor_arccos_(Type) _Tensor_acos_(Type)

#define _Tensor_atan(Type) _Tensor_atan_##Type
#define _Tensor_atan_(Type) _Tensor_atan_##Type##_

#define _Tensor_arctan(Type) _Tensor_atan(Type)
#define _Tensor_arctan_(Type) _Tensor_atan_(Type)

#define _Tensor_atan2(Type) _Tensor_atan2_##Type
#define _Tensor_atan2_(Type) _Tensor_atan2_##Type##_

#define _Tensor_arctan2(Type) _Tensor_atan2(Type)
#define _Tensor_arctan2_(Type) _Tensor_atan2_(Type)

#define _Tensor_asinh(Type) _Tensor_asinh_##Type
#define _Tensor_asinh_(Type) _Tensor_asinh_##Type##_

#define _Tensor_arcsinh(Type) _Tensor_asinh(Type)
#define _Tensor_arcsinh_(Type) _Tensor_asinh_(Type)

#define _Tensor_acosh(Type) _Tensor_acosh_##Type
#define _Tensor_acosh_(Type) _Tensor_acosh_##Type##_

#define _Tensor_arccosh(Type) _Tensor_acosh(Type)
#define _Tensor_arccosh_(Type) _Tensor_acosh_(Type)

#define _Tensor_atanh(Type) _Tensor_atanh_##Type
#define _Tensor_atanh_(Type) _Tensor_atanh_##Type##_

#define _Tensor_arctanh(Type) _Tensor_atanh(Type)
#define _Tensor_arctanh_(Type) _Tensor_atanh_(Type)

#define _Tesnor_sinc(Type) _Tensor_sinc_##Type
#define _Tesnor_sinc_(Type) _Tensor_sinc_##Type##_

#define _Tensor_digamma(Type) _Tensor_digamma_##Type
#define _Tensor_digamma(Type) _Tensor_digamma_##Type
#define _Tensor_digamma_(Type) _Tensor_digamma_##Type

#define _Tensor_erf(Type) _Tensor_erf_##Type
#define _Tensor_erf_(Type) _Tensor_erf_##Type##_

#define _Tensor_erfc(Type) _Tensor_erfc_##Type
#define _Tensor_erfc_(Type) _Tensor_erfc_##Type##_

#define _Tensor_erfinv(Type) _Tensor_erfinv_##Type
#define _Tensor_erfinv_(Type) _Tensor_erfinv_##Type##_

#define _Tensor_geometric_(Type) _Tensor_geometric_##Type##_

#define _Tensor_histc(Type) _Tensor_histc_##Type
#define _Tensor_histogram(Type) _Tensor_histogram_##Type

#define _Tensor_as_strided(Type) _Tensor_as_strided_##Type

#define _Tensor_bmm(Type) _Tensor_bmm_##Type

#define _Tensor_baddbmm(Type) _Tensor_baddbmm_##Type
#define _Tensor_baddbmm_(Type) _Tensor_baddbmm_##Type##_

#define _Tensor_log_normal_(Type) _Tensor_log_normal_##Type

#define _Tensor_cauchy_(Type) _Tensor_cauchy_##Type##_

#define _Tensor_multigammaln(Type) _Tensor_multigammaln_##Type
#define _Tensor_multigammaln_(Type) _Tensor_multigammaln_##Type##_

#define _Tensor_igamma(Type) _Tensor_igamma_##Type
#define _Tensor_igamma_(Type) _Tensor_igamma_##Type##_

#define _Tensor_igammac(Type) _Tensor_igammac_##Type
#define _Tensor_igammac_(Type) _Tensor_igammac_##Type##_

#define _Tensor_lgamma(Type) _Tensor_lgamma_##Type
#define _Tensor_lgamma_(Type) _Tensor_lgamma_##Type##_

#define _Tensor_mvlgamma(Type) _Tensor_mvlgamma_##Type
#define _Tensor_mvlgamma_(Type) _Tensor_mvlgamma_##Type##_

#define _Tensor_polygamma(Type) _Tensor_polygamma_##Type
#define _Tensor_polygamma_(Type) _Tensor_polygamma_##Type##_

#define _Tensor_geqrf(Type) _Tensor_geqrf_##Type
#define _Tensor_orgqr(Type) _Tensor_orgqr_##Type
#define _Tensor_ormqr(Type) _Tensor_ormqr_##Type

#define _Tensor_qr(Type) _Tensor_qr_##Type

#define _Tensor_lu(Type) _Tensor_lu_##Type
#define _Tensor_lu_solve(Type) _Tensor_lu_solve_##Type

#define _Tensor_tril(Type) _Tensor_tril_##Type
#define _Tensor_tril_(Type) _Tensor_tril_##Type##_

#define _Tensor_triu(Type) _Tensor_triu_##Type
#define _Tensor_triu_(Type) _Tensor_triu_##Type##_

#define _Tensor_triangular_solve(Type) _Tensor_triangular_solve_##Type

#define _Tensor_pinverse(Type) _Tensor_pinverse_##Type

#ifdef __cplusplus
}
#endif

#endif
