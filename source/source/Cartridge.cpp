// Handles file I/O

#include "Cartridge.hpp"

Cartridge::Cartridge(std::string FilePath)
{
    loadRom(FilePath);
}

void Cartridge::loadRom(std::string FilePath)
{
    // Load binary from ROM given file path
    std::ifstream ROM(FilePath, std::ios::binary);
    ROM.seekg(0, std::ios::end);
    
    long FileSize = ROM.tellg();
    
    Memory = new u_int8_t[FileSize];
    
    ROM.seekg(std::ios::beg);
    ROM.read((char*)Memory, FileSize);
    ROM.close();
}
