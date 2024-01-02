#include "RobotomyRequestForm.hpp"

RobotomyRequestForm :: RobotomyRequestForm() : AForm("RobotomyRequestForm",72,45)
{
    this->target = "";
}
RobotomyRequestForm :: RobotomyRequestForm(std::string  target) : AForm("RobotomyRequestForm",72,45)
{
    this->target = target;
}
RobotomyRequestForm :: RobotomyRequestForm(const RobotomyRequestForm &cpy) : AForm(cpy)
{
}

RobotomyRequestForm& RobotomyRequestForm :: operator=(const RobotomyRequestForm &cpy)
{
    this->target = cpy.target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	this->AForm::execute(executor);
	std::cout << "hebele hübele noise" << std::endl;
   	srand(time(0));
    if (rand() % 2 == 0)
        std::cout << this->target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->target << " robotomy failed" << std::endl;
}

void RobotomyRequestForm::beSigned(const Bureaucrat &bu)
{
    if (bu.getGrade() > this->get_req_sign())
        throw(GradeTooLowException());
    std::cout << "The form has been signed." << std::endl;
    this->sign = true;
}

RobotomyRequestForm :: ~RobotomyRequestForm()
{
}