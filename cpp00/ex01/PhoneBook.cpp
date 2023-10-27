#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->id = 0;
}

void PhoneBook::add(void)
{
	string f_n;
	string l_n;
	string n_n;
	string p_n;
	string d_s;
	while (1)
	{
		cout << "First Name: ";
		std::getline(std::cin, f_n);
		if (f_n.empty())
			continue;
		cout << "Last Name: ";
		std::getline(std::cin, l_n);
		if (l_n.empty())
			continue;
		cout << "Nick Name: ";
		std::getline(std::cin, n_n);
		if (n_n.empty())
			continue;
		cout << "Phone Number: ";
		std::getline(std::cin, p_n);
		if (p_n.empty())
			continue;
		cout <<"Darkest Secret: ";
		std::getline(std::cin, d_s);
		if (d_s.empty())
			continue;
		this->contacts[this->id++].set_contact(f_n,l_n,n_n, p_n, d_s);
		if (this->id == 8)
			this->id = 0;
		break;
	}
}

void PhoneBook::search(void)
{
	int	index;
    cout << endl << "     index|     name|     surname|     nickname|";
    cout << endl << "------------------------------------------------" << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << "         " << i << "|        " << this->contacts[i].get_name() << "|         "\
			<< this->contacts[i].get_last_name() << "|              " << this->contacts[i].get_nickname() << "|" << endl;
	}
	while (1)
	{
		cout << "Please write index that you want to show." << endl;
		std::cin >> index;
		if (index >=0 && index <=8)
		{
			cout << "index|name|surname|nickname|phone_number|darkest_secret|" << endl;
			cout << "    " << index << "|   " << this->contacts[index].get_name() << "|      "\
			<< this->contacts[index].get_last_name() << "|       " << this->contacts[index].get_nickname() << "|           " \
			<< this->contacts[index].get_phone_number() << "|             " << this->contacts[index].get_darkest_secret() << "|" << endl;
			break;
		}
		else
		{
			cout << "Please right input!! (0<8)" << endl;
			continue;
		}
	}
}

void PhoneBook::exit_(void)
{
	exit(1);
}

