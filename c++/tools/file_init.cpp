#include "file_init.h"

using namespace std;

bool init_file::FileCreated() {
    fstream fs;
    string temp = filename + ".txt";
    fs.open(temp);
    if(fs.is_open()) {
	fs.close();
	return true; }
    else {
	return false;
	}
}

void init_file::CreateFile() {
    string temp = filename + ".txt";
    ofstream outputFile(temp);
}


void init_file::setFileName(string newFileName) {
    filename = newFileName;
}

string init_file::getFileName() {
    return filename;
}
