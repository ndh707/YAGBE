#include "Gameboy.hpp"
#include <iostream>
//#include "SDL2/SDL.h"

std::string TEST_ROM = "/Users/alexnoh/repos/YAGBE/ROM/snake.gb";

int main()
{
    Gameboy* gameboy = new Gameboy(TEST_ROM);
    gameboy->TestROMLoading();
    
    return 0;
}


// Constructors
Gameboy::Gameboy(std::string FilePath)
{
    mmu = new MMU(FilePath);
    //cpu = new CPU(mmu);
}

void Gameboy::TestROMLoading()
{
    for(int i = 0; i < 0xFFFF; i++)
    {
        std::cout << "[" << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(mmu->Memory[i]) << "] ";
    }
}


