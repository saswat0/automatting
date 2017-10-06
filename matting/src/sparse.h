// int spmv_forward(
//   THLongTensor *mtx_indices, THFloatTensor *mtx_values, 
//   THFloatTensor *vector, THFloatTensor *output, const int rows, const int cols);

// int sample_weighting_backward(
//     THFloatTensor *grad_output,
//     THFloatTensor *grad_samples,
//     THFloatTensor *grad_params,
//     THFloatTensor *grad_weights);

// int spdiag_mm_forward(
//   THFloatTensor *diagonal,
//   THLongTensor *mtx_indices, THFloatTensor *mtx_values, 
//   THFloatTensor *output, const int rows, const int cols);

int coo2csr(THCudaIntTensor *row_idx, 
            THCudaIntTensor *col_idx,
            THCudaTensor *val,
            THCudaIntTensor *csr_row_idx,
            const int rows, const int cols);

int spadd_forward(
    THCudaIntTensor *A_csr_row, THCudaIntTensor *A_csr_col, THCudaTensor *A_val,
    THCudaIntTensor *B_csr_row, THCudaIntTensor *B_csr_col, THCudaTensor *B_val,
    THCudaIntTensor *C_csr_row, THCudaIntTensor *C_csr_col, THCudaTensor *C_val,
    const int rows, const int cols);

int spmv_forward(
    THCudaIntTensor *csr_row, THCudaIntTensor *csr_col, THCudaTensor *val,
    THCudaTensor *vector,
    THCudaTensor *output,
    const int rows, const int cols);
