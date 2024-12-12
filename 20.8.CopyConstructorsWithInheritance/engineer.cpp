#include "person.h"
#include "engineer.h"
#include <iostream>

Engineer::Engineer(){
    std::cout << "Default constructor for Engineer called... " << std::endl;
}

Engineer::Engineer(std::string_view fullname, int age, std::string_view address, int contract_count_param): 
    Person(fullname,age,address), contract_count(contract_count_param){
        std::cout << "Custom constructor for Engineer called... " << std::endl;

}

// BAD
/*
Engineer::Engineer(const Engineer& source)
    : contract_count(source.contract_count){
        std::cout << "Custom copy constructor for Engineer called... " << std::endl;
}*/

// working but not optimum
/*
Engineer::Engineer(const Engineer& source)
    : Person(source.m_full_name, source.m_age, source.get_address()), contract_count(source.contract_count){     
        std::cout << "Custom copy constructor for Engineer called... " << std::endl;
}*/

// optimum way to setup copy constructor if you have inheritance hierarchy
Engineer::Engineer(const Engineer& source)
    : Person(source), // the compiler is smart, it is going to slice engineer layer and only leaving the person part 
                        // and it is going to use that to initialize the person part of engineer object 
        contract_count(source.contract_count){     
        std::cout << "Custom copy constructor for Engineer called... " << std::endl;
}



std::ostream& operator<<(std::ostream& out, const Engineer& operand){
    out << "Engineer => Full name : " << operand.get_full_name() <<
                           ", Age :" << operand.get_age() << 
                       ", Address : " << operand.get_address() <<
                   ", Practice ID : " << operand.contract_count ;

    return out;
}

Engineer::~Engineer(){
}


