#include "testQueue.h"
using namespace std;

void testQueue::testSize() {
	queue i;
	i.enqueue(4);
	i.enqueue(2);
	i.enqueue(73);
	if (i.size() == 3) {
		cout << "Size test Passed" << endl;
	
	}
	else {
		cout << "Size test failed" << endl;
	}
}

void testQueue::testIsEmpty() {
	queue i;
	if (i.isEmpty()) {
		cout << "IsEmpty test Passed" << endl;

	}
	else {
		cout << "isEmpty test failed" << endl;
	}
}
void testQueue::testIsFull() {
	queue b;
	for (int i = 0; i < 10; i++) //10 is defined as max
	{
		b.enqueue(i);
	}
	if (b.isFull()) {
		cout << "isFull test passed" << endl;
	}
	else {
		cout << "isFull test failed" << endl;
	}
}

void testQueue::testPeek() {
	
	queue p;
	p.enqueue(1);
	p.enqueue(2);
	p.enqueue(3);
	if (p.peek() == 1) {
		cout << "Peek test 1 passed" << endl;
	}
	else {
		cout << "Peek test 1 failed" << endl;
	}
	queue i;
	if (i.peek() == NULL) {
		cout << "Peek test 2 passed" << endl;
	}
	else {
		cout << "peek test 2 failed" << endl;
	}
}

void testQueue::testEnqueue() {
	queue p;
	p.enqueue(72);
	if (p.peek() == 72) {
		cout << "Enqueue test1  passed" << endl;
	}
	else
	{
		cout << "Enqueue test1  failed" << endl;
	}
	p.enqueue(23);
	if (p.size() == 2) {
		cout << "Enqueue test2 passed" << endl;
	}
	else {
		cout << "Enqueue test2  failed" << endl;
	}
}
void testQueue::testdequeue() {
	queue p;
	p.enqueue(23);
	p.enqueue(3);
	p.enqueue(2);
	p.dequeue();
	if (p.peek() == 3) {
		cout << "Dequeue test 1 passed" << endl;
	}
	else {
		cout << " Dequeue test 1 failed" << endl;
	}
	if (p.size() == 2) {
		cout << "Dequeue test 2 passed" << endl;
	}
	else {
		cout << "Dequeue test 1 failed" << endl;
	}
}
