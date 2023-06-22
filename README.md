# YAGBE
Yet Another Game Boy Emulator!  

This is my first serious emulator, built for educational purposes.  
The scope of this project will NOT cover sound, mappers, nor CB Instructions.  
    
[~~Dev Log~~]()  
[Technical Reference](https://gbdev.io/pandocs)  
  
## Screenshots  
Testing the first few opcode implementations  
<img width="384" alt="Screenshot 2023-06-22 at 12 03 58 PM" src="https://github.com/ndh707/YAGBE/assets/90161063/8fd353f6-62b6-4254-b2ac-00e3a0d747be">  
Woohoo! First step done!  
<img width="579" alt="Snake SS" src="https://github.com/ndh707/YAGBE/assets/90161063/7d9bb745-81bf-4aa2-bd41-ab17a287aa34">
  
## How to Install:  
WIP
  
## Roadmap:  
- [x] Working Disassembler (ROM to Memory, no mappers)  
- [ ] Test Instructions for opcodes required for test ROMs  
- [ ] Repeat above for all instructions  
- [ ] Implement Instructions  
- [ ] Test pixels  
- [ ] Implement graphics (SDL2)  
- [ ] Implement input and interrupts   
- [ ] ...
- [ ] Profit?  
  
## Notes:  
Check JR instr (0x20, 0x28, ...) for bugs
