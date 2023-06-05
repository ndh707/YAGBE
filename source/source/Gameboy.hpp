#ifndef Gameboy_hpp
#define Gameboy_hpp

#include <stdio.h>
#include "CPU.hpp"
#include "MMU.hpp"
#include "Instruction.hpp"

struct Gameboy
{
    // Pointers
    CPU* cpu;
    MMU* mmu;
    Instruction* instruction;
    
    // Constructors
    Gameboy(std::string);
    
    // Test functions
    void TestROMLoading();
    void TestRegisters();
    
};

#endif /* Gameboy_hpp */
