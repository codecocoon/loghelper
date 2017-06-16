/*
* I take no responsibility for this code and any problems you might get if using it.
* published at https://github.com/codecocoon/loghelper.git
* codecocoon@gmail.com 
*/

#ifndef _PERFORMANCE_HELPER_H_
#define _PERFORMANCE_HELPER_H_

#include <chrono>
#include <functional>
#include <iostream>
#include <string>

namespace cocoon {
namespace systemreport {

class performance
{
public:
	performance()
		: m_start( std::chrono::system_clock::now() )
		, m_elapsed_seconds( 0 )
	{}

public:
	double get()
	{
		m_end = std::chrono::system_clock::now();
		std::chrono::duration< double > elapsed_seconds = m_end - m_start;
		m_elapsed_seconds = elapsed_seconds.count();

		return m_elapsed_seconds;
	}

private:
	std::chrono::time_point<std::chrono::system_clock> m_start;
	std::chrono::time_point<std::chrono::system_clock> m_end;
	double m_elapsed_seconds;
};

class tdd
{
public:
	tdd( const int in_count, const std::string& in_title, std::function< void() > in_func )
	{
		std::cout << "------------------------------" << std::endl;
		std::cout << "[ TDD START : " << in_title << " ]" << std::endl;

		performance pfm;
		for ( int i = 0; i < in_count; i++ )
		{
			in_func();
		}

		std::cout << "[ TDD END : elapsed time(" << pfm.get() << ") ]" << std::endl;
	}
};

}
}

#endif _PERFORMANCE_HELPER_H_