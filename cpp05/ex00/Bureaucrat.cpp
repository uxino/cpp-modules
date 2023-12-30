#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	std::cout << "Bureaucrat constructor called." << std::endl;
	try
	{
		if (grade > 150)
			throw(GradeTooHighException());
		if (grade < 1)
			throw(GradeTooLowException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called." << std::endl;
}

const std::string Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

const char* Bureaucrat::GradeTooHighException:: what() const throw()
{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException:: what() const throw()
{
	return ("Grade too low");
}

std::ostream &operator << (std::ostream &output, const Bureaucrat &b)
{
    output << "Name " << b.getName() << ", bureaucrat grade " << b.getGrade();
    return output;
}

Bureaucrat& Bureaucrat::operator = (Bureaucrat const &cpy)
{
	this->grade = cpy.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy_bureaucrat) : name(cpy_bureaucrat.name), grade(cpy_bureaucrat.grade)
{
	std::cout << "Bureaucrat copy constructor called." << std::endl;
}


void Bureaucrat::increment()
{
	if (this->grade == 1)
		throw(GradeTooHighException());
	else
		(this->grade)--;
}

void Bureaucrat::decrement()
{
	if (this->grade == 150)
		throw(GradeTooLowException());
	else
		(this->grade)++;
}