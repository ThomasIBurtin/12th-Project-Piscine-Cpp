
#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &model) : _name(model._name), _grade(model._grade)
{

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &model)
{
    this->_grade = model._grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{

}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void    Bureaucrat::incrementGrade()
{
    if ( _grade - 1 < 1 )
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void    Bureaucrat::decrementGrade()
{
    if ( _grade + 1 > 150 )
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

void		Bureaucrat::signForm(AForm &form)
{
	try
    {
        if (this->getGrade() > form.getGradeToSign())
            throw Bureaucrat::GradeTooLowException();
		form.beSigned();
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
    {
		std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form) const
{
	try
    {
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << "." << std::endl;
	}
	catch (std::exception &e)
    {
		std::cout << this->_name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade Bureaucrat too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade Bureaucrat too low");
}

std::ostream& operator<<( std::ostream& o, const Bureaucrat& rhs )
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return o;
}