#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string	_target;
    PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &source);
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &source);
    virtual ~PresidentialPardonForm();

	std::string getTarget() const;
	virtual void execute(Bureaucrat const &executor) const;
};

#endif