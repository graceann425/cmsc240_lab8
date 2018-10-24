
#include <string>
#include <ctime>
#include "Person.h"


    Person::Person()
    {
        FirstName = "";
        LastName = "";
        tm DOB;
        DateOfBirth = DOB;
        Address = "";
        NetID = "";
        URID = 0;
        Email = "";
        Phone = 0;
    }
    Person::Person(const Person& other) {}
    Person::Person(int urid, std::string netid, std::string lname, std::string fname, 
            int dob_day, int dob_month, int dob_year,
            std::string email, std::string address, long phone) 
    {
        FirstName = fname;
        LastName = lname;
        struct tm DOB;
        DOB.tm_year = dob_year - 1900;
        DOB.tm_mon = dob_month - 1;
        DOB.tm_mday = dob_day;
        DateOfBirth = DOB;
        Address = address;
        NetID = netid;
        URID = urid;
        Email = email;
        Phone = phone;  
    }
    Person::~Person() {}

    std::string Person::getFirstName()
    {
        return "";
    }
    std::string  Person::getLastName()
    {
        return "";
    }
    struct tm    Person::getDateOfBirth()
    {
        return DateOfBirth;
    } 
            // see http://www.cplusplus.com/reference/ctime/tm/
    std::string  Person::getAddress()
    {
        return "";
    }
    std::string  Person::getNetID()
    {
        return "";
    }
    int          Person::getURID()
    {
        return 0;
    }
    std::string  Person::getEmail()
    {
        return "";
    }
    long         Person::getPhone()
    {
        return 0;
    }

    void Person::setFirstName(std::string fname)
    {}
    void Person::setLastName(std::string lname)
    {}
    void Person::setDateOfBirth(int day, int month, int year)
    {}
    void Person::setAddress(std::string address)
    {}
    void Person::setNetID(std::string netid)
    {}
    void Person::setURID(int urid)
    {}
    void Person::setEmail(std::string email)
    {}
    void Person::setPhone(long number)
    {}


