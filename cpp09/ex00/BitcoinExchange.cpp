#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}


BitcoinExchange::~BitcoinExchange(){}


void BitcoinExchange::data_read(char *arg)
{
    std::ifstream file(arg);
    std::string line;
	int	a = 0;
    if (!file.is_open())
    {
        std::cerr << "File opening error: " << arg << std::endl;
        return;
    }

    while (std::getline(file, line))
	{
		std::istringstream iss(line);
		std::string date;
		std::string value;
		std::getline(iss, date, ',');
		std::getline(iss, value, ',');
		if (date == "date")
			continue;
		first_read[date] = stof(value);
		for (std::map<std::string, float>::iterator i = first_read.begin(); i != first_read.end(); i++)
		{
			std::cout << *i << std::endl;
		}
		
    }
    file.close();
}