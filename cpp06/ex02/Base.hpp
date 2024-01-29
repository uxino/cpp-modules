#pragma once
#include <iostream>
#include <cmath>

#include <iostream>
#include <cstdlib>
#include <unistd.h>
class Base
{
	public:
		virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);