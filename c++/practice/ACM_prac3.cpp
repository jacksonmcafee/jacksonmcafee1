#include <iostream> 
#include <string>
#include <vector>

using namespace std;

int main() {

vector<char> char_vec;
int active_count = 0, letter_count = 0;
int S_num, F_num;
string message;
char temp;

cin >> S_num >> F_num >> message;

    while(temp != '!') {
	temp = message[active_count];
	
	if(temp == 'S') {
	    active_count += S_num;
	    // debug
		}
	else if (temp == 'F') {
	    active_count -= F_num; 
	    // debug	
		}
	else if (temp == '!') {
	    // debug
		}
	else {
	    char_vec.push_back(temp);
    	    active_count += 1; }
	letter_count++; 
    }

PRINT:
for(int i = 0; i < char_vec.size(); i++) {
cout << char_vec[i]; }
cout << endl;
return 0;
}
