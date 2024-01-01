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