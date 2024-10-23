
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat
{
    private:
    Bureaucrat();
    const std::string _name;
    int _grade;

    public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &model);
    Bureaucrat& operator=(const Bureaucrat &model);
    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();

    class GradeTooLowException : public std::exception
    {
        public:
        virtual const char* what() const throw();
    };

    class GradeTooHighException : public std::exception
    {
        public:
        virtual const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs);

#endif