#pragma once

#define CONSTEXPR_VIRTUAL_FUNCTION_SPECIFIER__
/*
  Since C++20, the constexpr specifier can be used for virtual functions
*/

#if defined( __cpp_constexpr) && __cpp_constexpr >= 201907L
#  undef  CONSTEXPR_VIRTUAL_FUNCTION_SPECIFIER__
#  define CONSTEXPR_VIRTUAL_FUNCTION_SPECIFIER__ constexpr
#endif

#define IMMEDIATE_FUNCTION_SPECIFIER__
/*
  IMMEDIATE_FUNCTION_SPECIFIER__ is used for functions
  that MUST BE evaluated at compile time.
*/

#if   defined(__cpp_consteval) && __cpp_consteval >= 201811L
#  undef  IMMEDIATE_FUNCTION_SPECIFIER__
#  define IMMEDIATE_FUNCTION_SPECIFIER__ consteval

#elif defined(__cpp_constexpr) && __cpp_constexpr >= 200704L
#  undef  IMMEDIATE_FUNCTION_SPECIFIER__
#  define IMMEDIATE_FUNCTION_SPECIFIER__ constexpr
#endif
