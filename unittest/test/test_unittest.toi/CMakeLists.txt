# Generated CMakeLists.txt for install test test_unittest
if (USE_CODE_COV)
  add_definitions(-O0 -fprofile-arcs -ftest-coverage)
  set(CMAKE_EXE_LINKER_FLAGS="-fprofile-arcs -ftest-coverage ${xtraflag}")
  file(MAKE_DIRECTORY "/Users/bradenlenz/Documents/GitHub/chip8/coverage")
endif()
add_executable(test_unittest_install;test_unittest.c)
add_dependencies(test_unittest_install install_for_check_done)
add_inc_dir(test_unittest_install "/Users/bradenlenz/Documents/GitHub/chip8/unittest")
add_inc_dir(test_unittest_install "/usr/local/include")
if (USE_CODE_COV)
  add_link_flag(test_unittest_install -fprofile-arcs)
  add_link_flag(test_unittest_install -ftest-coverage)
endif()
set_directory_properties(PROPERTIES LINK_DIRECTORIES "/usr/local/lib")
link_libs_install(test_unittest_install)
add_custom_command(OUTPUT test_unittest.toi.done
  COMMAND test_unittest_install 
  COMMAND "/usr/local/Cellar/cmake/3.24.0/bin/cmake" -E touch test_unittest.toi.done
  DEPENDS test_unittest_install)
add_custom_target(test_unittest_install_run DEPENDS test_unittest.toi.done)
add_dependencies(check_on_install test_unittest_install_run)
