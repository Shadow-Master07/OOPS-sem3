#include <iostream>
#include <string>

class Employee
{
    protected:
        float m_base = 36000;

    public:
        virtual float calculatePay()
        {
            return -1;
        }
};

class FullTimeEmployee : public Employee
{
    public:
        virtual float calculatePay() override
        {
            float hours;
            std::cout << "Number of overtime hours they worked? ";
            std::cin >> hours;
            return m_base * (1 + hours/8.0);
        }
};

class PartTimeEmployee : public Employee
{
    public:
        virtual float calculatePay() override
        {
            int hours;
            std::cout << "Number of hours they worked? ";
            std::cin >> hours;
            return m_base * 1 + hours * 800;
        }
};

int main()
{
    return 0;
}