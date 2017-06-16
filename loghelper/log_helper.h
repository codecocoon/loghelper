/*
* I take no responsibility for this code and any problems you might get if using it.
* published at https://github.com/codecocoon/loghelper.git
* codecocoon@gmail.com
*/

#ifndef _LOG_HELPER_H_
#define _LOG_HELPER_H_

#include <atltime.h>
#include <string>
#include <sstream>
#include <iomanip>

namespace cocoon {
namespace string {

inline std::string helper( const __int8 in_value )
{
	__int32 tmp = in_value;
	return std::to_string( tmp );
}

inline std::string helper( const __int16 in_value )
{
	return std::to_string( in_value );
}

inline std::string helper( const __int32 in_value )
{
	return std::to_string( in_value );
}

inline std::string helper( const __int64 in_value )
{
	return std::to_string( in_value );
}

inline std::string helper( const unsigned __int8 in_value )
{
	unsigned __int32 tmp = in_value;
	return std::to_string( tmp );
}

inline std::string helper( const unsigned __int16 in_value )
{
	return std::to_string( in_value );
}

inline std::string helper( const unsigned __int32 in_value )
{
	return std::to_string( in_value );
}

inline std::string helper( const unsigned __int64 in_value )
{
	return std::to_string( in_value );
}

inline std::string helper( const float in_value )
{
	return std::to_string( in_value );
}

inline std::string helper( const double in_value )
{
	return std::to_string( in_value );
}

inline std::string helper_time( const CTime& in_value )
{
	return std::to_string( in_value.GetTime() ) + " / "
		+ std::to_string( in_value.GetYear() ) + "-"
		+ std::to_string( in_value.GetMonth() ) + "-"
		+ std::to_string( in_value.GetDay() ) + " "
		+ std::to_string( in_value.GetHour() ) + ":"
		+ std::to_string( in_value.GetMinute() ) + ":"
		+ std::to_string( in_value.GetSecond() );
}

inline std::string helper( const CTime& in_value )
{
	return helper_time( in_value );
}

inline std::string helper_time_onlydate( const CTime& in_value )
{
	return std::to_string( in_value.GetYear() ) + "-"
		+ std::to_string( in_value.GetMonth() ) + "-"
		+ std::to_string( in_value.GetDay() );
}

inline std::string helper_time_onlytime( const CTime& in_value )
{
	return std::to_string( in_value.GetHour() ) + ":"
		+ std::to_string( in_value.GetMinute() ) + ":"
		+ std::to_string( in_value.GetSecond() );
}

inline std::string helper( void* const in_value )
{
	std::stringstream ss;
	ss << std::uppercase << std::setw( 16 ) << std::setfill( '0' ) << std::hex << in_value;
	return std::string( "addr : 0x" ) + ss.str();
}

inline std::string helper( const void* const in_value )
{
	std::stringstream ss;
	ss << std::uppercase << std::setw( 16 ) << std::setfill( '0' ) << std::hex << in_value;
	return std::string( "addr : 0x" ) + ss.str();
}

inline std::string helper_2_hex( const __int8 in_value )
{
	std::stringstream ss;
	ss << std::uppercase << std::setw( 2 ) << std::setfill( '0' ) << std::hex << ( __int32 )in_value;
	return std::string( "0x" ) + ss.str();
}

inline std::string helper_2_hex( const unsigned __int8 in_value )
{
	std::stringstream ss;
	ss << std::uppercase << std::setw( 2 ) << std::setfill( '0' ) << std::hex << ( __int32 )in_value;
	return std::string( "0x" ) + ss.str();
}

inline std::string helper_2_hex( const __int16 in_value )
{
	std::stringstream ss;
	ss << std::uppercase << std::setw( 4 ) << std::setfill( '0' ) << std::hex << in_value;
	return std::string( "0x" ) + ss.str();
}

inline std::string helper_2_hex( const unsigned __int16 in_value )
{
	std::stringstream ss;
	ss << std::uppercase << std::setw( 4 ) << std::setfill( '0' ) << std::hex << in_value;
	return std::string( "0x" ) + ss.str();
}

inline std::string helper_2_hex( const __int32 in_value )
{
	std::stringstream ss;
	ss << std::uppercase << std::setw( 8 ) << std::setfill( '0' ) << std::hex << in_value;
	return std::string( "0x" ) + ss.str();
}

inline std::string helper_2_hex( const unsigned __int32 in_value )
{
	std::stringstream ss;
	ss << std::uppercase << std::setw( 8 ) << std::setfill( '0' ) << std::hex << in_value;
	return std::string( "0x" ) + ss.str();
}

inline std::string helper_2_hex( const __int64 in_value )
{
	std::stringstream ss;
	ss << std::uppercase << std::setw( 16 ) << std::setfill( '0' ) << std::hex << in_value;
	return std::string( "0x" ) + ss.str();
}

inline std::string helper_2_hex( const unsigned __int64 in_value )
{
	std::stringstream ss;
	ss << std::uppercase << std::setw( 16 ) << std::setfill( '0' ) << std::hex << in_value;
	return std::string( "0x" ) + ss.str();
}

} // namespace string
} // namespace cocoon

