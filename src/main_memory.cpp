#include <chip8/main_memory.h>

namespace chip8 {

MainMemory::MainMemory()
    : buffer()
{
    buffer.fill(0);

    // Initialize the built in constants with 0-F sequentially
    for (uint16_t idx = CONSTANTS_BOUND_LOW; idx <= CONSTANTS_BOUND_HIGH; ++idx) {
        buffer[idx] = (idx - CONSTANTS_BOUND_LOW);
    }
}

} // chip8
