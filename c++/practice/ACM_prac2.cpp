#include <iostream> 
#include <string>
#include <sstream>

using namespace std;

int main() {

int p_count, h_count, s_count, w_count;
int lines, temp_int;
char temp_char, loc_char;

cin >> lines;

for(int i = 0; i < lines; i++) {

cin >> loc_char >> temp_int;

if(loc_char == 'P') {
p_count += temp_int; }
else if(loc_char == 'H') {
h_count += temp_int; }
else if(loc_char == 'S') {
s_count += temp_int; }
else {
w_count += temp_int; }
}

if(p_count > h_count && p_count > s_count && p_count > w_count) {
cout << 'P' << endl; }
else if(h_count > s_count && h_count > w_count) {
cout << 'H' << endl; }
else if(s_count > w_count) {
cout << 'S' << endl; }
else {
cout << 'W' << endl; }

}
