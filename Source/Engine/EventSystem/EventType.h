
#pragma once


namespace JFF
{
	struct EventType
	{
	public:

		int m_value;

		EventType(int value)
			: m_value(value)
		{

		}


	private:

		EventType() = delete;
	};
}
