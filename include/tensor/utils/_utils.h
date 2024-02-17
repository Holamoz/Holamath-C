
#ifndef __TENSOR_UTILS_H__
#define __TENSOR_UTILS_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "dim.h"

#define _Tensor_dense_dim(Type) _Tensor_dense_dim_##Type
#define _Tensor_sparse_dim(Type) _Tensor_sparse_dim_##Type

#define _Tensor_tensor(Type) _Tensor_tensor_##Type
#define _Tensor_full(Type) _Tensor_full_##Type
#define _Tensor_empty(Type) _Tensor_empty_##Type
#define _Tensor_zeros(Type) _Tensor_zeros_##Type
#define _Tensor_ones(Type) _Tensor_ones_##Type

#define _Tensor_new_tensor(Type) _Tensor_new_tensor_##Type
#define _Tensor_new_full(Type) _Tensor_new_full_##Type
#define _Tensor_new_empty(Type) _Tensor_new_empty_##Type
#define _Tensor_new_ones(Type) _Tensor_new_ones_##Type
#define _Tensor_new_zeros(Type) _Tensor_new_zeros_##Type

#include "transtype.h"
	/*
	 * Tensor_to(T, Type)
	 */

#define _Tensor_to_dense(Type) _Tensor_to_dense_##Type
#define _Tensor_to_sparse(Type) _Tensor_to_sparse_##Type
#define _Tensor_to_sparse_csr(Type) _Tensor_to_sparse_csr_##Type
#define _Tensor_to_sparse_csc(Type) _Tensor_to_sparse_csc_##Type
#define _Tensor_to_sparse_bsr(Type) _Tensor_to_sparse_bsr_##Type
#define _Tensor_to_sparse_bsc(Type) _Tensor_to_sparse_bsc_##Type

#define _Tensor_free(Type) _Tensor_free_##Type

#define _Tensor_sparse_mask(Type) _Tensor_sparse_mask_##Type

#include "element_size.h"

#define _Tensor_view(Type) _Tensor_view_##Type
#define _Tensor_view_as(Type) _Tensor_view_as_##Type

#define _Tensor_permute(Type) _Tensor_permute_##Type

#define _Tensor_shape(Type) _Tensor_shape_##Type
#define _Tensor_size(Type) _Tensor_size_##Type
#define _Tensor_stride(Type) _Tensor_stride_##Type

#define _Tensor_values(Type) _Tensor_values_##Type

#define _Tensor_reshape(Type) _Tensor_reshape_##Type
#define _Tensor_reshape_as(Type) _Tensor_reshape_as_##Type

#define _Tensor_resize_(Type) _Tensor_resize_##Type##_
#define _Tensor_resize_as_(Type) _Tensor_resize_as_##Type##_

#define _Tensor_squeeze(Type) _Tensor_squeeze_##Type
#define _Tensor_squeeze_(Type) _Tensor_squeeze_##Type##_

#define _Tensor_unsqueeze(Type) _Tensor_unsqueeze_##Type
#define _Tensor_unsqueeze_(Type) _Tensor_unsqueeze_##Type##_

#include "zeros_.h"
#include "random_.h"
#define _Tensor_clone(Type) _Tensor_clone_##Type
#define _Tensor_copy_(Type) _Tensor_copy_##Type##_

#define _Tensor_contiguous(Type) _Tensor_contiguous_##Type
#define _Tensor_quantile(Type) _Tensor_quantile_##Type
#define _Tensor_nanquantile(Type) _Tensor_nanquantile_##Type

#define _Tensor_pin_memory(Type) _Tensor_pin_memory_##Type
#define _Tensor_share_memory_(Type) _Tensor_share_memory_##Type##_

#define _Tensor_q_scale(Type) _Tensor_q_scale_##Type
#define _Tensor_q_zero_point(Type) _Tensor_q_zero_point_##Type

#define _Tensor_q_per_channel_scales(Type) _Tensor_q_per_channel_scales_##Type
#define _Tensor_q_per_channel_axis(Type) _Tensor_q_per_channel_axis_##Type

#define _Tensor_index_copy(Type) _Tensor_index_copy_##Type
#define _Tensor_index_copy_(Type) _Tensor_index_copy_##Type##_

#define _Tensor_where(Type) _Tensor_where_##Type
#define _Tensor_indices(Type) _Tensor_indices_##Type

#define _Tensor_nonzero(Type) _Tensor_nonzero_##Type

