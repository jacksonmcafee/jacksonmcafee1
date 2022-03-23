#include <string>

class functions {
private:
	double answer;
public:
	double square_root(double);
	double any_root(double, double);
	double square(double);
	double mult(double, double);
	double divide(double, double);
	double add(double, double);
	double sub(double, double);

	double getAnswer() {
	    return answer; }
};
