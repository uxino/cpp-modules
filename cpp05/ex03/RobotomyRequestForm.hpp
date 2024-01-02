#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <random>
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
	void execute(Bureaucrat const &executor) const;
    void beSigned(const Bureaucrat &bu);
};