#define _Tensor_is_quantized(Type) _Tensor_is_quantized_##Type
#define _Tensor_is_conj(Type) _Tensor_is_conj_##Type
#define _Tensor_is_sparse(Type) _Tensor_is_sparse_##Type
#define _Tensor_is_contiguous(Type) _Tensor_is_contiguous_##Type

#define _Tensor_isclose(Type) _Tensor_isclose_##Type
#define _Tensor_isfinite(Type) _Tensor_isfinite_##Type
#define _Tensor_isinf(Type) _Tensor_isinf_##Type
#define _Tensor_isposinf(Type) _Tensor_isposinf_##Type
#define _Tensor_isneginf(Type) _Tensor_isneginf_##Type
#define _Tensor_isnan(Type) _Tensor_isnan_##Type

#define _Tensor_is_complex(Type) _Tensor_is_complex_##Type
#define _Tensor_is_floating_point(Type) _Tensor_is_float_##Type
#define _Tensor_is_signed(Type) _Tensor_is_signed_##Type
#define _Tensor_isreal(Type) _Tensor_isreal_##Type

#define _Tensor_is_inference(Type) _Tensor_is_inference_##Type

#define _Tensor_is_pinned(Type) _Tensor_is_pinned_##Type
#define _Tensor_is_shared(Type) _Tensor_is_shared_##Type

#define _Tensor_is_set_to(Type) _Tensor_is_set_to_##Type
/* #define _Tensor_is_set_to(T1, T2) ( ( void* )( T1.T ) == ( void* )( T2.T ) ) */

#define _Tensor_sort(Type) _Tensor_sort_##Type
#define _Tensor_msort(Type) _Tensor_msort_##Type

/* function names end with "_" are in-place version */
#define _Tensor_abs(Type) _Tensor_abs_##Type
#define _Tensor_abs_(Type) _Tensor_abs_##Type##_

#define _Tensor_neg(Type) _Tensor_neg_##Type
#define _Tensor_neg_(Type) _Tensor_neg_##Type##_

#define _Tensor_nan_to_num(Type) _Tensor_nan_to_num_##Type

#define _Tensor_sign(Type) _Tensor_sign_##Type
#define _Tensor_sign_(Type) _Tensor_sign_##Type##_

#define _Tensor_signbit(Type) _Tensor_signbit_##Type##_

#define _Tensor_sgn(Type) _Tensor_sgn_##Type
#define _Tensor_sgn_(Type) _Tensor_sgn_##Type##_

/* p-norm */
#define _Tensor_dist(Type) _Tensor_dist_##Type
#define _Tensor_vector_norm(Type) _Tensor_norm_##Type
#define _Tensor_matrix_norm(Type) _Tensor_norm_##Type

#define _Tensor_renorm(Type) _Tensor_renorm_##Type
#define _Tensor_renorm_(Type) _Tensor_renorm_##Type##_

#define _Tensor_det(Type) _Tensor_det_##Type
#define _Tensor_logdet(Type) _Tensor_logdet_##Type

#define _Tensor_trace(Type) _Tensor_trace_##Type

#define _Tensor_rad2deg(Type) _Tensor_rad2deg_##Type

#define _Tensor_int_repr(Type) _Tensor_int_repr_##Type

#define _Tensor_scatter(Type) _Tensor_scatter_##Type
#define _Tensor_scatter_(Type) _Tensor_scatter_##Type##_

#define _Tensor_scatter_add(Type) _Tensor_scatter_add_##Type
#define _Tensor_scatter_add_(Type) _Tensor_scatter_add_##Type##_

#define _Tensor_scatter_reduce(Type) _Tensor_scatter_reduce_##Type
#define _Tensor_scatter_reduce_(Type) _Tensor_scatter_reduce_##Type##_

#define _Tensor_masked_scatter(Type) _Tensor_masked_scatter_##Type
#define _Tensor_masked_scatter_(Type) _Tensor_masked_scatter_##Type##_

#define _Tensor_select_scatter(Type) _Tensor_select_scatter_##Type

#define _Tensor_select(Type) _Tensor_select_##Type

#define _Tensor_index_select(Type) _Tensor_index_select_##Type
#define _Tensor_masked_select(Type) _Tensor_masked_select_##Type

#define _Tensor_masked_fill(Type) _Tensor_masked_fill_##Type

#define _Tensor_fill_(Type) _Tensor_fill_##Type##_
#define _Tensor_masked_fill_(Type) _Tensor_masked_fill_##Type##_

#define _Tensor_index_fill(Type) _Tensor_index_fill_##Type
#define _Tensor_index_fill_(Type) _Tensor_index_fill_##Type##_

