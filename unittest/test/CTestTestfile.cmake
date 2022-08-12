# CMake generated Testfile for 
# Source directory: /Users/bradenlenz/Documents/GitHub/chip8/unittest/test
# Build directory: /Users/bradenlenz/Documents/GitHub/chip8/unittest/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_unittest "test_unittest")
set_tests_properties(test_unittest PROPERTIES  _BACKTRACE_TRIPLES "/Users/bradenlenz/Documents/GitHub/chip8/cmake/ProjTools.cmake;528;add_test;/Users/bradenlenz/Documents/GitHub/chip8/unittest/test/CMakeLists.txt;3;add_test_exe;/Users/bradenlenz/Documents/GitHub/chip8/unittest/test/CMakeLists.txt;0;")
add_test(test_cppunittest "test_cppunittest")
set_tests_properties(test_cppunittest PROPERTIES  _BACKTRACE_TRIPLES "/Users/bradenlenz/Documents/GitHub/chip8/cmake/ProjTools.cmake;528;add_test;/Users/bradenlenz/Documents/GitHub/chip8/unittest/test/CMakeLists.txt;7;add_test_exe;/Users/bradenlenz/Documents/GitHub/chip8/unittest/test/CMakeLists.txt;0;")
subdirs("test_unittest.toi")
subdirs("test_cppunittest.toi")
