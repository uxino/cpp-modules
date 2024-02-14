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
        void data_read(const char *arg);
		void exchange(const char * arg);
};

int OutOfRange();
int NotPositive();
int BadInput(std::string &date);
int TooLarge();
void firstLineError();