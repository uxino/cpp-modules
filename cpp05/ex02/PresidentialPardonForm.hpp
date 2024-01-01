#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
private:
    std::string target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string  target);
    PresidentialPardonForm(const PresidentialPardonForm &cpy);
    PresidentialPardonForm &operator = (const PresidentialPardonForm &cpy);
    void beSigned(const Bureaucrat &bu);
    ~PresidentialPardonForm();

};