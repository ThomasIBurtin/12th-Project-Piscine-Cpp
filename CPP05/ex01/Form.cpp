#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name, const int gradeSign, const int gradeExec) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& model) : _name(model._name), _gradeSign(model._gradeSign), _gradeExec(model._gradeExec)
{
    *this = model;
}

Form::~Form()
{

}

Form&   Form::operator=(const Form& model)
{
    this->_signed = model._signed;
    return *this;
}

std::string Form::getName() const
{
    return this->_name;
}

bool   Form::getSigned() const
{
    return this->_signed;
}

int   Form::getGradeToSign() const
{
    return this->_gradeSign;
}

int   Form::getGradeToExecute() const
{
    return this->_gradeExec;
}

void    Form::beSigned()
{
    this->_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade Form too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade Form too low");
}

std::ostream&   operator<<(std::ostream& o, const Form& rhs)
{
    o << "--------------------------" << std::endl;
    o << "Form name: " << rhs.getName() << std::endl
      << "Grade to sign: " << rhs.getGradeToSign() << std::endl
      << "Grade to execute: " << rhs.getGradeToExecute();
    return o;
}