#include "Gameboy.hpp"
#include <iostream>
#include "Instruction.hpp"
//#include "SDL2/SDL.h"

std::string TEST_ROM = "/Users/alexnoh/repos/YAGBE/ROM/bootix_dmg.asm";

int main()
{
    Gameboy* gameboy = new Gameboy(TEST_ROM);
    //gameboy->TestROMLoading();
    gameboy->TestRegisters();
    std::cin.get();
    return 0;
}


// Constructors
Gameboy::Gameboy(std::string FilePath)
{
    mmu = new MMU(FilePath);
    cpu = new CPU(mmu);
    instruction = new Instruction(mmu, cpu);
}



void Gameboy::TestROMLoading()
{
    for(int i = 0; i < 0xFFFF; i++)
    {
        std::cout << std::hex << std::setw(4) << std::setfill('0') << static_cast<int>(i) << ": ";
        std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(mmu->Memory[i]) << " ";
        instruction->printOpcodeHex(mmu->Memory[i]);

    }
}

void Gameboy::TestRegisters()
{
    cpu->BC = 0x0051;
    
    std::cout << "A: ";
    std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(*cpu->A) << std::endl;
    std::cout << "BC: ";
    std::cout << "0x" << std::hex << std::setw(4) << std::setfill('0') << static_cast<int>(cpu->BC) << std::endl;
    std::cout << "Memory[BC]: "<<std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(mmu->Memory[cpu->BC]) << std::endl;
    
    instruction->printOpcodeHex(0x0A);
    
    std::cout << "A: ";
    std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(*cpu->A) << std::endl;
}

