#include <iostream>
#include <cmath>

using namespace std;


class Point
{
public:
  
  Point(double x = 0, double y = 0) : _x(x), _y(y){}
  ~Point(){};


  double norm () const
  {
    return sqrt (_x * _x + _y * _y);
  }
  void print () const
  {
    cout << "(" << _x << ", " << _y << ")";
  }
  void negate ()
  {
    _x = -_x;
    _y = -_y;
  }
private:
  double _x;
  double _y;
};