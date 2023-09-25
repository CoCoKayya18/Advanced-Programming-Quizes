#include <iostream>

using namespace std;

class Queue
{

public:

    Queue(){}
    ~Queue(){};

  void enqueue (const int &item)
  {
    if(isFull()){
        //cout << endl<< "Queue is full!!";
                } 
    else {
        //if(front == -1) front = 0;
        rear++;
        front++;
        a[rear] = item;
        //cout << item << " \n";
        }
    }

  int dequeue ()
  { 
    //int value;
    if(isEmpty()){
        cout << "Queue is empty!!" << endl; 
        return(-1); } 
    
    else {
      int item = a[deleteCounter]; 
      if(front >= rear){      //only one element in queue
          front --;
          rear --;
          deleteCounter ++;
          //cout << "Item: " << item << " Coutner: " << deleteCounter << endl;
          //cout << "here -- " << " front: " << front << " rear: " << rear << endl;
          return(item);
                      } 
      else {
          front++;
          deleteCounter --;
          //cout << "here11111 front: " << front << " rear: " << rear << endl;
          return(NULL);
                      }
          //cout  << "Deleted => " << item << " from myqueue" << endl;
                }
    }

  bool isEmpty ()
  {
    if(front == -1){
        //cout << "EMPTY front: " << front << " rear: " << rear << endl;
        return true; }
    else {
      //cout << "NOT EMPTY YET front: " << front << " rear: " << rear << endl;
      return false;
    }
  }

  bool isFull () const
  {
    if(front == 0 && rear == size - 1){
      //cout << "FULL front: " << front << " rear: " << rear << endl;
        return true;
                }
    else{
      //cout << "NOT FULL YET front: " << front << " rear: " << rear << endl;
      return false;
    }
        
    }

private:
  int size = 10;                     // size of array
  int front = -1;                    // front of queue
  int rear = -1;                     // rear of queue
  int a[1000];                       // array to hold queue items
  int deleteCounter = 0;
};
