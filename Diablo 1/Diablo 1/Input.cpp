#include <iostream>

namespace Utilities
{
	namespace Input
	{
		int AskForInteger(int aMinValue, int aMaxValue)
		{
			int entry = 0;
			bool askForNumber = true;

			while (askForNumber)
			{
				std::cout << ">>";
				std::cin >> entry;

				if (std::cin.fail() || entry < aMinValue || entry > aMaxValue)
				{
					std::cin.clear();
					std::cin.ignore(100, '\n');

					std::cout << "Not a valid option" << std::endl;
				}
				else
				{
					askForNumber = false;
				}
			}

			std::cin.clear();
			std::cin.ignore(10000, '\n');

			return entry;
		}
	}
}