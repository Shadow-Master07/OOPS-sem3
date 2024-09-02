// Question 3

#include <iostream>

class Employee
{
    private:
        std::string m_name;
        std::string m_eID;
        float m_salary;
    
    public:
        float calculateSalary(float performance);
        void setSalary(float performance);
        Employee(std::string name, std::string eID, float salary);
};

Employee::Employee(std::string name, std::string eID, float salary)
{
    m_name = name;
    m_eID = eID;
    m_salary = salary;
}

float Employee::calculateSalary(float performance)
{
    return ( ( 1 + performance ) * m_salary );
}

void Employee::setSalary(float performance)
{
    m_salary = calculateSalary(performance);
}

int main()
{
    Employee e1("John Doe", "0x0133707", 20000);
    std::cout << "New salary will be: " << e1.calculateSalary(1.5) << std::endl;
    e1.setSalary(1.5);


    return 0;
}