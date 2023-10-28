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
    cout << endl << "     index|      name|  lastname|  nickname|";
    cout << endl << "--------------------------------------------" << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << std::setw(10) << i << "|";
		if (this->contacts[i].get_name().length() > 9)
			cout << std::setw(10) << this->contacts[i].get_name().substr(0,9) + "." << "|";
		else
			cout << std::setw(10) << this->contacts[i].get_name() << "|";
		if (this->contacts[i].get_last_name().length() > 9)
			cout << std::setw(10) << this->contacts[i].get_last_name().substr(0,9) + "." << "|";
		else
			cout << std::setw(10) << this->contacts[i].get_last_name() << "|";
		if (this->contacts[i].get_nickname().length() > 9)
			cout << std::setw(10) << i << "|" << this->contacts[i].get_nickname().substr(0,9) + "." << "|" << endl;
		else
			std::cout << std::setw(10) << this->contacts[i].get_nickname() << "|" << endl;
	}
	while (1)
	{
		cout << "Please write index that you want to show." << endl;
		
		if (std::cin >> index)
		{
			std::cin.ignore(1,'\n');
			if (index >=0 && index <=7)
			{
				cout << "index|name|surname|nickname|phone_number|darkest_secret|" << endl;
				cout << "    " << index << "|   " << this->contacts[index].get_name() << "|      "\
				<< this->contacts[index].get_last_name() << "|       " << this->contacts[index].get_nickname() << "|           " \
				<< this->contacts[index].get_phone_number() << "|             " << this->contacts[index].get_darkest_secret() << "|" << endl;
				break;
			}
			else
				std::cout << "Invalid input. Please enter a valid index." << std::endl;
		}
		else {
            std::cout << "Invalid input. Please enter a valid index." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        }
	}
}

void PhoneBook::exit_(void)
{
	exit(1);
}

