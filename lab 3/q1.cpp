#include <iostream>

class Shape
{
    public:
        virtual float calculateArea()
        {
            return -1;
        }
};

class Circle : public Shape
{
    protected:
        float m_radius;

    public:
        Circle(float radius)
            : m_radius{radius}
        {}

        virtual float calculateArea() override
        {
            return (m_radius * m_radius) * 3.1415926535;
        }
};

class Rectangle : public Shape
{
    protected:
        float m_height;
        float m_width;
    
    public:
        Rectangle(float width, float height)
            : m_height{height}, m_width{width}
        {}

        virtual float calculateArea() override
        {
            return (m_height * m_width);
        }
};

class Triangle : public Shape
{
    protected:
        float m_base;
        float m_height;

    public:
        Triangle(float base, float height)
            : m_base{base}, m_height{height}
        {}

        virtual float calculateArea() override
        {
            return (m_base * m_height) * 0.5;
        }
};

int main()
{
    Triangle t1(2,5);
    std::cout << "Area of triangle: " << t1.calculateArea();

    return 0;
}