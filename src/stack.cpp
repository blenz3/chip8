#include <chip8/stack.h>

namespace chip8 {

Stack::Stack()
    : current_frame(0)
    , pc_stack()
{
    pc_stack.fill(0);
}

}
