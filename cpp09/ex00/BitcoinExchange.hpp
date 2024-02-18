#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>
class BitcoinExchange
{
    private:
        std::map<std::string, float> csvRead;
		std::map<std::string, float> argRead;
    public:
        BitcoinExchange();
        BitcoinExchange& operator=(const BitcoinExchange &arg);
        BitcoinExchange(const BitcoinExchange &cpy);
        ~BitcoinExchange();
        void data_read();
		void exchange(const char * arg);
		void parser(std::string first, double second);
		void double_it_and_give_it_the_next_person(std::string date,double value);
};
