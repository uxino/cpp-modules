#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	Harl harl;

    if (!std::cin.good())
	{
        std::cout << std::endl;
		return (0);
	}
	harl.complain(argv[1]);
	return (0);
}