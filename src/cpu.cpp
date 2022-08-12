#include <chip8/cpu.h>

namespace chip8 {

CPU::CPU()
    : registers()
    , index_register(0x0)
    , program_counter(PC_INITIAL)
{
    registers.fill(0x0);
}

};
