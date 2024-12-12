#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

//  Reference => https://www.youtube.com/watch?v=8jLOx1hD3_o
//            => (freeCodeCamp.org)

int main(){

    /*
    Engineer eng1("Jose Rodriguez", 34, "Faroe Islands 10St#46",25);
    std::cout << "eng1 : " << eng1 << std::endl;

    std::cout << "-----------------" << std::endl;

    Engineer eng2(eng1);
    std::cout << "eng2 : " << eng2 << std::endl;
    */

    CivilEngineer ceng1("Maria Sharapova", 25, "Niagara Falls 15St#32", 43, "Road Length");
    std::cout << "-----------------" << std::endl;

    CivilEngineer ceng2(ceng1);
    std::cout << "ceng2 : " << ceng2 << std::endl;

    return 0;
}