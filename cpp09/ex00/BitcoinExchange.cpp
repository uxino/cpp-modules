#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}


BitcoinExchange::~BitcoinExchange(){}

void BitcoinExchange::split(std::map<std::string, float> &arg, std::string &str)
{
    std::string first;
    std::string second;
    int split_node = 0;
    std::map<std::string, float>::iterator it;

    it = arg.begin();
    for (int i = 0; i < str.length(); ++i)
        if (str[i] == ',')
            split_node = i;
    it->first = str.substr(0,split_node);
    it->second = std::wcstof(str.substr(split_node, str.length()));
    std::cout << "it->first: " << it->first << std::endl;
}

void BitcoinExchange::data_read(char *arg)
{
    std::ifstream file(arg);
    std::string line;

    if (!file.is_open())
    {
        std::cerr << "Dosya açma hatası: " << arg << std::endl;
        return;
    }

    while (std::getline(file, line)) {
        split(this->first_read, line);
    }

    file.close();
}