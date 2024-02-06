#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>
class BitcoinExchange
{
    private:
        std::map<std::string, float> first_read;
    public:
        BitcoinExchange();
        BitcoinExchange& operator=(const BitcoinExchange &arg);
        BitcoinExchange(const BitcoinExchange &cpy);
        ~BitcoinExchange();
        void data_read(char *arg);
};