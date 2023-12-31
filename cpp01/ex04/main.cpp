#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Please give 4 argument!!" << std::endl;
    std::string filename = argv[1];
    std::string oldWord = argv[2];
    std::string newWord = argv[3];

    std::ifstream inputFile(filename);
    std::string fileContents;

    if (inputFile.is_open())
	{
        std::string line;
        while (std::getline(inputFile, line))
            fileContents += line + '\n';
        inputFile.close();

        size_t pos = 0;
        while ((pos = fileContents.find(oldWord, pos)) != std::string::npos)
		{
            fileContents.replace(pos, oldWord.length(), newWord);
            pos += newWord.length();
        }
        std::ofstream outputFile(filename);
        if (outputFile.is_open())
		{
            outputFile << fileContents;
            outputFile.close();
            std::cout << "Changed succesfully!!." << std::endl;
        }
		else
            std::cout << "The file can't open!!." << std::endl;
    }
	else
        std::cout << "The file can't open!!." << std::endl;
    return 0;
}
