#include <iostream>

using namespace std;

class Stack
{

public:

 Stack(){} 
 ~Stack(){};
  
void push (const int &item)
 {
  top++;
  a[top] = item;
  //cout << "Pushed element: " << item << " onto the stack.\n" << endl; 
  //cout << item << endl;
 }

int pop ()
  {
    if (!isEmpty()) {
            poppedElement = a[top];
            top--;
            
            //cout << "Popped element: " << poppedElement << " from the stack.\n" << endl;
        }
        return poppedElement; }

bool isEmpty () const
  {
    return (top == -1);
  }

bool isFull () const
  {
    return (top == size - 1);}

private:
  int size;			// size of array
  int top = -1;			// top of stack
  int a[0];			// array to hold stack items
  int poppedElement;
};
