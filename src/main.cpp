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
    Enrollment enroll;
    ifstream myfile("../Desktop/homework/HW3/data/data.csv");

	string line;

    while (getline (myfile,line)){
    	cout << line << '\n';
    }
    myfile.close();

}
