#ifndef Gameboy_hpp
#define Gameboy_hpp

#include <stdio.h>
#include "CPU.hpp"
#include "MMU.hpp"

struct Gameboy
{
    // Pointers
    CPU* cpu;
    MMU* mmu;
    
    // Constructors
    Gameboy(std::string);
    
    // Test functions
    void TestROMLoading();
    
};

#endif /* Gameboy_hpp */
