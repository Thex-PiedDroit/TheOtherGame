
#pragma once

#include "types.hpp"


namespace JFF { namespace Generics
{
	const i32 SECONDS = 1000;

	const u32 SCREEN_SIZE_X = 640;
	const u32 SCREEN_SIZE_Y = 480;

	template<typename T>
	T* CreateBuffer(size_t size)
	{
		auto* buffer = new T[size];

		for (u32 i = 0; i < size; ++i)
			buffer[i] = 0;

		return buffer;
	}
}}
