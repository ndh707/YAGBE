#include "MMU.hpp"


MMU::MMU(std::string FilePath)
{
    // construct cartridge object with given file path
    cartridge = new Cartridge(FilePath);
    
    // Memory points to cartridge.memory
    // Just points to ROM until mapper implemented
    Memory = cartridge->loadMemory();
}
