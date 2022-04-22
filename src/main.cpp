#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Term{
	string ID;
	string displayName;
};

struct Course{
	string ID;
	string courseNum;
	string sectionCode;
	Term term;
};

struct Student{
	string ID;
	Course course;
	string grade;
};

struct Instructor{
	string ID;
	Course course;
	string term;
};

class Enrollment{
	public:
	Enrollment(){
		Student student;
	}
};

int main(){
    Enrollment enroll[6];
    fstream myfile;
	myfile.open("C:\\Users\\jeffrey\\Desktop\\homework\\HW3\\data\\data.csv", ios::in);

	vector<string> tokens;

	if(myfile.is_open()){
		string line;
		
    	while (getline (myfile, line, ',')){
    		tokens.push_back(line);
    	}
	}

	for(int i = 0; i < tokens.size(); i++) {
      cout << tokens[i] << endl;
   	}
    myfile.close();
}
