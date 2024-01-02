#pragma once
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;

class Intern
{
	public:
    	Intern();
    	Intern(std::string  target);
    	Intern(const Intern &cpy);
    	Intern &operator = (const Intern &cpy);
    	~Intern();
		AForm *makeForm(const std::string &name, const std::string &target);
		class unknowForm : public std::exception
		{
			virtual const char* what()const throw();
		};
};
