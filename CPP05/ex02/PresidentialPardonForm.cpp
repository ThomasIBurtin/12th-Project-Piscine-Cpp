#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &source) : AForm(source), _target(source._target)
{

}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &source)
{
	AForm::operator=(source);
	_target = source._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() 
{

}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void		PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const
{
	if (this->getSigned() == false)
		throw NotSignedException();
	if (bureaucrat.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}