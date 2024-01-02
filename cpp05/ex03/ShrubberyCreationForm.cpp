#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm :: ShrubberyCreationForm() : AForm("ShrubberyCreationForm",145,137)
{
    this->target = "";
}
ShrubberyCreationForm :: ShrubberyCreationForm(std::string  target) : AForm("ShrubberyCreationForm",145,137)
{
    this->target = target;
}
ShrubberyCreationForm :: ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : AForm(cpy)
{
}

ShrubberyCreationForm& ShrubberyCreationForm :: operator=(const ShrubberyCreationForm &cpy)
{
    this->target = cpy.target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	this->AForm::execute(executor);
	std::ofstream ofs((this->target + "_shrubbery").c_str());
    ofs << "       _-_\n"
			"    /~~   ~~\\\n"
			" /~~         ~~\\\n"
			"{               }\n"
			" \\  _-     -_  /\n"
			"   ~  \\\\ //  ~\n"
			"_- -   | | _- _\n"
			"  _ -  | |   -_\n"
			"      // \\\\"
	<< std::endl;
    ofs.close();
	std::cout << this->target << " has been created." << std::endl;
}
void ShrubberyCreationForm::beSigned(const Bureaucrat &bu)
{
    if (bu.getGrade() > this->get_req_sign())
        throw(GradeTooLowException());
    std::cout << "The form has been signed." << std::endl;
    this->sign = true;
}

ShrubberyCreationForm :: ~ShrubberyCreationForm()
{
}