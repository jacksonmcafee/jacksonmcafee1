#include <string>
#include <iostream>
#include "file_init.h"
#include "prob_gen.h"

using namespace std;

void data_collection(int*, string*, string*);

int main() {

int questions_to_gen;
string fname, problem_type;

// passes to data collect
data_collection(&questions_to_gen, &fname, &problem_type);

// passes to init_file class to create file
init_file file;
file.setFileName(fname);
if(!file.FileCreated()) {
    file.CreateFile();
}

// passes to prob_gen to generate problems
prob_gen gen;
for(int i = 0; i < questions_to_gen; i++) {
    file.AddToFile(gen.generateProblem() + " \n");
}

return 0;
}

// collects userdata, just decluttering main
void data_collection(int* q_num, string* filename, string* diff) {
string temp;

cout << "How many questions do you want generated? (1-100)" << endl;
cin >> *q_num;

cout << "What file do you want the questions saved to?" << endl;
cin >> *filename;

cout << "What is your desired problem type?" << endl;
if(temp != "easy" || temp != "medium" || temp != "hard") {
cout << "Pick easy, medium, or hard" << endl;
cin >> temp;
	}

*diff = temp;

}
