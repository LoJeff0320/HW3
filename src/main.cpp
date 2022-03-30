#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Student{
	string ID;
	//Course course;
	string grade;
};

struct Instructor{
	string ID;
	//Course course;
	string term;
};

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

class Enrollment{
	public:
	Enrollment(){
		Student student;
	}
};

int main(){
	cout << "Hello World!" << endl; 
    	Enrollment enroll;
    	ifstream myfile("../data.csv");

	vector<string> names;

    	string input;
    	while(myfile >> input){
		names.push_back(input);	    
    	}

	cout << names.at(0) << endl;
}
