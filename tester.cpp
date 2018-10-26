#include <iostream>
#include "Student.h"
#include "Person.h"

using namespace std;

int main()
{
	cout << "*****************************************" << endl;
	cout << "Testing Person" << endl;
	cout << "*****************************************" << endl << endl;

	cout << "*****************************************" << endl;
	cout << "Constructors" << endl;
	cout << "*****************************************" << endl << endl;

	cout << "Default constructor:" << endl;
	cout << "Person p;" << endl; 
	Person p;

	cout << endl << "Copy constructor:" << endl;
	cout << "Person q(p);" << endl; 
	Person q(p);

	cout << endl << "Initializing constructor:" << endl;
	cout << "Person r(12345678, \"ll5br\", \"Lawson\", \"Lilly\", 25, 4, 1998, \"lilly.lawson@richmond.edu\", \"28 Westhampton Way Richmond, VA 23173\", 8675309);" << endl; 
	Person r(12345678, "gr8ci", "Lawson", "Lilly", 25, 4, 1998, "lilly.lawson@richmond.edu", "28 Westhampton Way Richmond, VA 23173", 8675309);
	cout << endl;
	cout << endl << "*****************************************" << endl;

	cout << "Setters and Getters" << endl; 
	cout << "*****************************************" << endl << endl;

	cout << "p.setFirstName(\"Lilly\")" << endl; p.setFirstName("Lilly"); 
	cout << "First Name: " << p.getFirstName() << " [Expected: Lilly]" << endl << endl;

	cout << "p.setLastName(\"Lawson\")" << endl; p.setLastName("Lawson"); 
	cout << "Last Name: " << p.getLastName() << " [Expected: Lawson]" << endl << endl;

	//cout << "p.setDateOfBirth(25, 3, 1998)" << endl; p.setDateOfBirth(25, 3, 1998-1900); 
	//cout << "Date of Birth: " << p.getDateOfBirth() << "[Expected: 25 Apr 1998]" << endl << endl;

	cout << "p.setAddress(\"28 Westhampton Way Richmond, VA 23173\")" << endl; 
	p.setAddress("28 Westhampton Way Richmond, VA 23173"); 
	cout << "Address: " << p.getAddress() << " [Expected: 28 Westhampton Way Richmond, VA 23173]" << endl << endl;

	cout << "p.setNetID(\"ll5br\")" << endl; p.setNetID("ll5br"); 
	cout << "Net ID: " << p.getNetID() << " [Expected: ll5br]" << endl << endl;	

	cout << "p.setURID(12345678)" << endl; p.setURID(12345678); 
	cout << "URID: " << p.getURID() << " [Expected: 12345678]" << endl << endl;

	cout << "p.setEmail(\"lilly.lawson@richmond.edu\")" << endl; 
	p.setEmail("lilly.lawson@richmond.edu"); 
	cout << "Email: " << p.getEmail() << " [Expected: lilly.lawson@richmond.edu]" << endl << endl;

	cout << "p.setPhone(8675309)" << endl; p.setPhone(8675309); 
	cout << "Phone: " << p.getPhone() << " [Expected: 8675309]" << endl;
	cout << "*****************************************" << endl << endl;

	cout << "*****************************************" << endl;
	cout << "Testing Student" << endl;
	cout << "*****************************************" << endl << endl;

	cout << "*****************************************" << endl;
	cout << "Constructors" << endl;
	cout << "*****************************************" << endl << endl;

	cout << "Default constructor:" << endl;
	cout << "Student s;" << endl; 
	Student s;

	cout << endl << "Copy constructor:" << endl;
	cout << "Student t(s);" << endl; 
	Student t(s);

	cout << endl << "Initializing constructor:" << endl;
	cout << "Student u(12345678, \"ll5br\", \"Lawson\", \"Lilly\", 25, 4, 1998, \"lilly.lawson@richmond.edu\", \"28 Westhampton Way Richmond, VA 23173\", 8675309, 15, 8, 2017, AS, true, 12.0);" << endl; 
	Student u(12345678, "gr8ci", "Lawson", "Lilly", 25, 4, 1998, "lilly.lawson@richmond.edu", "28 Westhampton Way Richmond, VA 23173", 8675309, 15, 8, 2017, Student::AS, true, 12.0);
	cout << endl;
	cout << endl << "*****************************************" << endl;


	cout << "Setters and Getters" << endl; 
	cout << "*****************************************" << endl << endl;

	//cout << "s.setAdmitDate(12,08,2016)" << endl; s.setAdmitDate(12,8,2016-1900); 
	//cout << "Admit Date: " << s.getAdmitDate() << "[Expected: 12 Sep 2016]" << endl << endl;

	cout << "s.setSchool(Student::RSB)" << endl; s.setSchool(Student::RSB); 
	cout << "School: " << s.getSchool() << " [Expected: 3]" << endl << endl;
    
	cout << "s.setGPA(4.0)" << endl; s.setGPA(4.0); 
	cout << "GPA: " << s.getGPA() << " [Expected: 4]" << endl << endl;

	cout << "s.setUnitsCompleted(12.0)" << endl; s.setUnitsCompleted(12.0); 
	cout << "Units Completed: " << s.getUnitsCompleted() << " [Expected: 12]" << endl << endl;

	cout << "s.setFullTimeStatus(\"true\")" << endl; s.setFullTimeStatus(true); 
	cout << "Full Time: " << s.isFullTime() << " [Expected: 1]" << endl << endl;


	cout << "*****************************************" << endl;
	cout << "Adding/Removing Courses" << endl; 
	cout << "*****************************************" << endl << endl;

	list<string> list1;
	list1.push_back("CMSC 240");
	cout << "s.setCourses(list1)" << endl; s.setCourses(list1); 
	cout << "Courses: ";
	s.printCourses();
	cout << " [Expected: CMSC 240]" << endl << endl;

	cout << "s.addCourse(\"CMSC 222\")" << endl; s.addCourse("CMSC 222"); 
	cout << "s.addCourse(\"CMSC 221\")" << endl; s.addCourse("CMSC 221"); 
	cout << "Courses: ";
	s.printCourses();
	cout  << " [Expected: CMSC 240 CMSC 222 CMSC 221]" << endl << endl;

	cout << "list<string> list2 = s.getCourses()" << endl;
	list<string> list2 = s.getCourses();
	cout << "list 2 courses: ";
  	for (std::list<std::string>::iterator it=list2.begin(); it != list2.end(); ++it)
    {
        std::cout << *it << " ";
    }
    cout << " [Expected: CMSC 240 CMSC 222 CMSC 221]" << endl << endl;

	cout << "s.removeCourse(\"CMSC 221\")" << endl; s.removeCourse("CMSC 221"); 
	cout << "Courses: ";
	s.printCourses();
	cout << " [Expected: CMSC 240 CMSC 222]" << endl << endl;
	cout << "s.clearCourses()" << endl; s.clearCourses(); 
	cout << "Courses: ";
	s.printCourses();
	cout << " [Expected: ]" << endl;
	
	return 0;

}
