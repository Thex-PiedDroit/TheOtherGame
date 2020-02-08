
#include <SFML/System.hpp>


namespace JFF
{
	/*static*/ class Time
	{
	public:

		static inline void RestartDeltaTimeClock() { deltaTime = deltaTimeClock.restart().asSeconds(); }

		static inline float GetDeltaTime() { return deltaTime; }


	private:

			static sf::Clock deltaTimeClock;
			static float deltaTime;
	};
}
