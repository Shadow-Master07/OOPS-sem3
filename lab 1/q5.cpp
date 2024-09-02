// Question 5

#include <iostream>
#include <string>

class Date
{
    private:
        std::string m_day;
        std::string m_month;
        std::string m_year;
    
    public:
        Date(std::string day, std::string month, std::string year);
        void setDate(std::string day, std::string month, std::string year);
        void getDate();
};

void Date::setDate(std::string day, std::string month, std::string year)
{
    m_day = day;
    m_month = month;
    m_year = year;
}

void Date::getDate()
{
    std::cout << m_day << " " << m_month << ", " << m_year << std::endl;
}

Date::Date(std::string day, std::string month, std::string year)
{
    setDate(day, month, year);
}

int main()
{
    Date d1("12", "dec", "2024");
    d1.getDate();
    return 0;
}