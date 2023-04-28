#include "queue.h"
#include "testQueue.h"
/*
Ma 1 
Programmer: Kyan Kotschevar-Smead
Cpts 223
Sping 2023
*/
/*(15 pts – 3 pts / attribute) Using your understanding of design choices, software
principles, and coding standards, which we will group under the general label
“attributes” – listand describe 5 attributes demonstrated by the code that you
would consider poor.These should NOT be related to the syntax errors.Examples
of poor attributes could be related to comments, file structure, data structure
selection, algorithm efficiency, etc.Place your list in a comment block at the top of
the main.cpp file
*/
/*
1. Numerous conceptual errors such as inserting in the rear and identifying peek as rear. this is a queue not stack
2. placing everything in main is a poor descision becuase main should be a summery of your program.
3. Not implmenting test cases or field testing before countinuing to code like in this code
4. Array implmentation of queue. it limits the capabilitys and doesnt require a class just a little bit of logic. IE use stricts and nodes
5. Making all member varibles public. This is bad as we dont want to accidently change them during the process.
*/
// main function
int main()
{
	
	// call your test functions here!
	testQueue testobject;
	testobject.testSize();
	testobject.testIsEmpty();
	testobject.testIsFull();
	testobject.testEnqueue();
	testobject.testdequeue();
	testobject.testPeek();

	return 0;
}