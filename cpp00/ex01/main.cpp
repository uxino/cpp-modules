#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phone_book;
	Contact contact;
	cout << "Welcome to virtual Phone Book:" << endl;
	while (1)
	{
		string input;
		cout << endl << "Please Enter a command:: ADD | SEARCH | EXIT: ";
		std::getline(std::cin, input);
		if (input.empty())
			continue;
		if (input == "ADD")
			phone_book.add();
		else if (input == "SEARCH")
			phone_book.search();
		else if (input == "EXIT")
			phone_book.exit_();
		else
			cout << "Please choose a correct command!! :" << endl;
	}
}