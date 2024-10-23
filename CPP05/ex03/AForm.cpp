#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string name, const int gradeSign, const int gradeExec) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw AForm::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& model) : _name(model._name), _signed(model._signed), _gradeSign(model._gradeSign), _gradeExec(model._gradeExec)
{

}

AForm::~AForm()
{

}

AForm&   AForm::operator=(const AForm& model)
{
    this->_signed = model._signed;
    return *this;
}

std::string AForm::getName() const
{
    return this->_name;
}

bool   AForm::getSigned() const
{
    return this->_signed;
}

int   AForm::getGradeToSign() const
{
    return this->_gradeSign;
}

int   AForm::getGradeToExecute() const
{
    return this->_gradeExec;
}

void    AForm::beSigned()
{
    this->_signed = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade Form too high");
}
const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade Form too low");
}
const char* AForm::NotSignedException::what() const throw()
{
    return ("Form not signed !!!");
}

std::ostream&   operator<<(std::ostream& o, const AForm& rhs)
{
    o << "Form name: " << rhs.getName() << std::endl
      << "Grade to sign: " << rhs.getGradeToSign() << std::endl
      << "Grade to execute: " << rhs.getGradeToExecute();
    return o;
}