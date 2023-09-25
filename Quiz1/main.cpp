#include <iostream>
#include "stack.cpp"
#include "matrix.cpp"
#include "queue.cpp"
#include "line.cpp"
#include "point.cpp"
#include <list>


int main(){

//POINT TESTING//

  Point p1 (-3, 4);
  cout << "p = ";
  p1.print ();
  cout << ", p.norm() = " << p1.norm () << endl;
  p1.negate ();
  cout << "p = ";
  p1.print ();
  cout << ", p.norm() = " << p1.norm () << endl;

  Point p2 (-8, 3);
  Point p22=p2;
  cout << "p = ";
  p22.print ();
  cout << ", p.norm() = " << p2.norm () << endl;
  p2.negate ();
  cout << "p = ";
  p2.print ();
  cout << ", p.norm() = " << p2.norm () << endl;

  Point p3 (0, 0);
  cout << "p = ";
  p3.print ();
  cout << ", p.norm() = " << p3.norm () << endl;
  p3.negate ();
  cout << "p = ";
  p3.print ();
  cout << ", p.norm() = " << p3.norm () << endl;

  Point p4 (1, -1);
  cout << "p = ";
  p4.print ();
  cout << ", p.norm() = " << p4.norm () << endl;
  p4.negate ();
  cout << "p = ";
  p4.print ();
  cout << ", p.norm() = " << p4.norm () << endl;

  Point p5;
  cout << "p = ";
  p5.print ();
  cout << ", p.norm() = " << p5.norm () << endl;
  p5.negate ();
  cout << "p = ";
  p5.print ();
  cout << ", p.norm() = " << p5.norm () << endl;

//POINT TESTING//

//LINE TESTING//

/*
Line l1 (0, 0, 3, 4);
  l1.print ();

Line l2 (0, 0, 1, 1);
  l2.print ();

Line l3;
  l3.print ();

Line l4 (1, 2, 3, 4);
    Line l5 = 4;
    l5.print ();

*/
//LINE TESTING//

//QUEUE TESTING WITH WORDS//

/*
 Queue q1;
  q1.enqueue ('a');
  q1.enqueue ('b');
  q1.enqueue ('c');
  while (!q1.isEmpty ())
    {
      char x = q1.dequeue ();
      cout << " delete " << x <<  endl;
    }

Queue q2;
  q2.enqueue ('z');
  q2.enqueue ('c');
  q2.enqueue ('x');
  
  while (!q2.isEmpty ())
    {
      char x = q2.dequeue ();
      cout << " delete " << x << endl;
    }

Queue q3;

  while (!q3.isEmpty ())
    {
      char x = q3.dequeue ();
      cout << " " << x;
    }

  Queue q4;
  q4.enqueue ('0');

  while (!q4.isEmpty ())
    {
      char x = q4.dequeue ();
      cout << " " << x;
    }

  */

 //QUEUE TESTING WITH WORDS//

 //QUEUE TESTING WITH NUMBERS//

/*
  Queue q1;
  q1.enqueue (44);
  q1.enqueue (77);
  q1.enqueue (22);
  while (!q1.isEmpty ())
    {
      int x = q1.dequeue ();
      cout << " " << x;
    }

  Queue q2;
  q2.enqueue (-22);
  q2.enqueue (11);
  q2.enqueue (44); 
  q2.enqueue (133);
  q2.enqueue (-22);
  q2.enqueue (11); 
  while (!q2.isEmpty ())
    {
      int x = q2.dequeue ();
      cout << " " << x;
    }


  Queue q3;

  while (!q3.isEmpty ())
    {
      int x = q3.dequeue ();
      cout << " " << x;
    }

  Queue q4;
  q4.enqueue (0);

  while (!q4.isEmpty ())
    {
      int x = q4.dequeue ();
      cout << " " << x;
    }
*/

//QUEUE TESTING WITH NUMBERS//



/*

//STACK TESTING//
    Stack s1;
    s1.push (44);
    s1.push (77);
    s1.push (22);

    while (!s1.isEmpty ())
        {
            int x = s1.pop ();
            cout << " " << x;
        }

    Stack s2;
    s2.push (11);
    s2.push (-22);
    s2.push (133);
    s2.push (44);
    s2.push (11);
    s2.push (-22);

    while (!s2.isEmpty ())
    {
        int x = s2.pop ();
        cout << " " << x;
    }

    Stack s3;

    while (!s3.isEmpty ())
    {
        int x = s3.pop ();
        cout << " " << x;
    }

    Stack s4;
    s4.push (0);
    while (!s4.isEmpty ())
    {
        int x = s4.pop ();
        cout << " " << x;
    }
//STACK TESTING//


//MATRIX TESTING//

Matrix m (2, -5, 1, -3);
  m.print ();
  cout << "m.det() = " << m.det () << endl;
  if (!m.isSingular()) 
  {
     Matrix mm = m.inverse ();
     mm.print ();
  }

Matrix m1 (1, 0, 0, 1);
  m1.print ();
  cout << "m.det() = " << m1.det () << endl;
  if (!m1.isSingular()) 
  {
     Matrix mm1 = m1.inverse ();
     mm1.print ();
  }

Matrix m2 (1, 0, 1, 0);
  m2.print ();
  cout << "m.det() = " << m2.det () << endl;
  if (!m2.isSingular())  
  {
     Matrix mm2 = m2.inverse ();
     mm2.print ();
  }

Matrix m3 (1, 0, 0, 2);
  m3.print ();
  cout << "m.det() = " << m3.det () << endl;
  if (!m3.isSingular())  
  {
     Matrix mm3 = m3.inverse ();
     mm3.print ();
  }

Matrix m4;
  m4.print ();
  cout << "m.det() = " << m4.det () << endl;
  if (!m4.isSingular()) 
  {
     Matrix mm4 = m4.inverse ();
     mm4.print ();
  } 

//MATRIX TESTING//
*/

}
