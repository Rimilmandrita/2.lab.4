// Queue implementation using arrays
#include <iostream>
using namespace std;
#define MAX_SIZE 101 

class Queue
{
private:
  int A[MAX_SIZE];  // array to store the stack
	int front,rear;   // variable to mark the front and rear of stack. 
public:
	// constructor
    Queue()
	{   front=0;
		rear= -1; // for empty array
	}

	// Operation to insert an element at rear of queue. 
	void Insert(int x) 
	{
	  if(rear== MAX_SIZE -1) 
	  { // overflow case. 
			cout<<"Error: Queue is full\n";
			return;
		}
		A[++rear] = x;
	}
 
	// Operation to remove an element from front of queue.
	void Delete() 
	{
		if(rear<front) 
		{ // If stack is empty, pop should throw error. 
			cout<<"Error: No element to delete\n";
			return;
		}
		front++;
	}
 
	
 
	
	
	// This will print all the elements in the stack at any stage. 
	void Print() {
		int i;
		cout<<"Queue: ";
		for(i = front;i<=rear;i++)
			cout<<A[i]<<"->";
	cout<<"NULL\n";
	}
};

int main()
{
    // Code to test the implementation. 
    // calling Print() after each push or pop to see the state of stack. 
	Queue S;
	S.Insert(2);S.Print();
	S.Insert(5);S.Print();
	S.Insert(10);S.Print();
	S.Delete();S.Print();
	S.Insert(12);S.Print();
}
