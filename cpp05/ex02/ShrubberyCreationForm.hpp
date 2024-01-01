#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string  target);
        ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
        ShrubberyCreationForm &operator = (const ShrubberyCreationForm &cpy);
        ~ShrubberyCreationForm();
        void beSigned(const Bureaucrat &bu);
};