#include "prob_gen.h"
#include <cstdlib>
#include <string> 

int random(int min, int max) //range : [min, max]
{
   static bool first = true;
   if (first) 
   {  
      srand( time(NULL));
      first = false;
   }
   return min + rand() % (( max + 1 ) - min);
}

using namespace std;

const string variables[6] = {"a", "b", "c", "x", "y", "z"};

string prob_gen::generateProblem() {
    string a = to_string(random(1,10)), b = to_string(random(1,10));
    string c = to_string(random(1,10)), d = to_string(random(1,10));
    int format = random(1,5);
    string problem_string;
    string myVar = variables[random(0,5)];
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
	    problem_string = a+"("+b+"-"+myVar+") = "+c+myVar+ " + "+d;
	    break;
	case 5:
	    problem_string = a+myVar+" - "+b+" = "+c+myVar+ " - "+ myVar;
	    break;	    
	default:
	    problem_string = a+myVar+" + "+b+ " = "+ d;
	};   

    return problem_string; 
}

void prob_gen::typeSelect(string temp) {
    if(temp != prob_type) {
    	prob_type = temp; }
}

void prob_gen::setProblems(int prob_num) {
    problems = prob_num;
}

int prob_gen::getProblems() {
    return problems;
}
