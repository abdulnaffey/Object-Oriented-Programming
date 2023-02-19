#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area() const = 0;
    virtual double volume() const = 0;
};

class TwoDimensionalShape : public Shape
{

};

class ThreeDimensionalShape : public Shape
{

};

class Circle : public TwoDimensionalShape
{
private:
    double radius;

public:
    Circle(double r) : radius(r)
    {

    }

    double area() const
    {
        return 3.14159 * radius * radius;
    }

    double volume() const
    {
        return 0;
    }
};

class Square : public TwoDimensionalShape
{
private:
    double sideLength;

public:
    Square(double l) : sideLength(l)
    {

    }

    double area() const
    {
        return sideLength * sideLength;
    }

    double volume() const
    {
        return 0;
    }
};
class Triangle : public TwoDimensionalShape
{
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h)
    {

    }

    double area() const
    {
        return (base * height) / 2;
    }

    double volume() const
    {
        return 0;
    }
};

class Sphere : public ThreeDimensionalShape
{
private:
    double radius;

public:
    Sphere(double r) : radius(r)
    {

    }

    double area() const
    {
        return 0;
    }

    double volume() const
    {
        return (4.0 / 3.0) * 3.14159 * radius * radius * radius;
    }
};

class Cube : public ThreeDimensionalShape
{
private:
    double sideLength;

public:
    Cube(double l) : sideLength(l)
    {

    }

    double area() const
    {
        return 0;
    }

    double volume() const
    {
        return sideLength * sideLength * sideLength;
    }
};
class Tetrahedron : public ThreeDimensionalShape
{
private:
    double edge;

public:
    Tetrahedron(double e) : edge(e)
    {

    }

    double area() const
    {
        return 0;
    }

    double volume() const
    {
        return (edge * edge * edge) / 8.4;
    }
};