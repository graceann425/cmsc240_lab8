
#include <string>
#include <ctime>
#include <iostream>
#include "Person.h"


Person::Person() //default constructor
{
    FirstName = "";
    LastName = "";
    DateOfBirth = {0};
    Address = "";
    NetID = "";
    URID = 0;
    Email = "";
    Phone = 0;
    std::cout << "inside person default constructor" << std::endl;
}

Person::Person(const Person& other) //copy constructor
{
    this->FirstName = other.FirstName;
    this->LastName = other.LastName;
    this->DateOfBirth = other.DateOfBirth;
    this->Address = other.Address;
    this->NetID = other.NetID;
    this->URID = other.URID;
    this->Email = other.Email;
    this->Phone = other.Phone;
    std::cout << "inside person copy constructor" << std::endl;
}

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
    std::cout << "inside person initializing constructor" << std::endl;  
}

Person::~Person() {}

//getter methods

std::string Person::getFirstName()
{
    return FirstName;
}

std::string Person::getLastName()
{
    return LastName;
}

struct tm Person::getDateOfBirth()
{
    return DateOfBirth;
} 
            // see http://www.cplusplus.com/reference/ctime/tm/
    
std::string  Person::getAddress()
{
    return Address;
}

std::string Person::getNetID()
{
    return NetID;
}

int Person::getURID()
{
    return URID;
}

std::string  Person::getEmail()
{
    return Email;
}

long Person::getPhone()
{
    return Phone;
}

//setter methods 

void Person::setFirstName(std::string fname)
{
    FirstName = fname;
}

void Person::setLastName(std::string lname)
{
    LastName = lname;
}

void Person::setDateOfBirth(int day, int month, int year)
{
    struct tm DOB;
    DOB.tm_year = year - 1900;
    DOB.tm_mon = month - 1;
    DOB.tm_mday = day; 
    DateOfBirth = DOB;       
}

void Person::setAddress(std::string address)
{
    Address = address;
}

void Person::setNetID(std::string netid)
{
    NetID = netid;
}

void Person::setURID(int urid)
{
    URID = urid;
}

void Person::setEmail(std::string email)
{
    Email = email;
}

void Person::setPhone(long number)
{
    Phone = number;
}


