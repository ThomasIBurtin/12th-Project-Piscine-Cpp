#ifndef FORM_HPP
#define FORM_HPP
# include <iostream>

class Bureaucrat;

class AForm
{
private:
    const std::string   _name;
    bool                _signed;
    const int           _gradeSign;
    const int           _gradeExec;
    AForm();

public:
    AForm(const std::string name, int gradeToSign, int gradeToExecute);
    AForm(const AForm& model);
    AForm& operator=(const AForm& model);
    virtual ~AForm();

    std::string getName() const;
    bool        getSigned() const;
    int         getGradeToSign() const;
    int         getGradeToExecute() const;

    void beSigned();
    virtual void execute(Bureaucrat const &executor) const = 0;

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
    class NotSignedException : public std::exception
    {
		public:
			virtual const char* what() const throw();
	};
};

std::ostream&   operator<<(std::ostream& o, const AForm& rhs);

#endif