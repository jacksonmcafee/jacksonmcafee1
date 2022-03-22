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
	bool AddToFile(string);	

	void setFileName(string);
	string getFileName();
};
