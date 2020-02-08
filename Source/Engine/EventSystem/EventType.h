
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

		bool operator== (EventType const& other) const;
		bool operator!= (EventType const& other) const;


	private:

		EventType() = delete;
	};
}
