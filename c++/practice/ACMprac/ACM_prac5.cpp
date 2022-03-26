#include <iostream>
#include <cmath>
#include <vector> 

using namespace std;

float terrain(string ch, string animal);

int main() {

double s_dist, t_dist, h_dist;
float loc_dist, deltaX, deltaY;
int start_x = 0, start_y = 0, end_x, end_y;

string terrain_ch;
int lines;
cin >> lines;

    for(int i = 0; i < lines; i++) {
	cin >> terrain_ch >> end_x >> end_y;
	
	// distance formula to determine distance
	deltaY = end_y - start_y;
	deltaX = end_x - start_x;
	loc_dist = sqrt((pow(deltaX, 2)) + (pow(deltaY,2)));

	s_dist += (loc_dist * terrain(terrain_ch, "s"));
	t_dist += (loc_dist * terrain(terrain_ch, "t"));
	h_dist += (loc_dist * terrain(terrain_ch, "h"));

	// set new start coordinates
	start_x = end_x;
	start_y = end_y;
    }

	//logic
	if(s_dist == t_dist || s_dist == h_dist || t_dist == h_dist) {
	cout << "TIE" << endl; }	
	else if(s_dist > t_dist && s_dist > h_dist) {
	cout << "S" << endl; }
	else if(t_dist > h_dist) {
	cout << "T" << endl; }
	else {
	cout << "H" << endl; }
}

float terrain(string ch, string animal) {

if(animal == "s") {
    if(ch == "F") {
	return 6; }
    else if(ch == "B") {
	return 10; }
    else {
	return 4; }
     }
else if(animal == "t") {
    if(ch == "F") {
	return 7; }
    else if(ch == "B") {
	return 4; }
    else {
	return 10; }
     }
else {
    if(ch == "F") {
	return 10; }
    else if(ch == "B") {
	return 6; }
    else {
	return 4; }
     }
}

