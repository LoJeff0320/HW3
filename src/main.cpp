#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Term{
	string ID;
	string displayName;

	Term(string ID){
		this->ID = ID;
		//this->displayName = displayName;
	}
};

struct Course{
	string ID;
	string courseNum;
	string sectionCode;
	Term term;

	Course(string ID, string courseNum, string sectionCode, Term term){
		this->ID = ID;
		this->courseNum = courseNum;
		this->sectionCode = sectionCode;
		this->term = term;	
	}
};

struct Student{
	string ID;
	Course course;
	string grade;

	Student(string ID, Course course, string grade){
		this->ID = ID;
		this->course = course;
		this->grade = grade;
	}
};

struct Instructor{
	string ID;
	Course course;
	Term term;

	Instructor(string ID, Course course, Term term){
		this->ID = ID;
		this->course = course;
		this->term = term;
	}
};

class Enrollment{
	vector<Student> studentVec;

	public:
	Enrollment(){
		{ }
	}

	void enrollStudent(Student student){
		studentVec.push_back(student);
	}
};

int main(){
    Enrollment enroll;
	//reads the file
    fstream myfile;
	myfile.open("C:\\Users\\jeffrey\\Desktop\\homework\\HW3\\data\\data.csv", ios::in);

	//vector of strings used for string tokenizing
	vector<string> tokens;
	
	if(myfile.is_open()){
		string line;
		
    	while (getline (myfile, line, ',')){
    		tokens.push_back(line);
    	}
	}else cout << "File cant be found." << endl;
	
	// create obejcts for course and student
	Term term {tokens[3]};
	Course course {tokens[0], tokens[1], tokens[4], term};
	Student stu {tokens[0], course, tokens[5]};

	enroll.enrollStudent(stu);

	//iterating through tokens vector
	for(int i = 0; i < tokens.size(); i++) {
      cout << tokens[i] << endl;
   	}
    myfile.close();
}
