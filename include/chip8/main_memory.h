#include <array>
#include <cinttypes>

namespace chip8 {

struct MainMemory {

    static const size_t MAX_MEMORY_SIZE = 0x1000;
    static const uint16_t INTERPRETER_BOUND_LOW = 0x000;
    static const uint16_t INTERPRETER_BOUND_HIGH = 0x1FF;
    static const uint16_t CONSTANTS_BOUND_LOW = 0x050;
    static const uint16_t CONSTANTS_BOUND_HIGH = 0x0A0;
    static const uint16_t ROM_BOUND_LOW = 0x200;
    static const uint16_t ROM_BOUND_HIGH = 0xFFF;

    MainMemory();

    std::array<uint8_t, MAX_MEMORY_SIZE> buffer;


};

}; // chip8
