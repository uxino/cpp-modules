#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("") , sign(false), req_signGrade(150), req_execGrade(150) {}

const char* Form::GradeTooHighException:: what() const throw()
{
	return ("Grade too high");
}

const char* Form::GradeTooLowException:: what() const throw()
{
	return ("Grade too low");
}

bool Form::getSign()
{
	return (this->sign);
}
Form& Form::operator = (Form const &cpy)
{
    this->sign = cpy.sign;
    std::cout << "Form copy constructor called." << std::endl;
    return (*this);
}

Form::Form(const std::string name, int to_sign, int execute) : name(name), req_signGrade(to_sign), req_execGrade(execute)
{
	if (to_sign < 1 || req_execGrade < 1)
		throw GradeTooHighException();
	if (to_sign > 150 || req_execGrade > 150)
		throw GradeTooLowException();
	this->sign = false;
}

void Form::beSigned(const Bureaucrat &bu)
{
	if (bu.getGrade() > this->getGrade())
		throw(GradeTooLowException());
	std::cout << "The form has been signed." << std::endl;
	this->sign = true;
}

const std::string Form::getName() const
{
	return (this->name);
}
Form::Form(const Form &cpy): name(cpy.getName()), sign(cpy.sign), req_signGrade(cpy.req_signGrade), req_execGrade(cpy.req_execGrade)
{
	*this = cpy;
	std::cout << "Form copy contructor called." << std::endl;
}

int	Form::getGrade() const
{
	return (this->req_signGrade);
}
std::ostream &operator << (std::ostream &output, const Form &b)
{
    output << "Name " << b.getName() << ", Form grade " << b.getGrade();
    return output;
}

Form::~Form()
{
	std::cout << "Form destructor called." << std::endl;
}