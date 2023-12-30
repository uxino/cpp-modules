#include "Bureaucrat.hpp"

int main(){

	try
	{
		Bureaucrat esad("esad", 149);
		esad.decrement();
		std::cout << esad << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}