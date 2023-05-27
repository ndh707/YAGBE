#ifndef Gameboy_hpp
#define Gameboy_hpp

#include <stdio.h>
#include "CPU.hpp"
#include "MMU.hpp"

struct Gameboy
{
    CPU* cpu;
    MMU* memory;
};

#endif /* Gameboy_hpp */
