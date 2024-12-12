#include "person.h"
#include "engineer.h"
#include "civilengineer.h"
#include <iostream>

CivilEngineer::CivilEngineer(){
    std::cout << "Default constructor for CivilEngineer called... " << std::endl;
}


CivilEngineer::CivilEngineer(std::string_view fullname, int age, std::string_view address, int contract_count, std::string_view speciality) :
    Engineer(fullname,age,address,contract_count), m_speciality(speciality){
    std::cout << "Custom constructor for CivilEngineer called... " << std::endl;
}

CivilEngineer::CivilEngineer(const CivilEngineer& source) :
    Engineer(source), m_speciality(source.m_speciality){
    std::cout << "Custom copy constructor for CivilEngineer called... " << std::endl;
}


/*
CivilEngineer::CivilEngineer(std::string_view fullname, int age, std::string_view address, int contract_count, std::string_view speciality){
    // this is bad. you won't be able to use m_address
    m_full_name = fullname;
    m_age = age;
    //m_address = address;
    m_speciality = speciality;
    //std::cout << "Custom constructor for CivilEngineer called... " << std::endl;

}       
*/

/* // this is also won't work
CivilEngineer::CivilEngineer(std::string_view fullname, int age, std::string_view address, int contract_count, std::string_view speciality) :
    m_full_name(fullname), m_age(age), m_address(address), m_speciality(speciality){
    // CivilEngineer class has no business initializing things that belong to Person class in the initializer list
    // it has only capability to initialize the members that belong to current class     
    std::cout << "Custom constructor for CivilEngineer called... " << std::endl;
}
*/

std::ostream& operator<<(std::ostream& out, const CivilEngineer& operand){
    
    out << "Civil Engineer => Full name : " << operand.get_full_name()  // compiler error
        << ", age : " << operand.get_age()                              // because of private inheritance!
        << ", address : " << operand.get_address()
        << ", contract_count : " << operand.get_contract_count()
        << ", speciality : " << operand.m_speciality ;
    

    return out;
}

CivilEngineer::~CivilEngineer(){
}