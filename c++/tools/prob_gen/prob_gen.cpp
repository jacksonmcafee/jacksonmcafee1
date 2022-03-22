#include "prob_gen.h"
#include <cstdlib>
#include <string> 

using namespace std;

const string variables[6] = {"a", "b", "c", "x", "y", "z"};

string prob_gen::generateProblem() {
    string a = to_string((rand() % 10));
    string b = to_string((rand() % 10));
    string c = to_string((rand() % 10));
    string d = to_string((rand() % 10));
    int format = rand() % 5;
    string problem_string;
    string myVar = variables[(rand() % 7)];
    switch(format) {
	case 1:
	    problem_string = a+myVar+" = "+b;
	    break;
	case 2:
	    problem_string = a+myVar+" + "+b+" = "+c+" + "+d+myVar;
	    break;
	case 3:
	    problem_string = a+"("+myVar+"+"+b+")"+" = "+c+myVar+" - "+ d;
	    break;
	case 4:
	    problem_string = a+"("+b+"-"+myVar+" = "+c+myVar+ " + "+d;
	    break;
	case 5:
	    problem_string = a+myVar+" - "+b+" = "+c+myVar+ " - "+ myVar;
	    break;	    
	default:
	    problem_string = a+myVar+" + "+b+ " = "+ d;
	};   
	// debug

    return problem_string; 
}

void prob_gen::setProblems(int prob_num) {
    problems = prob_num;
}

int prob_gen::getProblems() {
    return problems;
}
