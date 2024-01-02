#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    protected:
		const std::string	name;
		bool				sign;
		const int 			req_signGrade;
		const int			req_execGrade;

	public:
		AForm(const std::string name, int sign, int execute);
		AForm();
		~AForm();
		virtual void beSigned(const Bureaucrat &bu) = 0;
        virtual int	getGrade() const;
        AForm(const AForm &cpy_fixed);
        virtual const std::string getName() const;
        AForm& operator = (AForm const &cpy);
        bool getSign();
        virtual int get_req_sign() const;
        virtual int get_req_exec() const;
        virtual void execute(Bureaucrat const &executor) const = 0;
		class GradeTooLowException : public std::exception{
			virtual const char* what()const throw();
		};
		class GradeTooHighException : public std::exception{
			virtual const char* what()const throw();
		};
        class FormNotSigned : public std::exception{
            virtual const char* what() const throw();
        };
};

std::ostream &operator << (std::ostream &output, const Bureaucrat &b);
