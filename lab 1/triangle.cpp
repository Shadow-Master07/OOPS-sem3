// Question 1

#include <iostream>

class Triangle
{
    private:
        float m_a;
        float m_b;
        float m_c;

    private:
        bool m_isEquilateral();
        bool m_isIsosceles();
        bool m_isScalene();

    public:
        Triangle(float a, float b, float c);
        void triangleType();
    
};

Triangle::Triangle(float a, float b, float c)
{
    m_a = a;
    m_b = b;
    m_c = c;
}

bool Triangle::m_isEquilateral()
{
    return ((m_a == m_b) && (m_b == m_c));
}

bool Triangle::m_isIsosceles()
{
    if(m_a == m_b)
    {
        return (true && (m_a != m_c));
    }
    else if(m_b == m_c)
    {
        return (true && (m_b != m_c));
    }
    else if(m_a == m_c)
    {
        return (true && (m_c != m_b));        
    }
    else
    {
        return false;
    }
}

bool Triangle::m_isScalene()
{
    return ( (m_a != m_b) && (m_a != m_c) );
}

void Triangle::triangleType()
{
    if (m_isEquilateral())
    {
        std::cout << "Equilateral triangle" << std::endl;
        return;
    }
    if (m_isIsosceles())
    {
        std::cout << "Isosceles triangle" << std::endl;        
        return;
    }
    if (m_isScalene())
    {
        std::cout << "Scalene triangle" << std::endl;
        return;
    }
}

int main()
{
    Triangle t1(3, 4, 5);
    t1.triangleType();

    return 0;
}


