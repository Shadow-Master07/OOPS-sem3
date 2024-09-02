#include <iostream>
#include <string>

class Person
{
    protected:
        std::string m_name;
        int m_age;
        std::string m_address;

    public:
        Person(std::string name, int age, std::string address)
        {
            m_name = name;
            m_age = age;
            m_address = address;
        }
        virtual void displayInfo()
        {
            std::cout << "Name: " << m_name << "\nAge: " << m_age << "\nAddress: " << m_address << std::endl;
        }
};

class Student : virtual public Person
{
    protected:
        std::string m_studentID;
        std::string m_major;
        float m_gpa;

    public:
        Student(std::string name, int age, std::string address, std::string studentID, std::string major, float gpa)
            : Person (name, age, address)
        {
            m_studentID = studentID;
            m_major = major;
            m_gpa = gpa;
        }
        virtual void displayInfo() override
        {
            Person::displayInfo();
            std::cout << "Student ID: " << m_studentID << "\nMajor: " << m_major << "\nGPA: " << m_gpa << std::endl;
        }
};

class Employee : virtual public Person
{
    protected:
        std::string m_employeeID;
        std::string m_department;

    public:
        Employee(std::string name, int age, std::string address, std::string employeeID, std::string department)
            : Person (name, age, address)
        {
            m_employeeID = employeeID;
            m_department = department;
        }
        virtual void displayInfo() override
        {
            Person::displayInfo();
            std::cout << "Employee ID: " << m_employeeID << "\nDepartment: " << m_department << std::endl;            
        }
};

class Teacher : public Employee
{
    protected:
        std::string m_subject;
        float m_salary;

    public:
        Teacher(std::string name, int age, std::string address, std::string employeeID, std::string department, std::string subject, float salary)
            : Person(name, age, address), Employee (name, age, address, employeeID, department)
        {
            m_subject = subject;
            m_salary = salary;
        }

        virtual void displayInfo() override
        {
            Employee::displayInfo();
            std::cout << "Subject: " << m_subject << "\nSalary: " << m_salary << std::endl;
        }
};

class Staff : public Employee
{
    protected:
        std::string m_role;
        int m_workHours;

    public:
        Staff(std::string name, int age, std::string address, std::string employeeID, std::string department, std::string role, int workHours)
            : Person(name, age, address), Employee (name, age, address, employeeID, department)
        {
            m_role = role;
            m_workHours = workHours;
        }

        virtual void displayInfo() override
        {
            Employee::displayInfo();
            std::cout << "Role: " << m_role << "\nWork Hours: " << m_workHours << std::endl;            
        }
};

class ResearchAssistant : public Student, public Teacher
{
    protected:
        std::string m_researchArea;

    public:
        ResearchAssistant(std::string name, int age, std::string address, std::string employeeID, std::string department, std::string subject, float salary, std::string studentID, std::string major, float gpa, std::string researchArea)
            : Person(name, age, address), Student(name, age, address, studentID, major, gpa), Teacher(name, age, address, employeeID, department, subject, salary), m_researchArea(researchArea)
        {}

        void displayInfo() override
        {
            std::cout << "Name: " << m_name << std::endl;
            std::cout << "Age: " << m_age << std::endl;
            std::cout << "Address: " << m_address << std::endl;
            std::cout << "Employee ID: " << m_employeeID << std::endl;
            std::cout << "Department: " << m_department << std::endl;
            std::cout << "Subject: " << m_subject << std::endl;
            std::cout << "Salary: " << m_salary << std::endl;
            std::cout << "Student ID: " << m_studentID << std::endl;
            std::cout << "Major: " << m_major << std::endl;
            std::cout << "GPA: " << m_gpa << std::endl;
            std::cout << "Research Area: " << m_researchArea << std::endl;
        }
};

int main()
{
    ResearchAssistant r1("John Doe", 26, "Here and there", "567abc", "CSE", "HCI GT", 10000, "c35123", "Physics of games", 2.4, "UI/UX");
    r1.displayInfo();
    return 0;
}