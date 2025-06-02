include(FetchContent)

# Download GTest
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

# Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

# Add test executable
add_executable(test_drc_system test_drc_system.cpp)
add_executable(test_db_object test_db_object.cpp)

# Link GTest and your library
target_link_libraries(test_drc_system
    gtest_main
    drc_system    
)

target_link_libraries(test_db_object
    gtest_main
    drc_system    
)

include(GoogleTest)
gtest_discover_tests(test_drc_system)
gtest_discover_tests(test_db_object)

# In your top-level CMakeLists.txt
option(CODE_COVERAGE "Enable code coverage" ON)

if(CODE_COVERAGE AND CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
    message(STATUS "Code coverage enabled")
    add_compile_options(--coverage -O0)
    add_link_options(--coverage)
endif()
