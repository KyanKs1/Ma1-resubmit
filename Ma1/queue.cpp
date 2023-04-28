#include "queue.h"
// Constructor to initialize queue
queue::queue(int size)
{
	arr = new int[size];
	capacity = size;
	front = 0;
	rear = -1;
	count = 0;
}

// Destructor to free memory allocated to the queue
queue::~queue()
{
	delete[] arr; // you are not required to test this function;
	// however, are there issues with it?
	//yes becuase are an array;
}

// Utility function to remove front element from the queue
void queue::dequeue()
{
	// check for queue underflow
	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}


	front = (front + 1) % capacity;
	count--;
}

// Utility function to add an item to the queue
void queue::enqueue(int item)
{
	// check for queue overflow
	if (isFull())
	{
		cout << "OverFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	rear = (rear + 1) % capacity;
	arr[rear] = item; //we are inserting an item not size;
	count++;
}

// Utility function to return front element in the queue
int queue::peek()
{
	if (isEmpty())
	{
		//for testing purposes lets NOT exit the program
		return NULL;
	}
	return arr[front]; // front not rear
}

// Utility function to return the size of the queue
int queue::size()
{
	return count;
	//change to count;
}

// Utility function to check if the queue is empty or not
bool queue::isEmpty()
{
	return (size() == 0);
}

// Utility function to check if the queue is full or not
bool queue::isFull()
{
	return (size() == capacity);
}