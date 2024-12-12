#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"


// Engineer will do private inheritance
class Engineer : public Person{

    friend std::ostream& operator <<(std::ostream& , const Engineer& operand);

    public :
        Engineer(); 
        Engineer(std::string_view fullname, int age, std::string_view address, int contract_count);
        Engineer(const Engineer& source);
        ~Engineer();

        void build_something(){
            m_full_name = "Aziz Sancar";    // OK
            m_age = 65;     // OK   
            //m_address = "Bulmazsa getir str"; // Compiler Error! Because it is private to base class
        }

        int get_contract_count() const{
            return contract_count;
        }
    
    private :
        int contract_count{0};
};

#endif // ENGINEER_H