//--------------------------------------------------------------------------------

#ifndef loghelper_concat_macro
#define loghelper_concat_macro( A, B ) A ## B
#endif

#ifndef loghelper_internal_args_augmenter
#define loghelper_internal_args_augmenter(...) unused, __VA_ARGS__
#endif

#ifndef loghelper_internal_get_arg_count_private
#define loghelper_internal_get_arg_count_private(_1_, _2_, _3_, _4_, _5_, _6_, _7_, _8_, _9_, _10_, _11_, _12_, _13_, _14_, _15_, _16_, _17_, _18_, _19_, _20_, _21_, _22_, _23_, _24_, _25_, _26_, _27_, _28_, _29_, _30_, _31_, _32_, _33_, _34_, _35_, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _COUNT, ...) _COUNT
#endif

#ifndef loghelper_internal_expand
#define loghelper_internal_expand(x) x
#endif

#ifndef loghelper_internal_expand_args_private
#define loghelper_internal_expand_args_private(...) loghelper_internal_expand(loghelper_internal_get_arg_count_private(__VA_ARGS__, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0))
#endif

#ifndef loghelper_get_arg_count
#define loghelper_get_arg_count( ... ) loghelper_internal_expand_args_private( loghelper_internal_args_augmenter( __VA_ARGS__ ) )
#endif

//--------------------------------------------------------------------------------

#define sh_vararg_impl2(_FUNC, _BASE, _COUNT, ...) _BASE##_COUNT(_FUNC, __VA_ARGS__)
#define sh_vararg_impl(_FUNC, _BASE, _COUNT, ...) sh_vararg_impl2(_FUNC, _BASE, _COUNT, __VA_ARGS__)
#define sh_vararg(_FUNC, _BASE, ...) sh_vararg_impl(_FUNC, _BASE, loghelper_get_arg_count(__VA_ARGS__), __VA_ARGS__)

#define sh_vararg_impl2_pattern(_S, _E, _BASE, _COUNT, ...) _BASE##_COUNT(_S, _E, __VA_ARGS__)
#define sh_vararg_impl_pattern(_S, _E, _BASE, _COUNT, ...) sh_vararg_impl2_pattern(_S, _E, _BASE, _COUNT, __VA_ARGS__)
#define sh_vararg_pattern(_S, _E, _BASE, ...) sh_vararg_impl_pattern(_S, _E, _BASE, loghelper_get_arg_count(__VA_ARGS__), __VA_ARGS__)

//--------------------------------------------------------------------------------

