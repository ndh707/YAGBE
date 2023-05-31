// Handles file I/O

#include "Cartridge.hpp"

Cartridge::Cartridge(std::string FilePath)
{
    init(FilePath);
}

void Cartridge::init(std::string FilePath)
{
    std::cout << "Loading: " << FilePath << "\n\n";
    
    // Load binary from ROM file given file path
    std::ifstream file(FilePath, std::ios::binary | std::ios::ate);
    file.seekg(0, std::ios::end);
    
    if(file.is_open())
    {
        long FileSize = file.tellg();
        
        // Initialize size of ROM (already defined in .hpp)
        ROM = new u_int8_t[FileSize];
        
        file.seekg(std::ios::beg);
        file.read((char*)ROM, FileSize);
        file.close();
    }
    
    else{ std::cout << "Error: File failed to open \n"; }
    
}

// returns array for 48kb current memory
// simply returns ROM until mappers are implemented
u_int8_t* Cartridge::loadMemory()
{
    return ROM;
}
