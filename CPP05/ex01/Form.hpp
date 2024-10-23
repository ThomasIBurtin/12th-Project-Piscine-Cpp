#ifndef FORM_HPP
#define FORM_HPP
# include <iostream>

class Bureaucrat;

class Form
{
private:
    const std::string   _name;
    bool                _signed;
    const int           _gradeSign;
    const int           _gradeExec;
    Form();

public:
    Form(const std::string name, int gradeToSign, int gradeToExecute);
    Form(const Form& model);
    Form& operator=(const Form& model);
    ~Form();

    std::string getName() const;
    bool        getSigned() const;
    int         getGradeToSign() const;
    int         getGradeToExecute() const;

    void        beSigned();

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
};

std::ostream&   operator<<(std::ostream& o, const Form& rhs);

#endif