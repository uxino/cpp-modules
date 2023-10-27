#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using std::cout;
using std::string;
using std::endl;
class Contact
{
	private:
		string first_name;
		string last_name;
		string nickname;
		string phone_number;
		string darkest_secret;
	public:
		Contact();
		void set_contact(string f_n, string l_n, string n_n, string p_n, string d_s);
		string get_name(void);
		string get_last_name(void);
		string get_nickname(void);
		string get_phone_number(void);
		string get_darkest_secret(void);
};

#endif