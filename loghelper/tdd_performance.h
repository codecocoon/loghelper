/*
* I take no responsibility for this code and any problems you might get if using it.
* published at https://github.com/codecocoon/loghelper.git
* codecocoon@gmail.com 
*/

#ifndef _TDD_PERFORMANCE_H_
#define _TDD_PERFORMANCE_H_

#include "log_helper.h"

void performance_test()
{
	const int MAX_TEST_COUNT = 1;

	__int8 datatype_int8 = 0x0F;
	unsigned __int8 datatype_uint8 = 0xFF;
	__int16 datatype_int16 = 0x1F2F;
	unsigned __int16 datatype_uint16 = 0x3F4F;
	__int32 datatype_int32 = 0x1F2F'3F4F;
	unsigned __int32 datatype_uint32 = 0x5F6F'7F8F;
	__int64 datatype_int64 = 0x1F2F'3F4F'FFFF'FFFF;
	unsigned __int64 datatype_uint64 = 0x5F6F'7F8F'FFFF'FFFF;

	cocoon::systemreport::tdd p1( MAX_TEST_COUNT, "test printf()", [ datatype_int8
								  , datatype_uint8
								  , datatype_int16
								  , datatype_uint16
								  , datatype_int32
								  , datatype_uint32
								  , datatype_int64
								  , datatype_uint64 ]
								  ( )
	{
		printf( "datatype_int8(%d) datatype_uint8(%u) datatype_int16(%d) datatype_uint16(%u) datatype_int32(%d) datatype_uint32(%u) datatype_int64(%lld), datatype_uint64(%llu)\r\n"
				, datatype_int8, datatype_uint8
				, datatype_int16, datatype_uint16
				, datatype_int32, datatype_uint32
				, datatype_int64, datatype_uint64 );
	} );

	cocoon::systemreport::tdd std1( MAX_TEST_COUNT, "test std", [ datatype_int8
								  , datatype_uint8
								  , datatype_int16
								  , datatype_uint16
								  , datatype_int32
								  , datatype_uint32
								  , datatype_int64
								  , datatype_uint64 ]
								  ( )
	{
		std::cout << "datatype_int8(" << std::to_string( datatype_int8 ) << ") "
			<< "datatype_uint8(" << std::to_string( datatype_uint8 ) << ") "
			<< "datatype_int16(" << std::to_string( datatype_int16 ) << ") "
			<< "datatype_uint16(" << std::to_string( datatype_uint16 ) << ") "
			<< "datatype_int32(" << std::to_string( datatype_int32 ) << ") "
			<< "datatype_uint32(" << std::to_string( datatype_uint32 ) << ") "
			<< "datatype_int64(" << std::to_string( datatype_int64 ) << ") "
			<< "datatype_uint64(" << std::to_string( datatype_uint64 ) << ")"
			<< std::endl;
	} );

	cocoon::systemreport::tdd lh1( MAX_TEST_COUNT, "test lh() : 1", [ datatype_int8
								  , datatype_uint8
								  , datatype_int16
								  , datatype_uint16
								  , datatype_int32
								  , datatype_uint32
								  , datatype_int64
								  , datatype_uint64 ]
								  ( )
	{
		std::string str;
		str += lh( datatype_int8, datatype_uint8
				  , datatype_int16, datatype_uint16
				  , datatype_int32, datatype_uint32
				  , datatype_int64, datatype_uint64 );
		printf( "%s\r\n", str.c_str() );
	} );

	//아래 주석을 풀어서 테스트 해보면, std::cout이 얼마나 느린지 알 수 있다.
	//cocoon::systemreport::tdd lh2( MAX_TEST_COUNT, "test lh() : 2", [ datatype_int8
	//							  , datatype_uint8
	//							  , datatype_int16
	//							  , datatype_uint16
	//							  , datatype_int32
	//							  , datatype_uint32
	//							  , datatype_int64
	//							  , datatype_uint64 ]
	//							  ( )
	//{
	//	std::string str;
	//	str += lh( datatype_int8, datatype_uint8
	//			   , datatype_int16, datatype_uint16
	//			   , datatype_int32, datatype_uint32
	//			   , datatype_int64, datatype_uint64 );
	//	std::cout << str << std::endl;
	//} );

	//cocoon::systemreport::tdd lh3( MAX_TEST_COUNT, "test lh() : 3", [ datatype_int8
	//							  , datatype_uint8
	//							  , datatype_int16
	//							  , datatype_uint16
	//							  , datatype_int32
	//							  , datatype_uint32
	//							  , datatype_int64
	//							  , datatype_uint64 ]
	//							  ( )
	//{
	//	std::cout << 
	//		lh( datatype_int8, datatype_uint8
	//			, datatype_int16, datatype_uint16
	//			, datatype_int32, datatype_uint32
	//			, datatype_int64, datatype_uint64 ) << std::endl;
	//} );
}

#endif _TDD_PERFORMANCE_H_