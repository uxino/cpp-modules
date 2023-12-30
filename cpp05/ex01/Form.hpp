#pragma once

#include <iostream>
class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				sign;
		const int 			req_signGrade;
		const int			req_execGrade;

	public:
		Form(const std::string name, int sign, int execute);
		Form();
		~Form();
		void beSigned(const Bureaucrat &bu);
		Form(const Form &cpy_fixed);
		Form& operator = (Form const &cpy);
		const std::string getName() const;
		int	getGrade() const;
		bool getSign();
		class GradeTooLowException : public std::exception{
			virtual const char* what()const throw();
		};
		class GradeTooHighException : public std::exception{
			virtual const char* what()const throw();
		};
};

std::ostream &operator << (std::ostream &output, const Bureaucrat &b);
