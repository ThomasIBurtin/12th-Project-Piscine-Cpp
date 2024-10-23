#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "intern.hpp"

int main()
{
	Bureaucrat john("John", 5);
	Bureaucrat jim("Jim", 85);

	std::cout << john << std::endl;
	std::cout << jim << std::endl;

	Intern intern;

	AForm* formA;
	AForm* formB;

	try
	{
		formA = intern.makeForm("shrubbery creation", "home");
		formB = intern.makeForm("robotomy request", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	john.executeForm(*formA);
	jim.executeForm(*formA);
	john.signForm(*formA);
	jim.signForm(*formA);
	john.executeForm(*formA);
	jim.executeForm(*formA);
	std::cout << "-------------------------------------------------------" << std::endl;
	john.executeForm(*formB);
	jim.executeForm(*formB);
	john.signForm(*formB);
	jim.signForm(*formB);
	john.executeForm(*formB);
	jim.executeForm(*formB);

	delete formA;
	delete formB;
}