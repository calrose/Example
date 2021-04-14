# CMake generated Testfile for 
# Source directory: C:/Users/Big Boi Supreme/Documents/GitHub/Example/test
# Build directory: C:/Users/Big Boi Supreme/Documents/GitHub/Example/build/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test([=[shoppingTests]=] "C:/Users/Big Boi Supreme/Documents/GitHub/Example/build/test/Debug/shoppingTests.exe")
  set_tests_properties([=[shoppingTests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Big Boi Supreme/Documents/GitHub/Example/test/CMakeLists.txt;15;add_test;C:/Users/Big Boi Supreme/Documents/GitHub/Example/test/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test([=[shoppingTests]=] "C:/Users/Big Boi Supreme/Documents/GitHub/Example/build/test/Release/shoppingTests.exe")
  set_tests_properties([=[shoppingTests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Big Boi Supreme/Documents/GitHub/Example/test/CMakeLists.txt;15;add_test;C:/Users/Big Boi Supreme/Documents/GitHub/Example/test/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test([=[shoppingTests]=] "C:/Users/Big Boi Supreme/Documents/GitHub/Example/build/test/MinSizeRel/shoppingTests.exe")
  set_tests_properties([=[shoppingTests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Big Boi Supreme/Documents/GitHub/Example/test/CMakeLists.txt;15;add_test;C:/Users/Big Boi Supreme/Documents/GitHub/Example/test/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test([=[shoppingTests]=] "C:/Users/Big Boi Supreme/Documents/GitHub/Example/build/test/RelWithDebInfo/shoppingTests.exe")
  set_tests_properties([=[shoppingTests]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Big Boi Supreme/Documents/GitHub/Example/test/CMakeLists.txt;15;add_test;C:/Users/Big Boi Supreme/Documents/GitHub/Example/test/CMakeLists.txt;0;")
else()
  add_test([=[shoppingTests]=] NOT_AVAILABLE)
endif()
