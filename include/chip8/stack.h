#include <array>
#include <cinttypes>
#include <string>

namespace chip8 {

// Program counter stack
class Stack {
public:
    static const size_t MAX_STACK_FRAMES = 0xF;

    Stack();

    size_t getFrame() const {
        return current_frame;
    }

    uint16_t peek() const {
        return pc_stack[current_frame];
    }

    void pop() {
        if (current_frame == 0) {
            throw std::runtime_error("ERROR: Cannot pop stack frame from 0!");
        }

        pc_stack[current_frame] = 0;
        --current_frame;
    }

    void push(uint16_t pc) {
        if (current_frame + 1 == pc_stack.size()) {
            throw std::runtime_error("ERROR: Cannot blow the stack. Max size is " + std::to_string(MAX_STACK_FRAMES));
        }

        pc_stack[current_frame++] = pc;
    }

private:
    size_t current_frame;
    std::array<uint16_t, MAX_STACK_FRAMES> pc_stack;

};


}
