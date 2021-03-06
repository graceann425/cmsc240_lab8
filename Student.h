#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <list>
#include "Person.h"

class Student : public Person
{
    public:
        // outside of this file, access type as Student::School,
        // and particular schools as Student::AS for example
        enum School {AS, JSLS, LAW, RSB, SPCS, UNDEFINED};

    protected:
        std::list<std::string> courses;
        int admit_day;
	    int admit_month;
	    int admit_year;
	    School school;
        double gpa;
        double unitsCompleted;
        bool fullTime;
        
    public:
        Student();                      // explicitly calls Person() on implementation
        Student(const Student& other);  // calls Person(other) on implementation
        Student(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_mo, int dob_yr, 
               std::string email, std::string address, long phone,
               int day_admit, int month_admit, int year_admit,
               School school, bool is_full_time, 
               double units_completed);
        ~Student();

        //course list methods
        std::list<std::string> getCourses();
        void                   addCourse(std::string course);
        void                   removeCourse(std::string course);
        void                   printCourses();
        void                   setCourses(std::list<std::string> courses);
        void                   clearCourses();

        //getter methods
        struct tm              getAdmitDate();
        School                 getSchool();
        double                 getGPA();
        double                 getUnitsCompleted();
        bool                   isFullTime();

        //setter methods
        void setAdmitDate(int day, int month, int year);
        void setSchool(School school);
        void setGPA(double gpa);
        void setUnitsCompleted(double units);
        void setFullTimeStatus(bool isFullTime);
};
#endif
