#include <array>
#include <cinttypes>


namespace chip8 {

struct CPU {

    static const uint16_t PC_INITIAL = 0x200;

    CPU();
    // 8-bit Registers - first 15 are general purpose, 16th is for flags
    std::array<uint8_t, 16> registers;

    // Memory register
    uint16_t index_register;

    // PC
    uint16_t program_counter;
};

}; // chip8