#define sh_base1( _func, _1 )                                                                                           _func( _1 ) + " "
#define sh_base2( _func, _1, _2 )                                                                                       sh_base1( _func, _1 ) + sh_base1( _func, _2 )
#define sh_base3( _func, _1, _2, _3 )                                                                                   sh_base1( _func, _1 ) + sh_base2( _func, _2, _3 )
#define sh_base4( _func, _1, _2, _3, _4 )                                                                               sh_base1( _func, _1 ) + sh_base3( _func, _2, _3, _4 )
#define sh_base5( _func, _1, _2, _3, _4, _5 )                                                                           sh_base1( _func, _1 ) + sh_base4( _func, _2, _3, _4, _5  )
#define sh_base6( _func, _1, _2, _3, _4, _5, _6 )                                                                       sh_base1( _func, _1 ) + sh_base5( _func, _2, _3, _4, _5, _6  )
#define sh_base7( _func, _1, _2, _3, _4, _5, _6, _7 )                                                                   sh_base1( _func, _1 ) + sh_base6( _func, _2, _3, _4, _5, _6, _7  )
#define sh_base8( _func, _1, _2, _3, _4, _5, _6, _7, _8 )                                                               sh_base1( _func, _1 ) + sh_base7( _func, _2, _3, _4, _5, _6, _7, _8 )
#define sh_base9( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9 )                                                           sh_base1( _func, _1 ) + sh_base8( _func, _2, _3, _4, _5, _6, _7, _8, _9 )
#define sh_base10( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 )                                                     sh_base1( _func, _1 ) + sh_base9( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10 )
#define sh_base11( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 )                                                sh_base1( _func, _1 ) + sh_base10( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 )
#define sh_base12( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 )                                           sh_base1( _func, _1 ) + sh_base11( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 )
#define sh_base13( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 )                                      sh_base1( _func, _1 ) + sh_base12( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 )
#define sh_base14( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14 )                                 sh_base1( _func, _1 ) + sh_base13( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14 )
#define sh_base15( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 )                            sh_base1( _func, _1 ) + sh_base14( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 )
#define sh_base16( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16 )                       sh_base1( _func, _1 ) + sh_base15( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16 )
#define sh_base17( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17 )                  sh_base1( _func, _1 ) + sh_base16( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17 )
#define sh_base18( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18 )             sh_base1( _func, _1 ) + sh_base17( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18 )
#define sh_base19( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19 )        sh_base1( _func, _1 ) + sh_base18( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19 )
#define sh_base20( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20 )   sh_base1( _func, _1 ) + sh_base19( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20 )

//--------------------------------------------------------------------------------

#define shp1( _s, _e, _1 )                                                                                           _s + cocoon::string::helper( _1 ) + _e
#define shp2( _s, _e, _1, _2 )                                                                                       shp1( _s, _e, _1 ) + shp1( _s, _e, _2 )
#define shp3( _s, _e, _1, _2, _3 )                                                                                   shp1( _s, _e, _1 ) + shp2( _s, _e, _2, _3 )
#define shp4( _s, _e, _1, _2, _3, _4 )                                                                               shp1( _s, _e, _1 ) + shp3( _s, _e, _2, _3, _4 )
#define shp5( _s, _e, _1, _2, _3, _4, _5 )                                                                           shp1( _s, _e, _1 ) + shp4( _s, _e, _2, _3, _4, _5  )
#define shp6( _s, _e, _1, _2, _3, _4, _5, _6 )                                                                       shp1( _s, _e, _1 ) + shp5( _s, _e, _2, _3, _4, _5, _6  )
#define shp7( _s, _e, _1, _2, _3, _4, _5, _6, _7 )                                                                   shp1( _s, _e, _1 ) + shp6( _s, _e, _2, _3, _4, _5, _6, _7  )
#define shp8( _s, _e, _1, _2, _3, _4, _5, _6, _7, _8 )                                                               shp1( _s, _e, _1 ) + shp7( _s, _e, _2, _3, _4, _5, _6, _7, _8 )
#define shp9( _s, _e, _1, _2, _3, _4, _5, _6, _7, _8, _9 )                                                           shp1( _s, _e, _1 ) + shp8( _s, _e, _2, _3, _4, _5, _6, _7, _8, _9 )
#define shp10( _s, _e, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 )                                                     shp1( _s, _e, _1 ) + shp9( _s, _e, _2, _3, _4, _5, _6, _7, _8, _9, _10 )
#define shp11( _s, _e, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 )                                                shp1( _s, _e, _1 ) + shp10( _s, _e, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 )
#define shp12( _s, _e, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 )                                           shp1( _s, _e, _1 ) + shp11( _s, _e, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 )
#define shp13( _s, _e, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 )                                      shp1( _s, _e, _1 ) + shp12( _s, _e, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 )
#define shp14( _s, _e, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14 )                                 shp1( _s, _e, _1 ) + shp13( _s, _e, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14 )
#define shp15( _s, _e, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 )                            shp1( _s, _e, _1 ) + shp14( _s, _e, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 )
#define shp16( _s, _e, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16 )                       shp1( _s, _e, _1 ) + shp15( _s, _e, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16 )
#define shp17( _s, _e, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17 )                  shp1( _s, _e, _1 ) + shp16( _s, _e, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17 )
#define shp18( _s, _e, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18 )             shp1( _s, _e, _1 ) + shp17( _s, _e, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18 )
#define shp19( _s, _e, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19 )        shp1( _s, _e, _1 ) + shp18( _s, _e, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19 )
#define shp20( _s, _e, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20 )   shp1( _s, _e, _1 ) + shp19( _s, _e, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20 )

