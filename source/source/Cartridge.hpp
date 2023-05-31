// Handles file I/O

#ifndef Cartridge_hpp
#define Cartridge_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include <filesystem>
#include <sstream>

struct Cartridge
{
    // Dynamically sized array for ROM memory
    u_int8_t* ROM;
    u_int8_t Memory[0xFFFF];
    
    // RAM?
    
    // Constructor
    // ROM File Path, Save File Path***
    Cartridge(std::string);
    
    // Fills ROM array with all the instruction from file
    void init(std::string);
    
    // return array for the 48kb current memory
    u_int8_t* loadMemory();
};

#endif /* Cartridge_hpp */
