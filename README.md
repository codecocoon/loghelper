# loghelper
log 남기는 코드를 편하게 짤 수 있도록 도와주는 유틸 코드입니다.




# 요약

	         __int8  datatype_int8   = 0x0F;
	unsigned __int8  datatype_uint8  = 0xFF;
   	       __int16 datatype_int16  = 0x1F2F;
	unsigned __int16 datatype_uint16 = 0x3F4F;
	         __int32 datatype_int32  = 0x1F2F'3F4F;
	unsigned __int32 datatype_uint32 = 0x5F6F'7F8F;
	         __int64 datatype_int64  = 0x1F2F'3F4F'FFFF'FFFF;
	unsigned __int64 datatype_uint64 = 0x5F6F'7F8F'FFFF'FFFF;

	std::cout << "FAIL : "
		<< lh( datatype_int8, datatype_uint8
			, datatype_int16, datatype_uint16
			, datatype_int32, datatype_uint32
			, datatype_int64, datatype_uint64 ) 
		<< std::endl;

위와 같이 코딩을 하신 후에, 실행을 하시면 콘솔창에 아래와 같이 출력됩니다.

	FAIL : datatype_int8(15) datatype_uint8(255) datatype_int16(7983) datatype_uint16(16207) datatype_int32(523190095) datatype_uint32(1601142671) datatype_int64(2247084351911100415), datatype_uint64(6876855412470054911)




# 내용

아래와 같은 데이터가 있고,

	         __int8  datatype_int8   = 0x0F;
	unsigned __int8  datatype_uint8  = 0xFF;
   	       __int16 datatype_int16  = 0x1F2F;
	unsigned __int16 datatype_uint16 = 0x3F4F;
	         __int32 datatype_int32  = 0x1F2F'3F4F;
	unsigned __int32 datatype_uint32 = 0x5F6F'7F8F;
	         __int64 datatype_int64  = 0x1F2F'3F4F'FFFF'FFFF;
	unsigned __int64 datatype_uint64 = 0x5F6F'7F8F'FFFF'FFFF;

이를 다음과 같이 로그로 남기고 싶다고 가정하겠습니다.

	FAIL : datatype_int8(15) datatype_uint8(255) datatype_int16(7983) datatype_uint16(16207) datatype_int32(523190095) datatype_uint32(1601142671) datatype_int64(2247084351911100415), datatype_uint64(6876855412470054911)

위와 같은 데이터를 로그로 남길 때, 사용하는 대부분에 코드는 아래와 비슷할 것입니다.

		printf( "FAIL : datatype_int8(%d) datatype_uint8(%u) datatype_int16(%d) datatype_uint16(%u) datatype_int32(%d) datatype_uint32(%u) datatype_int64(%lld), datatype_uint64(%llu)\r\n"
				, datatype_int8, datatype_uint8
				, datatype_int16, datatype_uint16
				, datatype_int32, datatype_uint32
				, datatype_int64, datatype_uint64 );

혹은,

		std::cout << "FAIL : "
			<< "datatype_int8(" << std::to_string( datatype_int8 ) << ") "
			<< "datatype_uint8(" << std::to_string( datatype_uint8 ) << ") "
			<< "datatype_int16(" << std::to_string( datatype_int16 ) << ") "
			<< "datatype_uint16(" << std::to_string( datatype_uint16 ) << ") "
			<< "datatype_int32(" << std::to_string( datatype_int32 ) << ") "
			<< "datatype_uint32(" << std::to_string( datatype_uint32 ) << ") "
			<< "datatype_int64(" << std::to_string( datatype_int64 ) << ") "
			<< "datatype_uint64(" << std::to_string( datatype_uint64 ) << ")"
			<< std::endl;

위와 비슷한 코드들에 단점은 아래와 같지요.

	1. 중복된 코드가 발생한다.
		ex) printf( "datatype_int8(%d)", datatype_int8 ); //datatype_int8를 두번 써야 합니다.
		ex) std::cout << "datatype_int8(" << std::to_string( datatype_int8 ) << ")" << std::endl; //이 또한 datatype_int8를 두번 써야 합니다.
	
	2. 타이핑 실수가 발생할 수 있다.
		ex) printf( "datatype_int8(%s)", datatype_int8 ); //%d를 %s로 잘못 기입해서 프로그램이 죽습니다.
		ex) std::cout << "datatype_int8(" << std::to_string( datatype_int16 ) << ")" << std::endl; //datatype_int16이라고 적어야 하는데 datatype_int8이라고 적어 로그를 볼 때 혼란을 줄 수 있습니다.

이러한 단점들을 완화하기 위해 log helper라는 유틸 코드를 만들었습니다.
아래와 같이 쓰시면 됩니다.

		std::cout << "FAIL : "
			<< lh( datatype_int8, datatype_uint8
				, datatype_int16, datatype_uint16
				, datatype_int32, datatype_uint32
				, datatype_int64, datatype_uint64 ) 
			<< std::endl;

혹은,

		std::string str;
		str += lh( datatype_int8, datatype_uint8
				  , datatype_int16, datatype_uint16
				  , datatype_int32, datatype_uint32
				  , datatype_int64, datatype_uint64 );
		printf( "%s\r\n", str.c_str() );

간편하지요? :)

#사용방법
프로젝트에 log_helper.h를 추가하고, 이 파일을 include만 하면 됩니다.
