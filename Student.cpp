
#include <list>
#include "Person.h"
#include "Student.h"

    Student() 
    {
        AdmitDate = 0;
        std::School = AS;
        GPA = 0.0;
        UnitsCompleted = 0;
        isFullTime = true; 
    }                     // explicitly call Person() on implementation
    Student(const Student& other);  // call Person(other) on implementation
    Student(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_mo, int dob_yr, 
               std::string email, std::string address, long phone,
               std::School school, int day_admit, int month_admit, int year_admit,
               double units_completed);
    ~Student();

        std::list<std::string> getCourses(){
		courses = new std::list<std::string>;
		return courses;
	}
        void                   addCourse(std::string course){}
        void                   removeCourse(std::string course){}
        void                   printCourses(){}
        void                   setCourses(std::list<std::string> courses){}
        void                   clearCourses(){}

        struct tm getAdmitDate(){
		return AdmitDate;
	}

        std::School getSchool(){
		return School;
	}

        double getGPA(){
		return GPA;
	}
        double getUnitsCompleted(){
		return UnitsCompleted;
	}
        bool isFullTime(){
		return isFullTime;
	}
	
        void setAdmitDate(int day, int month, int year){}
        void setSchool(std::School school){}
        void setGPA(double gpa){}
        void setUnitsCompleted(double units){}
        void setFullTimeStatus(bool isFullTime){}
};

