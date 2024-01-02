#include "PresidentialPardonForm.hpp"

PresidentialPardonForm :: PresidentialPardonForm() : AForm("PresidentialPardonForm",25,5)
{
    this->target = "";
}
PresidentialPardonForm :: PresidentialPardonForm(std::string  target) : AForm("PresidentialPardonForm",25,5)
{
    this->target = target;
}
PresidentialPardonForm :: PresidentialPardonForm(const PresidentialPardonForm &cpy) : AForm(cpy)
{
}

PresidentialPardonForm& PresidentialPardonForm :: operator=(const PresidentialPardonForm &cpy)
{
    this->target = cpy.target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	this->AForm::execute(executor);
	if (this->req_execGrade < executor.getGrade())
		throw AForm::GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::beSigned(const Bureaucrat &bu)
{
    if (bu.getGrade() > this->get_req_sign())
        throw(GradeTooLowException());
    std::cout << "The form has been signed." << std::endl;
    this->sign = true;
}
PresidentialPardonForm :: ~PresidentialPardonForm()
{
}