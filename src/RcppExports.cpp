// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// const_cost
double const_cost(NumericVector y, NumericVector w, const int min_seg, const int i, const int j);
RcppExport SEXP _RcppDynProg_const_cost(SEXP ySEXP, SEXP wSEXP, SEXP min_segSEXP, SEXP iSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< const int >::type min_seg(min_segSEXP);
    Rcpp::traits::input_parameter< const int >::type i(iSEXP);
    Rcpp::traits::input_parameter< const int >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(const_cost(y, w, min_seg, i, j));
    return rcpp_result_gen;
END_RCPP
}
// const_costs
NumericMatrix const_costs(NumericVector y, NumericVector w, const int min_seg, IntegerVector indices);
RcppExport SEXP _RcppDynProg_const_costs(SEXP ySEXP, SEXP wSEXP, SEXP min_segSEXP, SEXP indicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< const int >::type min_seg(min_segSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type indices(indicesSEXP);
    rcpp_result_gen = Rcpp::wrap(const_costs(y, w, min_seg, indices));
    return rcpp_result_gen;
END_RCPP
}
// solve_dynamic_program
IntegerVector solve_dynamic_program(NumericMatrix x, int kmax);
RcppExport SEXP _RcppDynProg_solve_dynamic_program(SEXP xSEXP, SEXP kmaxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type kmax(kmaxSEXP);
    rcpp_result_gen = Rcpp::wrap(solve_dynamic_program(x, kmax));
    return rcpp_result_gen;
END_RCPP
}
// lin_cost
double lin_cost(NumericVector x, NumericVector y, NumericVector w, const int min_seg, const int i, const int j);
RcppExport SEXP _RcppDynProg_lin_cost(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP min_segSEXP, SEXP iSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< const int >::type min_seg(min_segSEXP);
    Rcpp::traits::input_parameter< const int >::type i(iSEXP);
    Rcpp::traits::input_parameter< const int >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(lin_cost(x, y, w, min_seg, i, j));
    return rcpp_result_gen;
END_RCPP
}
// lin_costs
NumericMatrix lin_costs(NumericVector x, NumericVector y, NumericVector w, const int min_seg, IntegerVector indices);
RcppExport SEXP _RcppDynProg_lin_costs(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP min_segSEXP, SEXP indicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< const int >::type min_seg(min_segSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type indices(indicesSEXP);
    rcpp_result_gen = Rcpp::wrap(lin_costs(x, y, w, min_seg, indices));
    return rcpp_result_gen;
END_RCPP
}
// xlin_fits
NumericVector xlin_fits(NumericVector x, NumericVector y, NumericVector w, const int i, const int j);
RcppExport SEXP _RcppDynProg_xlin_fits(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP iSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< const int >::type i(iSEXP);
    Rcpp::traits::input_parameter< const int >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(xlin_fits(x, y, w, i, j));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppDynProg_const_cost", (DL_FUNC) &_RcppDynProg_const_cost, 5},
    {"_RcppDynProg_const_costs", (DL_FUNC) &_RcppDynProg_const_costs, 4},
    {"_RcppDynProg_solve_dynamic_program", (DL_FUNC) &_RcppDynProg_solve_dynamic_program, 2},
    {"_RcppDynProg_lin_cost", (DL_FUNC) &_RcppDynProg_lin_cost, 6},
    {"_RcppDynProg_lin_costs", (DL_FUNC) &_RcppDynProg_lin_costs, 5},
    {"_RcppDynProg_xlin_fits", (DL_FUNC) &_RcppDynProg_xlin_fits, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppDynProg(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
