#ifndef MMU_hpp
#define MMU_hpp

#include <stdio.h>
#include "Cartridge.hpp"

struct MMU
{
    u_int8_t* Memory;
    
    //Pointers
    Cartridge* cartridge;
    
    //Constructor
    MMU(std::string);
    
    //
};

#endif /* MMU_hpp */