//--------------------------------------------------------------------------------

#define sh_base( _FUNC, ... ) sh_vararg( _FUNC, sh_base, __VA_ARGS__ )
#define shp( _S, _E, ... ) sh_vararg_pattern( _S, _E, shp, __VA_ARGS__ )

//------------------------------------------------------------------------------

#define lh_vararg_impl2(_FUNC, _BASE, _COUNT, ...) _BASE##_COUNT(_FUNC, __VA_ARGS__)
#define lh_vararg_impl(_FUNC, _BASE, _COUNT, ...) lh_vararg_impl2(_FUNC, _BASE, _COUNT, __VA_ARGS__)
#define lh_vararg(_FUNC, _BASE, ...) lh_vararg_impl(_FUNC, _BASE, loghelper_get_arg_count(__VA_ARGS__), __VA_ARGS__)

#define lh_vararg_impl2_pattern(_S, _M, _FUNC, _BASE, _COUNT, ...) _BASE##_COUNT(_S, _M, _FUNC, __VA_ARGS__)
#define lh_vararg_impl_pattern(_S, _M, _FUNC, _BASE, _COUNT, ...) lh_vararg_impl2_pattern(_S, _M, _FUNC, _BASE, _COUNT, __VA_ARGS__)
#define lh_vararg_pattern(_S, _M, _FUNC, _BASE, ...) lh_vararg_impl_pattern(_S, _M, _FUNC, _BASE, loghelper_get_arg_count(__VA_ARGS__), __VA_ARGS__)

//--------------------------------------------------------------------------------

