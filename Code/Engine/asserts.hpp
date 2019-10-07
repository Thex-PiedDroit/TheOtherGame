
#pragma once

#include "Engine/defines.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>


namespace JFF
{
	inline void _Assert(char const* const expression, char const* const file, int line, std::string const& message = "")
	{
		fprintf(stderr, "Assertion failed: '%s', in file '%s' line '%d'.\n%s", expression, file, line, (message + "\n").c_str());
		abort();
	}

	#ifdef WITH_DEBUG

		#define AssertSimple(EXPRESSION) (EXPRESSION ? ((void)0) : _Assert(#EXPRESSION, __FILE__, __LINE__))
		#define Assert(EXPRESSION, MESSAGE) (EXPRESSION ? ((void)0) : _Assert(#EXPRESSION, __FILE__, __LINE__, MESSAGE))
		#define AssertNotReached() Assert(false, "This part of the code was not supposed to be reached.")

	#else

		#define AssertSimple(EXPRESSION, MESSAGE) ((void)0)
		#define Assert(EXPRESSION, MESSAGE) ((void)0)
		#define AssertNotReached() ((void)0)

	#endif
}
