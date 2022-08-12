# Generated CMakeLists.txt for install test test_cppunittest
if (USE_CODE_COV)
  add_definitions(-O0 -fprofile-arcs -ftest-coverage)
  set(CMAKE_EXE_LINKER_FLAGS="-fprofile-arcs -ftest-coverage ${xtraflag}")
  file(MAKE_DIRECTORY "/Users/bradenlenz/Documents/GitHub/chip8/coverage")
endif()
add_executable(test_cppunittest_install;test_cpp_unittest.cpp)
add_dependencies(test_cppunittest_install install_for_check_done)
add_inc_dir(test_cppunittest_install "/Users/bradenlenz/Documents/GitHub/chip8/unittest")
add_inc_dir(test_cppunittest_install "/usr/local/include")
if (USE_CODE_COV)
  add_link_flag(test_cppunittest_install -fprofile-arcs)
  add_link_flag(test_cppunittest_install -ftest-coverage)
endif()
set_directory_properties(PROPERTIES LINK_DIRECTORIES "/usr/local/lib")
link_libs_install(test_cppunittest_install)
add_custom_command(OUTPUT test_cppunittest.toi.done
  COMMAND test_cppunittest_install 
  COMMAND "/usr/local/Cellar/cmake/3.24.0/bin/cmake" -E touch test_cppunittest.toi.done
  DEPENDS test_cppunittest_install)
add_custom_target(test_cppunittest_install_run DEPENDS test_cppunittest.toi.done)
add_dependencies(check_on_install test_cppunittest_install_run)
