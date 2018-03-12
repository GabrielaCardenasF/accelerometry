// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// artifacts
IntegerVector artifacts(IntegerVector counts, int thresh);
RcppExport SEXP _accelerometry_artifacts(SEXP countsSEXP, SEXP threshSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< int >::type thresh(threshSEXP);
    rcpp_result_gen = Rcpp::wrap(artifacts(counts, thresh));
    return rcpp_result_gen;
END_RCPP
}
// blockaves_i
NumericVector blockaves_i(IntegerVector x, int window);
RcppExport SEXP _accelerometry_blockaves_i(SEXP xSEXP, SEXP windowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type window(windowSEXP);
    rcpp_result_gen = Rcpp::wrap(blockaves_i(x, window));
    return rcpp_result_gen;
END_RCPP
}
// blockaves_i_max
NumericVector blockaves_i_max(IntegerVector x, int window);
RcppExport SEXP _accelerometry_blockaves_i_max(SEXP xSEXP, SEXP windowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type window(windowSEXP);
    rcpp_result_gen = Rcpp::wrap(blockaves_i_max(x, window));
    return rcpp_result_gen;
END_RCPP
}
// blockaves_n
NumericVector blockaves_n(NumericVector x, int window);
RcppExport SEXP _accelerometry_blockaves_n(SEXP xSEXP, SEXP windowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type window(windowSEXP);
    rcpp_result_gen = Rcpp::wrap(blockaves_n(x, window));
    return rcpp_result_gen;
END_RCPP
}
// blockaves_n_max
NumericVector blockaves_n_max(NumericVector x, int window);
RcppExport SEXP _accelerometry_blockaves_n_max(SEXP xSEXP, SEXP windowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type window(windowSEXP);
    rcpp_result_gen = Rcpp::wrap(blockaves_n_max(x, window));
    return rcpp_result_gen;
END_RCPP
}
// bouts
IntegerVector bouts(IntegerVector counts, Rcpp::Nullable<Rcpp::IntegerVector> weartime, int bout_length, int thresh_lower, int thresh_upper, int tol, int tol_lower, int tol_upper, bool nci, bool days_distinct);
RcppExport SEXP _accelerometry_bouts(SEXP countsSEXP, SEXP weartimeSEXP, SEXP bout_lengthSEXP, SEXP thresh_lowerSEXP, SEXP thresh_upperSEXP, SEXP tolSEXP, SEXP tol_lowerSEXP, SEXP tol_upperSEXP, SEXP nciSEXP, SEXP days_distinctSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type weartime(weartimeSEXP);
    Rcpp::traits::input_parameter< int >::type bout_length(bout_lengthSEXP);
    Rcpp::traits::input_parameter< int >::type thresh_lower(thresh_lowerSEXP);
    Rcpp::traits::input_parameter< int >::type thresh_upper(thresh_upperSEXP);
    Rcpp::traits::input_parameter< int >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type tol_lower(tol_lowerSEXP);
    Rcpp::traits::input_parameter< int >::type tol_upper(tol_upperSEXP);
    Rcpp::traits::input_parameter< bool >::type nci(nciSEXP);
    Rcpp::traits::input_parameter< bool >::type days_distinct(days_distinctSEXP);
    rcpp_result_gen = Rcpp::wrap(bouts(counts, weartime, bout_length, thresh_lower, thresh_upper, tol, tol_lower, tol_upper, nci, days_distinct));
    return rcpp_result_gen;
END_RCPP
}
// intensities
IntegerVector intensities(IntegerVector counts, IntegerVector thresh);
RcppExport SEXP _accelerometry_intensities(SEXP countsSEXP, SEXP threshSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type thresh(threshSEXP);
    rcpp_result_gen = Rcpp::wrap(intensities(counts, thresh));
    return rcpp_result_gen;
END_RCPP
}
// movingaves_i
NumericVector movingaves_i(IntegerVector x, double window);
RcppExport SEXP _accelerometry_movingaves_i(SEXP xSEXP, SEXP windowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type window(windowSEXP);
    rcpp_result_gen = Rcpp::wrap(movingaves_i(x, window));
    return rcpp_result_gen;
END_RCPP
}
// movingaves_i_max
double movingaves_i_max(IntegerVector x, double window);
RcppExport SEXP _accelerometry_movingaves_i_max(SEXP xSEXP, SEXP windowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type window(windowSEXP);
    rcpp_result_gen = Rcpp::wrap(movingaves_i_max(x, window));
    return rcpp_result_gen;
END_RCPP
}
// movingaves_n
NumericVector movingaves_n(NumericVector x, double window);
RcppExport SEXP _accelerometry_movingaves_n(SEXP xSEXP, SEXP windowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type window(windowSEXP);
    rcpp_result_gen = Rcpp::wrap(movingaves_n(x, window));
    return rcpp_result_gen;
END_RCPP
}
// movingaves_n_max
double movingaves_n_max(NumericVector x, double window);
RcppExport SEXP _accelerometry_movingaves_n_max(SEXP xSEXP, SEXP windowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type window(windowSEXP);
    rcpp_result_gen = Rcpp::wrap(movingaves_n_max(x, window));
    return rcpp_result_gen;
END_RCPP
}
// personvars
NumericMatrix personvars(NumericMatrix dayvars, int rows, int days, int wk, int we);
RcppExport SEXP _accelerometry_personvars(SEXP dayvarsSEXP, SEXP rowsSEXP, SEXP daysSEXP, SEXP wkSEXP, SEXP weSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type dayvars(dayvarsSEXP);
    Rcpp::traits::input_parameter< int >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< int >::type days(daysSEXP);
    Rcpp::traits::input_parameter< int >::type wk(wkSEXP);
    Rcpp::traits::input_parameter< int >::type we(weSEXP);
    rcpp_result_gen = Rcpp::wrap(personvars(dayvars, rows, days, wk, we));
    return rcpp_result_gen;
END_RCPP
}
// rle2_i
IntegerMatrix rle2_i(IntegerVector x, bool indices);
RcppExport SEXP _accelerometry_rle2_i(SEXP xSEXP, SEXP indicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type indices(indicesSEXP);
    rcpp_result_gen = Rcpp::wrap(rle2_i(x, indices));
    return rcpp_result_gen;
END_RCPP
}
// rle2_n
NumericMatrix rle2_n(NumericVector x, bool indices);
RcppExport SEXP _accelerometry_rle2_n(SEXP xSEXP, SEXP indicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type indices(indicesSEXP);
    rcpp_result_gen = Rcpp::wrap(rle2_n(x, indices));
    return rcpp_result_gen;
END_RCPP
}
// sedbreaks
int sedbreaks(IntegerVector counts, IntegerVector weartime, int thresh);
RcppExport SEXP _accelerometry_sedbreaks(SEXP countsSEXP, SEXP weartimeSEXP, SEXP threshSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type weartime(weartimeSEXP);
    Rcpp::traits::input_parameter< int >::type thresh(threshSEXP);
    rcpp_result_gen = Rcpp::wrap(sedbreaks(counts, weartime, thresh));
    return rcpp_result_gen;
END_RCPP
}
// sedbreaks_flags
IntegerVector sedbreaks_flags(IntegerVector counts, IntegerVector weartime, int thresh);
RcppExport SEXP _accelerometry_sedbreaks_flags(SEXP countsSEXP, SEXP weartimeSEXP, SEXP threshSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type weartime(weartimeSEXP);
    Rcpp::traits::input_parameter< int >::type thresh(threshSEXP);
    rcpp_result_gen = Rcpp::wrap(sedbreaks_flags(counts, weartime, thresh));
    return rcpp_result_gen;
END_RCPP
}
// weartime
IntegerVector weartime(IntegerVector counts, int window, int tol, int tol_upper, bool nci, bool days_distinct, int units_day);
RcppExport SEXP _accelerometry_weartime(SEXP countsSEXP, SEXP windowSEXP, SEXP tolSEXP, SEXP tol_upperSEXP, SEXP nciSEXP, SEXP days_distinctSEXP, SEXP units_daySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< int >::type window(windowSEXP);
    Rcpp::traits::input_parameter< int >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type tol_upper(tol_upperSEXP);
    Rcpp::traits::input_parameter< bool >::type nci(nciSEXP);
    Rcpp::traits::input_parameter< bool >::type days_distinct(days_distinctSEXP);
    Rcpp::traits::input_parameter< int >::type units_day(units_daySEXP);
    rcpp_result_gen = Rcpp::wrap(weartime(counts, window, tol, tol_upper, nci, days_distinct, units_day));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_accelerometry_artifacts", (DL_FUNC) &_accelerometry_artifacts, 2},
    {"_accelerometry_blockaves_i", (DL_FUNC) &_accelerometry_blockaves_i, 2},
    {"_accelerometry_blockaves_i_max", (DL_FUNC) &_accelerometry_blockaves_i_max, 2},
    {"_accelerometry_blockaves_n", (DL_FUNC) &_accelerometry_blockaves_n, 2},
    {"_accelerometry_blockaves_n_max", (DL_FUNC) &_accelerometry_blockaves_n_max, 2},
    {"_accelerometry_bouts", (DL_FUNC) &_accelerometry_bouts, 10},
    {"_accelerometry_intensities", (DL_FUNC) &_accelerometry_intensities, 2},
    {"_accelerometry_movingaves_i", (DL_FUNC) &_accelerometry_movingaves_i, 2},
    {"_accelerometry_movingaves_i_max", (DL_FUNC) &_accelerometry_movingaves_i_max, 2},
    {"_accelerometry_movingaves_n", (DL_FUNC) &_accelerometry_movingaves_n, 2},
    {"_accelerometry_movingaves_n_max", (DL_FUNC) &_accelerometry_movingaves_n_max, 2},
    {"_accelerometry_personvars", (DL_FUNC) &_accelerometry_personvars, 5},
    {"_accelerometry_rle2_i", (DL_FUNC) &_accelerometry_rle2_i, 2},
    {"_accelerometry_rle2_n", (DL_FUNC) &_accelerometry_rle2_n, 2},
    {"_accelerometry_sedbreaks", (DL_FUNC) &_accelerometry_sedbreaks, 3},
    {"_accelerometry_sedbreaks_flags", (DL_FUNC) &_accelerometry_sedbreaks_flags, 3},
    {"_accelerometry_weartime", (DL_FUNC) &_accelerometry_weartime, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_accelerometry(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
