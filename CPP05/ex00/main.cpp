#include "Bureaucrat.hpp"

int main( void )
{
    try
    {
        Bureaucrat Bureaucrat("toto", 151);
        std::cout << Bureaucrat << std::endl;

        Bureaucrat.decrementGrade();
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
}