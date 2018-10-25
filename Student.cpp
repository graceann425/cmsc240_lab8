
#include <list>
#include "Person.h"
#include "Student.h"

    Student::Student() 
    :Person()
	{
        admit_day = 0;
	    admit_month = 0;
	    admit_year = 1900;
        school = AS;
        gpa = 0.0;
        unitsCompleted = 0;
        fullTime = false; 
    }                     // explicitly call Person() on implementation
    Student::Student(const Student& other){}  // call Person(other) on implementation
    Student::Student(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_mo, int dob_yr, 
               std::string email, std::string address, long phone,
               int day_admit, int month_admit, int year_admit,
              School school, bool is_full_time, double units_completed){}
    Student::~Student(){}

    std::list<std::string> Student::getCourses(){
		std::list<std::string> courses;
		return courses;
	}
        void                   Student::addCourse(std::string course){}
        void                   Student::removeCourse(std::string course){}
        void                   Student::printCourses(){}
        void                   Student::setCourses(std::list<std::string> courses){}
        void                   Student::clearCourses(){}

    struct tm              Student::getAdmitDate(){
		struct tm admitDate;
		admitDate.tm_year =this-> admit_year;
		admitDate.tm_mon = this->admit_month;
		admitDate.tm_mday = this->admit_day;
		return admitDate;
	}

    Student::School Student::getSchool(){
		return school;
	}

    double Student::getGPA(){
		return gpa;
	}
    double Student::getUnitsCompleted(){
		return unitsCompleted;
	}
    bool Student::isFullTime(){
		return false;
	}
	
    void Student::setAdmitDate(int day, int month, int year){}
    void Student::setSchool(Student::School school){}
    void Student::setGPA(double gpa){}
    void Student::setUnitsCompleted(double units){}
    void Student::setFullTimeStatus(bool isFullTime){}