#define lh_base1( _func, _1 )                                                                                           std::string( #_1 ) + "(" + _func( _1 ) + ") "
#define lh_base2( _func, _1, _2 )                                                                                       lh_base1( _func, _1 ) + lh_base1( _func, _2 )
#define lh_base3( _func, _1, _2, _3 )                                                                                   lh_base1( _func, _1 ) + lh_base2( _func, _2, _3 )
#define lh_base4( _func, _1, _2, _3, _4 )                                                                               lh_base1( _func, _1 ) + lh_base3( _func, _2, _3, _4 )
#define lh_base5( _func, _1, _2, _3, _4, _5 )                                                                           lh_base1( _func, _1 ) + lh_base4( _func, _2, _3, _4, _5  )
#define lh_base6( _func, _1, _2, _3, _4, _5, _6 )                                                                       lh_base1( _func, _1 ) + lh_base5( _func, _2, _3, _4, _5, _6  )
#define lh_base7( _func, _1, _2, _3, _4, _5, _6, _7 )                                                                   lh_base1( _func, _1 ) + lh_base6( _func, _2, _3, _4, _5, _6, _7  )
#define lh_base8( _func, _1, _2, _3, _4, _5, _6, _7, _8 )                                                               lh_base1( _func, _1 ) + lh_base7( _func, _2, _3, _4, _5, _6, _7, _8 )
#define lh_base9( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9 )                                                           lh_base1( _func, _1 ) + lh_base8( _func, _2, _3, _4, _5, _6, _7, _8, _9 )
#define lh_base10( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 )                                                     lh_base1( _func, _1 ) + lh_base9( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10 )
#define lh_base11( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 )                                                lh_base1( _func, _1 ) + lh_base10( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 )
#define lh_base12( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 )                                           lh_base1( _func, _1 ) + lh_base11( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 )
#define lh_base13( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 )                                      lh_base1( _func, _1 ) + lh_base12( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 )
#define lh_base14( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14 )                                 lh_base1( _func, _1 ) + lh_base13( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14 )
#define lh_base15( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 )                            lh_base1( _func, _1 ) + lh_base14( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 )
#define lh_base16( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16 )                       lh_base1( _func, _1 ) + lh_base15( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16 )
#define lh_base17( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17 )                  lh_base1( _func, _1 ) + lh_base16( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17 )
#define lh_base18( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18 )             lh_base1( _func, _1 ) + lh_base17( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18 )
#define lh_base19( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19 )        lh_base1( _func, _1 ) + lh_base18( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19 )
#define lh_base20( _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20 )   lh_base1( _func, _1 ) + lh_base19( _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20 )

#define lhp_base1( _s, _e, _func, _1 )                                                                                           std::string( _s ) +  #_1 + "(" + _func( _1 ) + ")" + _e
#define lhp_base2( _s, _e, _func, _1, _2 )                                                                                       lhp_base1( _s, _e, _func, _1 ) + lhp_base1( _s, _e, _func, _2 )
#define lhp_base3( _s, _e, _func, _1, _2, _3 )                                                                                   lhp_base1( _s, _e, _func, _1 ) + lhp_base2( _s, _e, _func, _2, _3 )
#define lhp_base4( _s, _e, _func, _1, _2, _3, _4 )                                                                               lhp_base1( _s, _e, _func, _1 ) + lhp_base3( _s, _e, _func, _2, _3, _4 )
#define lhp_base5( _s, _e, _func, _1, _2, _3, _4, _5 )                                                                           lhp_base1( _s, _e, _func, _1 ) + lhp_base4( _s, _e, _func, _2, _3, _4, _5  )
#define lhp_base6( _s, _e, _func, _1, _2, _3, _4, _5, _6 )                                                                       lhp_base1( _s, _e, _func, _1 ) + lhp_base5( _s, _e, _func, _2, _3, _4, _5, _6  )
#define lhp_base7( _s, _e, _func, _1, _2, _3, _4, _5, _6, _7 )                                                                   lhp_base1( _s, _e, _func, _1 ) + lhp_base6( _s, _e, _func, _2, _3, _4, _5, _6, _7  )
#define lhp_base8( _s, _e, _func, _1, _2, _3, _4, _5, _6, _7, _8 )                                                               lhp_base1( _s, _e, _func, _1 ) + lhp_base7( _s, _e, _func, _2, _3, _4, _5, _6, _7, _8 )
#define lhp_base9( _s, _e, _func, _1, _2, _3, _4, _5, _6, _7, _8, _9 )                                                           lhp_base1( _s, _e, _func, _1 ) + lhp_base8( _s, _e, _func, _2, _3, _4, _5, _6, _7, _8, _9 )
#define lhp_base10( _s, _e, _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 )                                                     lhp_base1( _s, _e, _func, _1 ) + lhp_base9( _s, _e, _func, _2, _3, _4, _5, _6, _7, _8, _9, _10 )
#define lhp_base11( _s, _e, _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 )                                                lhp_base1( _s, _e, _func, _1 ) + lhp_base10( _s, _e, _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 )
#define lhp_base12( _s, _e, _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 )                                           lhp_base1( _s, _e, _func, _1 ) + lhp_base11( _s, _e, _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 )
#define lhp_base13( _s, _e, _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 )                                      lhp_base1( _s, _e, _func, _1 ) + lhp_base12( _s, _e, _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 )
#define lhp_base14( _s, _e, _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14 )                                 lhp_base1( _s, _e, _func, _1 ) + lhp_base13( _s, _e, _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14 )
#define lhp_base15( _s, _e, _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 )                            lhp_base1( _s, _e, _func, _1 ) + lhp_base14( _s, _e, _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 )
#define lhp_base16( _s, _e, _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16 )                       lhp_base1( _s, _e, _func, _1 ) + lhp_base15( _s, _e, _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16 )
#define lhp_base17( _s, _e, _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17 )                  lhp_base1( _s, _e, _func, _1 ) + lhp_base16( _s, _e, _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17 )
#define lhp_base18( _s, _e, _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18 )             lhp_base1( _s, _e, _func, _1 ) + lhp_base17( _s, _e, _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18 )
#define lhp_base19( _s, _e, _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19 )        lhp_base1( _s, _e, _func, _1 ) + lhp_base18( _s, _e, _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19 )
#define lhp_base20( _s, _e, _func, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20 )   lhp_base1( _s, _e, _func, _1 ) + lhp_base19( _s, _e, _func, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20 )

