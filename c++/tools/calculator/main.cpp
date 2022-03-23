#include "functions.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

functions calc;
double temp1, temp2;
int op;

cout << "Input your two numbers and then an operation." << endl; 
cout << "(1) Add 	(2) Subtract \n";
cout <<	"(3) Multiply   (4) Divide \n";
cout <<	"(5) Square     (6) Square Root \n";
cout <<	"(7) Any Root \n";
cout << "Hit return/enter a second time if you are squaring/square rooting\n";

cin >> temp1 >> temp2 >> op;

switch(op) {
	case 1:
	    calc.add(temp1, temp2);
	    break;
	case 2:
	    calc.sub(temp1, temp2);
	    break;
	case 3:
	    calc.mult(temp1, temp2);
	    break;
	case 4:
	    calc.divide(temp1, temp2);
	    break;
	case 5:
	    calc.square(temp1);
	    break;
	case 6:
	    calc.square_root(temp1);
	    break;
	case 7:
	    calc.any_root(temp1, temp2);
	    break;
    }

cout << "The solution is " << calc.getAnswer() << endl;
}
