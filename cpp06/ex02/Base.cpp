#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
Base::~Base(){}

Base* generate(void)
{
	Base *base;

	int number = rand() % 3;
	printf("number : %d\n", number);
	if (number == 0)
		base = new A;
	else if(number == 1)
		base = new B;
	else
		base = new C;
	return (base);
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A is the identified type by pointer" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B is the identified type by pointer" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C is the identified type by pointer" << std::endl;	
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A is the identified type by referance" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B& b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B is the identified type by referance" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C is the identified type by referance" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}