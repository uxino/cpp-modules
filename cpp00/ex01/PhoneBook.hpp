#ifndef  PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int id;
	public:
		PhoneBook();
		void add(void);
		void search(void);
		void exit_(void);
		void show_variables(void);
};

#endif