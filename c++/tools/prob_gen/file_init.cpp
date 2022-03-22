#include "file_init.h"

using namespace std;

bool init_file::FileCreated() {
    fstream fs;
    fs.open(filename);
    if(fs.is_open()) {
	fs.close();
	return true; }
    else {
	return false;
	}
}

void init_file::CreateFile() {
    ofstream outputFile(filename);
}

bool init_file::AddToFile(string questions) {
    fstream fs;
    fs.open(filename, ios::app);
    if(fs.is_open()) {
	fs << questions;
	fs.close();
	return true; }
    else {
	return false; }
}

void init_file::setFileName(string newFileName) {
    filename = newFileName + ".txt";
}

string init_file::getFileName() {
    return filename;
}
