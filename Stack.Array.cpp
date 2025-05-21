#include <iostream>
#include "stackarray.h"
using namespace std;


int main() {
    stackArray<int> intStack;
    intStack.push(10);
    intStack.push(15);
    intStack.push(5);
    intStack.push(20);
    intStack.push(30);

    int poppedInt;
    intStack.pop(poppedInt);
    cout << "Popped from int stack: " << poppedInt << endl;

    if (intStack.IsEmpty()) {
        cout << "The stack is empty" << endl;
    }
    else {
        cout << "The stack is not empty" << endl;
    }
	intStack.MakeEmpty();

    return 0;
}