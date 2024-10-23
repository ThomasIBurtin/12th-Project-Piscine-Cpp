#ifndef MANAGE_FILE_HPP
# define MANAGE_FILE_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>

class manage
{
	public:
	manage(std::string filename, std::string s1, std::string s2);
	~manage();

	int readFile();
	
	private:
	std::ifstream _inputFile;
	std::ofstream _outputFile;
	std::string _s1;
	std::string _s2;

};

#endif