#define _Tensor_diag(Type) _Tensor_diag_##Type
#define _Tensor_diag_embed(Type) _Tensor_diag_embed_##Type
#define _Tensor_diagflat(Type) _Tensor_diagflat_##Type
#define _Tensor_diagonal_scatter(Type) _Tensor_diagonal_scatter_##Type
#define _Tensor_fill_diagonal_(Type) _Tensor_fill_diagonal_##Type##_

#define _Tensor_put_(Type) _Tensor_put_##Type##_
#define _Tensor_set_(Type) _Tensor_set_##Type##_

#define _Tensor_index_put(Type) _Tensor_index_put_##Type
#define _Tensor_index_put_(Type) _Tensor_index_put_##Type##_

#define _Tensor_index_reduce(Type) _Tensor_index_reduce_##Type
#define _Tensor_index_reduce_(Type) _Tensor_index_reduce_##Type##_

#define _Tensor_diagonal(Type) _Tensor_diagonal_##Type
#define _Tensor_exponential_(Type) _Tensor_exponential_##Type

#define _Tensor_float_power(Type) _Tensor_float_power_##Type
#define _Tensor_float_power_(Type) _Tensor_float_power_##Type##_
#define _Tensor_pow(Type) _Tensor_pow_##Type
#define _Tensor_matrix_power(Type) _Tensor_matrix_power_##Type
#define _Tensor_matrix_exp(Type) _Tensor_matrix_exp_##Type

#define _Tensor_real(Type) _Tensor_real_##Type
#define _Tensor_imag(Type) _Tensor_imag_##Type

#define _Tensor_frac(Type) _Tensor_frac_##Type
#define _Tensor_frac_(Type) _Tensor_frac_##Type##_

#define _Tensor_fix(Type) _Tensor_fix_##Type
#define _Tensor_fix_(Type) _Tensor_fix_##Type##_

#define _Tensor_round(Type) _Tensor_round_##Type
#define _Tensor_round_(Type) _Tensor_round_##Type##_

#define _Tensor_floor(Type) _Tensor_floor_##Type
#define _Tensor_floor_(Type) _Tensor_floor_##Type##_

#define _Tensor_ceil(Type) _Tensor_ceil_##Type
#define _Tensor_ceil_(Type) _Tensor_ceil_##Type##_

#define _Tensor_bincount(Type) _Tensor_bincount_##Type
#define _Tensor_count_nonzero(Type) _Tensor_count_nonzero_##Type

#define _Tensor_mode(Type) _Tensor_mode_##Type

#define _Tensor_unique(Type) _Tensor_unique_##Type
#define _Tensor_unique_consecutive(Type) _Tensor_unique_consecutive_##Type

#define _Tensor_cummax(Type) _Tensor_cummax_##Type
#define _Tensor_cummin(Type) _Tensor_cummin_##Type

#define _Tensor_eq(Type) _Tensor_eq_##Type
#define _Tensor_eq_(Type) _Tensor_eq_##Type##_

#define _Tensor_gt(Type) _Tensor_gt_##Type
#define _Tensor_gt_(Type) _Tensor_gt_##Type##_

#define _Tensor_lt(Type) _Tensor_lt_##Type
#define _Tensor_lt_(Type) _Tensor_lt_##Type##_

#define _Tensor_ne(Type) _Tensor_ne_##Type
#define _Tensor_ne_(Type) _Tensor_ne_##Type##_

#define _Tensor_ge(Type) _Tensor_ge_##Type
#define _Tensor_ge_(Type) _Tensor_ge_##Type##_

#define _Tensor_le(Type) _Tensor_le_##Type
#define _Tensor_le_(Type) _Tensor_le_##Type##_

#define _Tensor_equal(Type) _Tensor_equal_##Type

#define _Tensor_kthvalue(Type) _Tensor_kthvalue_##Type
#define _Tensor_topk(Type) _Tensor_topk_##Type

#define _Tensor_sum(Type) _Tensor_sum_##Type
#define _Tensor_nansum(Type) _Tensor_sum_##Type

#define _Tensor_sum_to_size(Type) _Tensor_sum_to_size_##Type

#define _Tensor_max(Type) _Tensor_max_##Type
#define _Tensor_min(Type) _Tensor_min_##Type

#define _Tensor_mean(Type) _Tensor_mean_##Type

#define _Tensor_std(Type) _Tebsor_std_##Type
#define _Tensor_var(Type) _Tensor_var_##Type

#define _Tensor_median(Type) _Tensor_median_##Type
#define _Tensor_nanmean(Type) _Tensor_nanmean_##Type
#define _Tensor_nanmedian(Type) _Tensor_nanmedian_##Type

