include_directories(${PROJECT_SOURCE_DIR}/include/)

add_executable(chip8
    virtual_machine.cpp
    cpu.cpp
    main_memory.cpp
    stack.cpp
    test.cpp
    main.cpp)
