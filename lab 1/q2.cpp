// Question 2

#include <iostream>
#include <string>
#include <cassert>

class Student
{
    private:
        std::string m_name;
        std::string m_class;
        int m_roll;
        float m_marks;
    
    public:
        Student(std::string name, std::string className, int rollNumber, float marks);
        void studentInfo();
        char calculateGrade();

};

Student::Student(std::string name, std::string className, int rollNumber, float marks)
{
    m_name = name;
    m_class = className;
    m_roll = rollNumber;
    m_marks = marks;
}

void Student::studentInfo()
{
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "Class: " << m_class << std::endl;
    std::cout << "Roll: " << m_roll << std::endl;
    std::cout << "Marks: " << m_marks << std::endl;
    std::cout << "Grade: " << calculateGrade() << std::endl;
}

char Student::calculateGrade()
{
    assert(m_marks <= 10);
    if ( (m_marks >= 9) && (m_marks < 10) )
    {
        return 'A';
    }
    else if ( (m_marks >= 8) && (m_marks < 9) )
    {
        return 'B';
    }
    else if ( (m_marks >= 6) && (m_marks < 8) )
    {
        return 'C';
    }
    else if ( (m_marks >= 4) && (m_marks < 6) )
    {
        return 'D';
    }
    else if ( (m_marks >= 2) && (m_marks < 4) )
    {
        return 'E';
    }
    else
    {
        return 'F';
    }
}

int main()
{
    Student s1("John Doe", "B.Tech", 20, 5.15);
    s1.studentInfo();
    return 0;
}