#define _Tensor_amax(Type) _Tensor_amax_##Type
#define _Tensor_amin(Type) _Tensor_amin_##Type
#define _Tensor_aminmax(Type) _Tensor_aminmax_##Type

#define _Tensor_fmax(Type) _Tensor_fmax_##Type
#define _Tensor_fmin(Type) _Tensor_fmin_##Type

#define _Tensor_clamp(Type) _Tensor_clamp_##Type
#define _Tensor_clamp_(Type) _Tensor_clamp_##Type##_

#define _Tensor_clip(Type) _Tensor_clamp(Type)
#define _Tensor_clip_(Type) _Tensor_clamp_(Type)

/* dimensional logical and */
#define _Tensor_all(Type) _Tensor_all_##Type
/* dimensional logical or */
#define _Tensor_any(Type) _Tensor_any_##Type

#define _Tensor_diff(Type) _Tensor_diff_##Type

#define _Tensor_hardshrink(Type) _Tensor_hardshrink_##Type
#define _Tensor_heaviside(Type) _Tensor_heaviside_##Type

#define _Tensor_cumprod(Type) _Tensor_cumprod_##Type
#define _Tensor_cumprod_(Type) _Tensor_cumprod_##Type##_

#define _Tensor_nextafter(Type) _Tensor_nextafter_##Type
#define _Tensor_nextafter_(Type) _Tensor_nextafter_##Type##_

#define _Tensor_cumsum(Type) _Tensor_cumsum_##Type
#define _Tensor_cumsum_(Type) _Tensor_cumsum_##Type##_

#define _Tensor_logcumsumexp(Type) _Tensor_logcumsumexp_##Type
#define _Tensor_logsumexp(Type) _Tensor_logsumexp_##Type

#define _Tensor_bitwise_not(Type) _Tensor_bitwise_not_##Type
#define _Tensor_bitwise_not_(Type) _Tensor_bitwise_not_##Type##_

#define _Tensor_bitwise_and(Type) _Tensor_bitwise_and_##Type
#define _Tensor_bitwise_and_(Type) _Tensor_bitwise_and_##Type##_

#define _Tensor_bitwise_or(Type) _Tensor_bitwise_or_##Type
#define _Tensor_bitwise_or_(Type) _Tensor_bitwise_or_##Type##_

#define _Tensor_bitwise_xor(Type) _Tensor_bitwise_xor_##Type
#define _Tensor_bitwise_xor_(Type) _Tensor_bitwise_xor_##Type##_

#define _Tensor_bitwise_left_shift(Type) _Tensor_bitwise_left_shift_##Type
#define _Tensor_bitwise_left_shift_(Type) _Tensor_bitwise_left_shift_##Type##_

#define _Tensor_bitwise_right_shift(Type) _Tensor_bitwise_right_shift_##Type
#define _Tensor_bitwise_right_shift_(Type) _Tensor_bitwise_right_shift_##Type##_

#define _Tensor_logical_not(Type) _Tensor_logical_not_##Type
#define _Tensor_logical_not_(Type) _Tensor_logical_not_##Type##_

#define _Tensor_logical_and(Type) _Tensor_logical_and_##Type
#define _Tensor_logical_and_(Type) _Tensor_logical_and_##Type##_

#define _Tensor_logical_or(Type) _Tensor_logical_or_##Type
#define _Tensor_logical_or_(Type) _Tensor_logical_or_##Type##_

#define _Tensor_logical_xor(Type) _Tensor_logical_xor_##Type
#define _Tensor_logical_xor_(Type) _Tensor_logical_xor_##Type##_

#define _Tensor_movedim(Type) _Tensor_movedim_##Type
#define _Tensor_moveaxis(Type) _Tensor_modedim(Type)

#define _Tensor_swapdims(Type) _Tensor_swapdims_##Type
#define _Tensor_swapaxes(Type) _Tensor_swapaxes_##Type

#define _Tensor_cholesky(Type) _Tensor_cholesky_##Type
#define _Tensor_cholesky_inverse(Type) _Tensor_cholesky_inverse_##Type
#define _Tensor_cholesky_solve(Type) _Tensor_cholesky_solve_##Type

#define _Tensor_broadcast_to(Type) _Tensor_broadcast_to_##Type

#define _Tensor_take(Type) _Tensor_take_##Type
#define _Tensor_take_along_dim(Type) _Tensor_take_along_dim_##Type