//--------------------------------------------------------------------------------

#define lhp_base( _S, _E, _FUNC, ... ) lh_vararg_pattern( _S, _E, _FUNC, lhp_base, __VA_ARGS__ )
#define lhp( _S, _E, ... ) lhp_base( _S, _E, cocoon::string::helper, __VA_ARGS__ )
#define lhw( _S, _E, ... ) lhp_base( _S, _E, cocoon::string::helper, __VA_ARGS__ )

#define lh_base( _FUNC, ... ) lh_vararg( _FUNC, lh_base, __VA_ARGS__ )
#define lh( ... ) lh_base( cocoon::string::helper, __VA_ARGS__ )
#define lht( ... ) lh_base( cocoon::string::helper_time, __VA_ARGS__ )
#define lht_only_ymd( ... ) lh_base( cocoon::string::helper_time_onlydate, __VA_ARGS__ )
#define lht_only_time( ... ) lh_base( cocoon::string::helper_time_onlytime, __VA_ARGS__ )
#define lhx( ... ) lh_base( cocoon::string::helper_2_hex, __VA_ARGS__ )

#define lhd( ... ) sh_base( cocoon::string::helper, __VA_ARGS__ )
#define lhdt( ... ) sh_base( cocoon::string::helper_time, __VA_ARGS__ )
#define lhdt_only_ymd( ... ) sh_base( cocoon::string::helper_time_onlydate, __VA_ARGS__ )
#define lhdt_only_time( ... ) sh_base( cocoon::string::helper_time_onlytime, __VA_ARGS__ )
#define lhdx( ... ) sh_base( cocoon::string::helper_2_hex, __VA_ARGS__ )

#define lhc_base( _FUNC, _MEMO, _VALUE ) std::string( _MEMO ) + "(" + _FUNC( _VALUE ) + ")"
#define lhc( _MEMO, _VALUE ) lhc_base( cocoon::string::helper, _MEMO, _VALUE )
#define lhct( _MEMO, _VALUE ) lhc_base( cocoon::string::helper_time, _MEMO, _VALUE )
#define lhct_only_ymd( _MEMO, _VALUE ) lhc_base( cocoon::string::helper_time_onlydate, _MEMO, _VALUE )
#define lhct_only_time( _MEMO, _VALUE ) lhc_base( cocoon::string::helper_time_onlytime, _MEMO, _VALUE )
#define lhcx( _MEMO, _VALUE ) lhc_base( cocoon::string::helper_2_hex, _MEMO, _VALUE ) 

#endif //_LOG_HELPER_H_