#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
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

void Bureaucrat::executeForm(AForm const & form)
{
    form.execute(*this);
    std::cout << this->name << " executed " << form.getName() << std::endl;
}

void Bureaucrat::signForm(AForm &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->name << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->name << " couldn't sign " << f.getName() <<" because " << e.what() << std::endl;
	}
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