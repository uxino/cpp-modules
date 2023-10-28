#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		Zombie(std::string name);
		void announce(void);
		void setname(std::string name);
		~Zombie();
};

Zombie* zombieHorde(int N, std::string name);
#endif