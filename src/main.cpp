#include <iostream>
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
}
