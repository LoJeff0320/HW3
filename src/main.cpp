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

	Student(){
		
	}
};

struct Instructor{
	string ID;
	Course course;
	string term;
};

class Enrollment{
	vector<Student> studentVec;

	public:
	Enrollment(){
		studentVec {};
	}

	void enroll(Student student){
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

	Student student{tokens[0]};

	//iterating through tokens vector
	for(int i = 0; i < tokens.size(); i++) {
      cout << tokens[i] << endl;
   	}
    myfile.close();
}
