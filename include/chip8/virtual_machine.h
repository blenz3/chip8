#include <cinttypes>
#include <chip8/cpu.h>
#include <chip8/main_memory.h>
#include <chip8/stack.h>


namespace chip8 {

class VirtualMachine {
public:

    static const uint16_t MAIN_MEMORY_SIZE = 0xFFF;


    VirtualMachine();

private:

    CPU cpu;
    MainMemory memory;
    Stack stack;

};

}; // chip8