#define _Tensor_chunk(Type) _Tensor_chunk_##Type
#define _Tensor_split(Type) _Tensor_split_##Type
#define _Tensor_dsplit(Type) _Tensor_dsplit_##Type
#define _Tensor_hsplit(Type) _Tensor_hsplit_##Type
#define _Tensor_vsplit(Type) _Tensor_vsplit_##Type

#define _Tensor_tensor_split(Type) _Tensor_tensor_split_##Type

#define _Tensor_unbind(Type) _Tensor_unbind_##Type

#define _Tensor_expand(Type) _Tensor_expand_##Type
#define _Tensor_expand_as(Type) _Tensor_expand_as_##Type

#define _Tensor_flatten(Type) _Tensor_flatten_##Type
#define _Tensor_unflatten(Type) _Tensor_unflatten_##Type
#define _Tensor_unfold(Type) _Tensor_unfold_##Type

#define _Tensor_ravel(Type) _Tensor_ravel_##Type

#define _Tensor_repeat(Type) _Tensor_repeat_##Type
#define _Tensor_repeat_interleave(Type) _Tensor_repeat_interleave_##Type

#define _Tensor_tile(Type) _Tensor_tile_##Type

#define _Tensor_conj(Type) _Tensor_conj_##Type
#define _Tensor_conj_physical(Type) _Tensor_conj_physical_##Type
#define _Tensor_conj_physical_(Type) _Tensor_conj_physical_##Type##_
#define _Tensor_resolve_conj(Type) _Tensor_resolve_conj_##Type

#define _Tensor_narrow(Type) _Tensor_narrow_##Type
#define _Tensor_narrow_copy(Type) _Tensor_narrow_copy_##Type

#define _Tensor_resolve_neg(Type) _Tensor_resolve_neg_##Type

#define _Tensor_copysign(Type) _Tensor_copysign_##Type
#define _Tensor_copysign_(Type) _Tensor_copysign_##Type

#define _Tensor_corrcoef(Type) _Tensor_corrcoef_##Type
#define _Tensor_cov(Type) _Tensor_cov_##Type

#define _Tensor_roll(Type) _Tensor_roll_##Type
#define _Tensor_rot90(Type) _Tensor_rot90_##Type

#define _Tensor_t(Type) _Tensor_t_##Type
#define _Tensor_t_(Type) _Tensor_t_##Type##_

#define _Tensor_transpose(Type) _Tensor_t_##Type
#define _Tensor_transpose_(Type) _Tensor_t_##Type##_

#define _Tensor_flip(Type) _Tensor_flip_##Type
#define _Tensor_fliplr(Type) _Tensor_fliplr_##Type
#define _Tensor_flipud(Type) _Tensor_flipud_##Type

#define _Tensor_gather(Type) _Tensor_gather_##Type

#define _Tensor_gcd(Type) _Tensor_gcd_##Type
#define _Tensor_gcd_(Type) _Tensor_gcd_##Type##_

#define _Tensor_lcm(Type) _Tensor_lcm_##Type
#define _Tensor_lcm_(Type) _Tensor_lcm_##Type##_

#define _Tensor_hypot(Type) _Tensor_hypot_##Type
#define _Tensor_hypot_(Type) _Tensor_hypot_##Type##_

#define _Tensor_i0(Type) _Tensor_i0_##Type
#define _Tensor_i0_(Type) _Tensor_i0_##Type##_

#define _Tensor_apply_(Type) _Tensor_apply_##Type##_
#define _Tensor_map_(Type) _Tensor_map_##Type##_

#define _Tensor_bernoulli(Type) _Tensor_bernoulli_##Type
#define _Tensor_bernoulli_(Type) _Tensor_bernoulli_##Type##_

#define _Tensor_normal_(Type) _Tensor_normal_##Type##_
#define _Tensor_uniform_(Type) _Tensor_uniform_##Type##_

#define _Tensor_grad(Type) _Tensor_grad_##Type

#define _Tensor_retain_grad(Type) _Tensor_retain_grad_##Type

#define _Tensor_is_leaf(Type) _Tensor_is_leaf_##Type

#define _Tensor_backward(Type) _Tensor_backward_##Type

#define _Tensor_register_hook(Type) _Tensor_register_hook_##Type

#define _Tensor_register_post_accumulat_grad_hook(Type) _Tensor_register_post_accumulat_grad_hook_##Type

#define _Tensor_record_stream(Type) _Tensor_record_stream_##Type

#define _Tensor_detach(Type) _Tensor_detach_##Type
#define _Tensor_detach_(Type) _Tensor_detach_##Type##_

#ifdef __cplusplus
}
#endif

#endif
