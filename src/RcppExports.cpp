// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cpp_validate
std::vector < bool > cpp_validate(std::vector < std::string > codes);
RcppExport SEXP olctools_cpp_validate(SEXP codesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type codes(codesSEXP);
    __result = Rcpp::wrap(cpp_validate(codes));
    return __result;
END_RCPP
}