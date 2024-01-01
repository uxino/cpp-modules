#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
private:
    std::string target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string  target);
    RobotomyRequestForm(const RobotomyRequestForm &cpy);
    RobotomyRequestForm &operator = (const RobotomyRequestForm &cpy);
    ~RobotomyRequestForm();
    void beSigned(const Bureaucrat &bu);
};