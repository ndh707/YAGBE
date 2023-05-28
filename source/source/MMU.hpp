#ifndef MMU_hpp
#define MMU_hpp

#include <stdio.h>
#include "Cartridge.hpp"

struct MMU
{
    //Pointers
    Cartridge* cartridge;
    
    //Constructor
    MMU(Cartridge*);
    
    //
};

#endif /* MMU_hpp */
