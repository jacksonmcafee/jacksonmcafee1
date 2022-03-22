#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class init_file {
private: 
	string filename;
public: 
	bool FileCreated();
	void CreateFile();

	void setFileName(string);
	string getFileName();
};
