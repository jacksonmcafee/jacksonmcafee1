#include <iostream>
#include "stack.h"

using namespace std;

int main() {
	Stack<int> myStack;
	Stack<int> altStack;
	
	for (int i = 0; i < 10; i++) {
		myStack.Push(i);
	}

	myStack.printStack();

	for (int i = 0; i < 5; i++) {
		myStack.Pop();
	}

	myStack.printStack();

	altStack = myStack;

	altStack.printStack();

	return 0;
}