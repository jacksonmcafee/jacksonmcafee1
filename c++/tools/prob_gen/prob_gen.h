#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class prob_gen {
private:
	int problems;
	string prob_type;
public:
	string generateProblem();
	void typeSelect(string temp);

	void setProblems(int);
	int getProblems();
};
