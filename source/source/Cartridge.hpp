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
    u_int8_t* Memory;
    
    // RAM?
    
    // Constructor
    // ROM File Path, Save File Path***
    Cartridge(std::string);
    
    void loadRom(std::string);
};

#endif /* Cartridge_hpp */
