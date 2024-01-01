#pragma once
#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string name;
		int	grade;
	public:
		Bureaucrat(const std::string name, int grade);
		const std::string	getName() const;
		int					getGrade() const;
		~Bureaucrat();
		void signForm(AForm &f);
		Bureaucrat(const Bureaucrat &cpy_fixed);
		Bureaucrat& operator = (Bureaucrat const &cpy);
		void increment();
		void decrement();
        void executeForm(AForm const & form);
		class GradeTooLowException : public std::exception{
			virtual const char* what()const throw();
		};
		class GradeTooHighException : public std::exception{
			virtual const char* what()const throw();
		};
};

std::ostream &operator << (std::ostream &output, const Bureaucrat &b);
