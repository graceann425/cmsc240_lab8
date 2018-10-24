#include <iostream>
#include "Student.h"
#include "Person.h"

using namespace std;

int main()
{
	cout << "*****************************************" << endl;
	cout << "Testing Person" << endl;
	cout << "*****************************************" << endl << endl;

	cout << "Testing constructors" << endl;
	cout << "Default constructor" << endl;
	cout << "Person p;" << endl; 
	Person p;
	cout << endl << "Copy constructor" << endl;
	cout << "Person q(p);" << endl; 
	Person q(p);
	cout << endl << "Initializing constructor" << endl;
	cout << "Person r(12345678, \"ll5br\", \"Lawson\", \"Lilly\", 25, 4, 1998, \"lilly.lawson@richmond.edu\", \"28 Westhampton Way Richmond, VA 23173\", 8675309);" << endl; 
	Person r(12345678, "gr8ci", "Lawson", "Lilly", 25, 4, 1998, "lilly.lawson@richmond.edu", "28 Westhampton Way Richmond, VA 23173", 8675309);

	cout << "*****************************************" << endl;

	cout << "Testing setters/getters:" << endl; 
	cout << "*****************************************" << endl;
	cout << "Person p;" << endl; 
	cout << "p.setFirstName(\"Lilly\")" << endl; p.setFirstName("Lilly"); 
	cout << "First Name: " << p.getFirstName() << "[Expected: Lilly]" << endl;
	cout << "p.setLastName(\"Lawson\")" << endl; p.setLastName("Lawson"); 
	cout << "Last Name: " << p.getLastName() << "[Expected: Lawson]" << endl;
	cout << "p.setDateOfBirth(25, 3, 1998)" << endl; p.setDateOfBirth(25, 3, 1998-1900); 
	cout << "Date of Birth: " << p.getDateOfBirth() << "[Expected: 25 Apr 1998]" << endl;
	cout << "p.setAddress(\"28 Westhampton Way Richmond, VA 23173\")" << endl; p.setLastName("28 Westhampton Way Richmond, VA 23173"); 
	cout << "Address: " << p.getAddress() << "[Expected: 28 Westhampton Way Richmond, VA 23173]" << endl;
	cout << "p.setNetID(\"ll5br\")" << endl; p.setNetID("ll5br"); 
	cout << "Net ID: " << p.getNetID() << "[Expected: ll5br]" << endl;	
	cout << "p.setURID(12345678)" << endl; p.setURID(12345678); 
	cout << "URID: " << p.getURID() << "[Expected: 12345678]" << endl;
	cout << "p.setEmail(\"lilly.lawson@richmond.edu\")" << endl; p.setEmail("lilly.lawson@richmond.edu"); 
	cout << "Email: " << p.getEmail() << "[Expected: lilly.lawson@richmond.edu]" << endl;
	cout << "p.setPhone(8675309)" << endl; p.setPhone(8675309); 
	cout << "Phone: " << p.getPhone() << "[Expected: 8675309]" << endl;
	cout << "*****************************************" << endl;

	cout << "*****************************************" << endl;
	cout << "Testing Student" << endl;
	cout << "*****************************************" << endl << endl;

	cout << "Testing constructors" << endl;


	cout << "Testing setters/getters:" << endl; 
	cout << "*****************************************" << endl;
	cout << "Student s;" << endl; 
	Student s;

	cout << "s.setAdmitDate(12,08,2016)" << endl; s.setAdmitDate(12,8,2016-1900); 
	cout << "Admit Date: " << s.getAdmitDate() << "[Expected: 12 Sep 2016]" << endl;

	cout << "s.setSchool(Student::AS)" << endl; s.setSchool(Student::AS); 
	cout << "School: " << s.getSchool() << "[Expected: AS]" << endl;
    
	cout << "s.setGPA(4.0)" << endl; s.setGPA(4.0); 
	cout << "GPA: " << s.getGPA() << "[Expected: 4.0]" << endl;

	cout << "s.setUnitsCompleted(12.0)" << endl; s.setUnitsCompleted(12.0); 
	cout << "Units Completed: " << s.getUnitsCompleted() << "[Expected: 12.0]" << endl;

	cout << "s.setFullTimeStatus(\"true\")" << endl; s.setFullTimeStatus(true); 
	cout << "Admit Date: " << s.isFullTime() << "[Expected: true]" << endl;


	cout << "Testing courses:" << endl; 
	cout << "*****************************************" << endl;

	list <string> list1;
	list1.push_back("CMSC 240");
	cout << "s.setCourses(list1)" << endl; s.setCourses(list1); 
	cout << "Courses: " << s.printCourses() << "[Expected: CMSC 240]" << endl;

	cout << "s.addCourse(\"CMSC 222\")" << endl; s.addCourse("CMSC 222"); 
	cout << "s.addCourse(\"CMSC 221\")" << endl; s.addCourse("CMSC 221"); 

	cout << "Courses: " << s.getCourses() << "[Expected: *not sure*]" << endl;
	cout << "Courses: " << s.printCourses() << "[Expected: CMSC 240, CMSC 222, CMSC 221]" << endl;
	cout << "s.removeCourse(\"CMSC 221\")" << endl; s.removeCourse("CMSC 221"); 
	cout << "Courses: " << s.printCourses() << "[Expected: CMSC 240, CMSC 222]" << endl;
	cout << "s.clearCourses()" << endl; s.clearCourses(); 
	cout << "Courses: " << s.printCourses() << "[Expected: \"\"]" << endl;
	
	return 0;

}
