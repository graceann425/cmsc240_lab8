
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
    }              

    Student::Student(const Student& other) 
        :Person(other)
    {
        this->admit_day = other.admit_day;
        this->admit_month = other.admit_month;
        this->admit_year = other.admit_year;
        this->school = other.school;
        this->gpa = other.gpa;
        this->unitsCompleted = other.unitsCompleted;
        this->fullTime = other.fullTime;  
    }  

    Student::Student(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_mo, int dob_yr, 
               std::string email, std::string address, long phone,
               int day_admit, int month_admit, int year_admit,
              School school, bool is_full_time, double units_completed)
        : Person(urid, netid, lname, fname, dob_day, dob_mo, dob_yr,
               email, address, phone)
    { 
        admit_day = day_admit;
        admit_month = month_admit;
        admit_year = year_admit;
        this->school = school;
        gpa = 0.0;
        unitsCompleted = units_completed;
        fullTime = is_full_time;   
    }

    Student::~Student(){}

    std::list<std::string> Student::getCourses()
    {
		return courses;
	}

    void Student::addCourse(std::string course)
    {
        courses.push_back(course);
    }

    void Student::removeCourse(std::string course)
    {
        courses.remove(course);
    }

    void Student::printCourses()
    {

    }
    
    void Student::setCourses(std::list<std::string> courses)
    {

    }
    
    void Student::clearCourses()
    {
        courses.clear();
    }

    struct tm Student::getAdmitDate()
    {
		struct tm admitDate;
		admitDate.tm_year =this-> admit_year;
		admitDate.tm_mon = this->admit_month;
		admitDate.tm_mday = this->admit_day;
		return admitDate;
	}

    Student::School Student::getSchool()
    {
		return school;
	}

    double Student::getGPA()
    {
		return gpa;
	}

    double Student::getUnitsCompleted()
    {
		return unitsCompleted;
	}

    bool Student::isFullTime()
    {
		return fullTime;
	}
	
    void Student::setAdmitDate(int day, int month, int year)
    {

    }

    void Student::setSchool(Student::School school)
    {
        this->school = school;
    }

    void Student::setGPA(double gpa)
    {
        this->gpa = gpa;
    }

    void Student::setUnitsCompleted(double units)
    {
        unitsCompleted = units;
    }

    void Student::setFullTimeStatus(bool isFullTime)
    {
        fullTime = isFullTime;
    }

