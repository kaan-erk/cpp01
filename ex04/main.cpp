#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: only <filename> <s1> <s2> are accepted" << std::endl;
		return (1);
	}
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.empty())
	{
		std::cout << "Error: s1 is empty" << std::endl;
		return (1);
	}
	std::ifstream inFile(av[1]);
	if (!inFile.is_open())
	{
		std::cout << "Error: could not open file " << av[1] << std::endl;
		return (1);
	}
	std::string outName = av[1];
	outName += ".replace";
	std::ofstream outFile(outName.c_str());
	if (!outFile.is_open())
	{
		std::cout << "Error: could not create output file" << std::endl;
		inFile.close();
		return (1);
	}
	std::string line;
    while (std::getline(inFile, line))
    {
        size_t index = 0;
        while ((index = line.find(s1, index)) != std::string::npos)
        {
            line.erase(index, s1.length());
            line.insert(index, s2);
            index += s2.length();
        }
        outFile << line;
        if (!inFile.eof())
            outFile << std::endl;
    }

    inFile.close();
    outFile.close();
    return 0;
}
