#include <string>
#include <iostream>
#include "file_init.h"
#include "prob_gen.h"

using namespace std;

int main() {

int questions_to_gen;
string name;

cout << "How many questions do you want generated? (1-100)" << endl;
cin >> questions_to_gen;

cout << "What file do you want the questions saved to?" << endl;
cin >> name;

init_file file;
file.setFileName(name);

cout << file.getFileName() << endl;

return 0;
}
