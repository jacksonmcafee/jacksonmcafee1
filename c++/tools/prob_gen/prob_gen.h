#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class prob_gen {
private:
	int problems;
public:
	string generateProblem();

	void setProblems(int);
	int getProblems();
};
