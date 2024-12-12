#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H
#include "engineer.h"


class CivilEngineer : public Engineer{
    
    friend std::ostream& operator<<(std::ostream& , const CivilEngineer& operand);

    public :
        CivilEngineer();
        CivilEngineer(std::string_view fullname, int age, std::string_view address, int contract_count, std::string_view speciality); 
        CivilEngineer(const CivilEngineer& source);
        ~CivilEngineer();

        void build_road(){
            //get_full_name();  // Compiler error ( because of private inheritance! that ...)
            //m_full_name = "Gary Hunters"; // Compiler error ( because of private inheritance! that...) 
            //m_age = 35;   // Compiler error ( because of private inheritance - that engineer class made!)

            add(10,2);  // after using keyword, this works
            add(10,5,2);    // this, too.
        }
    public :
        //using Person::doit_something; // Compiler error. Becuase engineer class is making private inheritance.

    
    private :
        std::string m_speciality{"None"};
};

#endif  // CIVIL_ENGINEER_H