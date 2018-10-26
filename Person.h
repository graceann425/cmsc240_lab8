#ifndef __PERSON_H__
#define __PERSON_H__

#include <string>
#include <ctime>

class Person
{
    protected:
        std::string FirstName;
        std::string LastName;
        struct tm DateOfBirth;
        std::string Address;
        std::string NetID;
        int URID;
        std::string Email;
        long Phone;

    public:
        Person();
        Person(const Person& other);
        Person(int urid, std::string netid, std::string lname, std::string fname, 
               int dob_day, int dob_month, int dob_year,
               std::string email, std::string address, long phone);
        ~Person();

        //getter methods
        std::string  getFirstName();
        std::string  getLastName();
        struct tm    getDateOfBirth(); 
        std::string  getAddress();
        std::string  getNetID();
        int          getURID();
        std::string  getEmail();
        long         getPhone();

        //setter methods
        void setFirstName(std::string fname);
        void setLastName(std::string lname);
        void setDateOfBirth(int day, int month, int year);
        void setAddress(std::string address);
        void setNetID(std::string netid);
        void setURID(int urid);
        void setEmail(std::string email);
        void setPhone(long number);
};

#endif