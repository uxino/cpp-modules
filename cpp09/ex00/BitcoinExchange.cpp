#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}


BitcoinExchange::~BitcoinExchange()
{

}

void BitcoinExchange::split(std::map<std::string, float> &arg, std::string &str)
{
    std::string first;
    std::string second;
    int split_node = 0;
    std::map<std::string, float>::iterator it;

    it = arg.begin();
    for (int i = 0; i < str.length(); ++i)
        if (str[i] == ',')
            start = i;
    it->first = str.substr(0,split_node);
    it->second = strtof(str.substr(split_node, str.length()), NULL);
    std::cout << "it->first: " << it->first << std::endl;
}

void BitcoinExchange::data_read(char *arg)
{
    std::ifstream   file;
    std::string     line;
    std::map<std::string, float>::iterator it;

    it = this->first_read.begin();
    file.open(arg);
    std::getline(file, line);
    while (line)
    {
        split(this->first_read, line);
        std::getline(file, line);
    }
}