#include "Intern.hpp"

const char* Intern::unknowForm:: what() const throw()
{
	return ("Unknown form name.");
}

AForm *Intern::makeForm(const std::string &name, const std::string &target)
{
	if (name == "shrubbery creation")
		return (new ShrubberyCreationForm(target));
	else if (name == "robotomy request")
		return (new RobotomyRequestForm(target));
	else if (name == "presidential pardon")
		return (new PresidentialPardonForm(target));
	else
		throw (Intern::unknowForm());
}

Intern::Intern()
{
}

Intern::Intern(const Intern &cpy)
{
	*this = cpy;
}
Intern& Intern::operator = (Intern const &cpy)
{
	(void)cpy;
	return (*this);
}

Intern::~Intern()
{
}
