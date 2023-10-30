#include <iostream>
#include "Harl.hpp"

int main()
{
	Harl harl;
	std::string input;

	while (1)
	{
		std::cout << "Please enter a level: ";
		std::cin >> input;
		if (input == "exit")
			break;
        if (!std::cin.good())
		{
            std::cout << std::endl;
            break;
		}
		harl.complain(input);
	}
	return (0);
}