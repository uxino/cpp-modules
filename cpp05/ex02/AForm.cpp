#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("") , sign(false), req_signGrade(150), req_execGrade(150) {}

const char* AForm::GradeTooHighException:: what() const throw()
{
	return ("Grade too high");
}

const char* AForm::GradeTooLowException:: what() const throw()
{
	return ("Grade too low");
}

const char* AForm :: FormNotSigned ::what() const throw()
{
    return ("Form is not signed!");
}
void AForm::execute(Bureaucrat const & executor) const
{
    if (!(this->sign))
        throw (FormNotSigned());
    if (this->req_execGrade < executor.getGrade())
        throw (GradeTooLowException());
}

bool AForm::getSign()
{
	return (this->sign);
}

AForm::AForm(const std::string name, int to_sign, int execute) : name(name), req_signGrade(to_sign), req_execGrade(execute)
{
	if (to_sign < 1 || req_execGrade < 1)
		throw GradeTooHighException();
	if (to_sign > 150 || req_execGrade > 150)
		throw GradeTooLowException();
	this->sign = false;
}

void AForm::beSigned(const Bureaucrat &bu)
{
	if (bu.getGrade() > this->getGrade())
		throw(GradeTooLowException());
	std::cout << "The form has been signed." << std::endl;
	this->sign = true;
}

int  AForm::get_req_sign() const
{
    return (this->req_signGrade);
}
int AForm::get_req_exec() const
{
    return (this->req_execGrade);
}

const std::string AForm::getName() const
{
	return (this->name);
}
AForm::AForm(const AForm &cpy): name(cpy.getName()), sign(cpy.sign), req_signGrade(cpy.req_signGrade), req_execGrade(cpy.req_execGrade)
{
	*this = cpy;
	std::cout << "AForm copy contructor called." << std::endl;
}
AForm& AForm::operator = (AForm const &cpy)
{
    this->sign = cpy.sign;
    std::cout << "Form copy constructor called." << std::endl;
    return (*this);
}

int	AForm::getGrade() const
{
	return (this->req_signGrade);
}
std::ostream &operator << (std::ostream &output, const AForm &b)
{
    output << "Name " << b.getName() << ", AForm grade " << b.getGrade();
    return output;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called." << std::endl;
}