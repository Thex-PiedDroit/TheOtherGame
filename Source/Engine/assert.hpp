
#pragma once

#include "defines.h"
#include <exception>
#include <iostream>
#include <sstream>
#include <string>


namespace JFF
{
	class AssertionFailureException : public std::exception
	{
	public:

		AssertionFailureException(std::string const& message)
		{
			std::cerr << message << '\n';
		}

		AssertionFailureException(char const* expression, char const* file, int line, std::string const& message)
		{
			std::ostringstream outputStream;

			if (!message.empty())
				outputStream << message << ":\n";

			outputStream << "Assertion \"" << expression << "\"";
			outputStream << " failed in file\n\"" << file << " : " << line << "\"";

			std::cerr << outputStream.str() << '\n';
		}
	};

#ifdef WITH_DEBUG
	#define throw_assert(EXPRESSION, MESSAGE) if(!(EXPRESSION)) { throw JFF::AssertionFailureException(#EXPRESSION, __FILE__, __LINE__, MESSAGE); }
	constexpr auto throw_assertNotReached(std::string const& message) { return throw JFF::AssertionFailureException(message); }
#else
	#define throw_assert(EXPRESSION, MESSAGE) ((void)0)
	constexpr auto throw_assertNotReached(std::string const&) { }
#endif
}
