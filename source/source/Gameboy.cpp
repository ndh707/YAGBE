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
    std::cout << "AF: ";
    std::cout << std::hex << std::setw(4) << std::setfill('0') << static_cast<int>(cpu->AF) << "\t";
    std::cout << "BC: ";
    std::cout << std::hex << std::setw(4) << std::setfill('0') << static_cast<int>(cpu->BC) << "\t";
    std::cout << "DE: ";
    std::cout << std::hex << std::setw(4) << std::setfill('0') << static_cast<int>(cpu->DE) << "\t";
    std::cout << "HL: ";
    std::cout << std::hex << std::setw(4) << std::setfill('0') << static_cast<int>(cpu->HL) << "\t";
    
    std::cout << "A: ";
    std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(*cpu->A) << "\t";
    std::cout << "B: ";
    std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(*cpu->B) << "\t";
    std::cout << "C: ";
    std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(*cpu->C) << "\t";
    std::cout << "D: ";
    std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(*cpu->D) << std::endl;
    std::cout << "E: ";
    std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(*cpu->E) << "\t";
    std::cout << "F: ";
    std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(*cpu->F) << "\t";
    std::cout << "H: ";
    std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(*cpu->H) << "\t";
    std::cout << "L: ";
    std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(*cpu->L) << std::endl;
    
}

