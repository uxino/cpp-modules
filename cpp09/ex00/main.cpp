#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
    BitcoinExchange a;

    if (argc != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return (0);
    }
    a.data_read(argv[1]);
}