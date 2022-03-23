#include "functions.h"
#include <cmath>

double functions::square_root(double obj1)  {  
    float x = 1;

    while(abs(x*x - obj1) >= 0.001)
        x = ((obj1/x + x) / 2);
    answer = x;
    return answer;
}

double functions::any_root(double obj, double root) { 
    return answer;
}


double functions::square(double obj) {
    answer = (obj * obj);
    return answer;
}

double functions::mult(double obj1, double obj2) {
    answer = (obj1 * obj2);
    return answer;
}

double functions::divide(double obj1, double obj2) {
    answer = (obj1 / obj2);
    return answer;
}

double functions::add(double obj1, double obj2) {
    answer = (obj1 + obj2);
    return answer;
}

double functions::sub(double obj1, double obj2) {
    answer = (obj1 - obj2);
    return answer;
}
