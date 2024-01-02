#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>
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
		void execute(Bureaucrat const &executor) const;
        void beSigned(const Bureaucrat &bu);
};