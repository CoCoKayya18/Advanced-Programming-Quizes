#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265358979;

class Shape
{
    public:
      virtual float area () = 0;
};


class TwoDimensional:public Shape
{
    public:
        virtual float perimeter () = 0;
};


class ThreeDimensional:public Shape
{
    public:
        virtual float volume () = 0;
};


class Circle:public TwoDimensional
{
public:
  Circle (float r):radius (r)
  {
  }
// put code here

    float area()
    {
        return pow(radius,2)*PI;
    }

    float perimeter()
    {
        return 2*radius*PI;
    }

private:
  float radius;
};


class Rectangle:public TwoDimensional
{
public:
  Rectangle (float h, float w): height (h), width (w)
  {
  }
// put code here

    float area()
    {
        return height*width;
    }

    float perimeter()
    {
        return 2*height + 2*width;
    }

private:
  float height;
  float width;
};


class Triangle:public TwoDimensional
{
public:
  Triangle (float a, float b, float c): side_a (a), side_b (b), side_c (c)
  {
  	s=(side_a+side_b+side_c)/2; //semi parameter
    
  }
// put code here

    float area()
    {
        return sqrt(s*(s-side_a)*(s-side_b)*(s-side_c));
    }

    float perimeter()
    {
        return s*2;
    }

private:
  float side_a;
  float side_b;
  float side_c;
  float s;
};


class Cone:public ThreeDimensional
{
public:
  Cone (float r, float h):radius (r), height (h)
  {
  }
// put code here

    float area()
    {
        return (PI*pow(radius,2) + PI*radius*sqrt(pow(radius,2)+pow(height,2)));
    }

    float volume()
    {
        return (pow(radius,2)*height*PI)/3;
    }

private:
  float radius, height;
};


class Box:public ThreeDimensional
{
public:
  Box (float w, float h, float d):width (w), height (h), depth (d)
  {
  }
// put code here

    float area()
    {
        return 2*width*depth + 2*width*height + 2*depth*height;
    }

    float volume()
    {
        return width*height*depth;
    }

private:
  float width, height, depth;
};


class Cylinder:public ThreeDimensional
{
public:
  Cylinder (float r, float h):radius (r), height (h)
  {
  }
// put code here

    float area()
    {
        return 2*PI*pow(radius,2) + 2*PI*radius*height;
    }

    float volume()
    {
        return PI*pow(radius,2)*height;
    }

private:
  float radius, height;
};


class Sphere:public ThreeDimensional
{
public:
  Sphere (float r):radius (r)
  {
  }
// put code here

    float area()
    {
        return 4*PI*pow(radius,2);
    }

    float volume()
    {
        return (4.0/3.0)*PI*pow(radius,3);
    }

private:
  float radius, height;
};

