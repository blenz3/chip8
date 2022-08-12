#include <chip8/test.h>


int main(int argc, const char ** argv) {
    Test t;
    t.a = 1, t.b = 2, t.c =3;
    std::cout << std::stod("241") << std::endl;
    std::cout << "Test " << test(t.a, t.b) << std::endl;
    return 0;
}
