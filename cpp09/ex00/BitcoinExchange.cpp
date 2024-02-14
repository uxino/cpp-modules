#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}


BitcoinExchange::~BitcoinExchange(){}

void firstLineError()
{
	std::cout << "ValueError: The first line of the file should be 'data | value'." << std::endl;
	exit (1);
};

int OutOfRange()
{
	std::cout << "Error: not a positive number." << std::endl;
	return (1);
}

int NotPositive()
{
	std::cout << "Error: not a positive number." << std::endl;
	return (1);
}

int BadInput(std::string &date)
{
	std::cout << "Error: bad input => " << date << std::endl;
	return (1);
}

int TooLarge()
{
	std::cout << "Error: too large a number." << std::endl;
	return (1);
}

void BitcoinExchange::exchange(const char *arg)
{
    std::ifstream file(arg);
    std::string line;
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
		std::getline(iss, date, '|');
		std::getline(iss, value, '|');
		if (date.find("date") != std::string::npos)
			continue;
		std::cout << date  << value << std::endl;
		argRead[date] = stof(value);
    }
    file.close();
}

void BitcoinExchange::data_read(const char *arg)
{
    std::ifstream file(arg);
    std::string line;
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
		if (date.find("date") != std::string::npos)
			continue;
		csvRead[date] = stof(value);
    }
    file.close();
}