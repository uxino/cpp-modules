#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdio>
int main()
{
    AForm *f = new RobotomyRequestForm("elma");
    AForm *f1 = new ShrubberyCreationForm("armut");
    AForm *f2 = new PresidentialPardonForm("araba");
    Bureaucrat s("Bureaucrat", 35);
    s.signForm(*f);
    s.signForm(*f1);
    s.signForm(*f2);
    try
    {
        s.executeForm(*f);
        s.executeForm(*f1);
        s.executeForm(*f2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}