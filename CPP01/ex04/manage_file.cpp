
#include "manage_file.hpp"

manage::manage(std::string filename, std::string s1, std::string s2)
    : _inputFile((filename).c_str()),  _outputFile(("replace" + filename).c_str()), _s1(s1), _s2(s2)
{

	if (!_inputFile.is_open())
	{
        std::cout << "Error: file not found" << std::endl;
		std::remove(("replace" + filename).c_str());
		exit(EXIT_FAILURE);
	}
}

int manage::readFile()
{
    std::string str;
    
    while(std::getline(_inputFile, str))
    {
        std::size_t pos = 0;
		if(!this->_s1.empty())
		{
			while(pos != std::string::npos)
			{
				pos = str.find(this->_s1, pos);
				if(pos != std::string::npos)
				{
					str.erase(pos, this->_s1.length());
					str.insert(pos, this->_s2);
					pos += this->_s2.length();
				}
			}
		}
        this->_outputFile << str << std::endl;
    }
    _inputFile.close();
    _outputFile.close();
    return 0;
}

manage::~manage()
{

}