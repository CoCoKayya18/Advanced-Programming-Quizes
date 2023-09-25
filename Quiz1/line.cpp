#include <iostream>
#include <cmath>

using namespace std;

class Line
{
public:

   Line(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0) : _x1(x1), _y1(y1), _x2(x2), _y2(y2){}
  ~Line(){};
    
    float length () const
  {
    return sqrt(pow(_x2-_x1,2)+pow(_y2-_y1,2));
  }

  void print () const
  {
    cout << "First point is at is at (" << _x1 << ", " << _y1
      << ") and the second point is at is at (" << _x2 << ", " << _y2 << ")" << endl;
  }
private:
  float _x1;
  float _y1;
  float _x2;
  float _y2;

};
