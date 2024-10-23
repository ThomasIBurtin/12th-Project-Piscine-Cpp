#include "manage_file.hpp"

int main(int argc, char **argv)
{
	if(argc != 4)
		return(0);
	manage instance(argv[1], argv[2], argv[3]);
	if(instance.readFile() == 1)
		return(1);

	return(0);
}