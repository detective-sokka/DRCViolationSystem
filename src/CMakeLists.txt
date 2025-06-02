add_library(drc_system
    DRCViolationSystem.cpp
    DBObject.cpp
)

target_include_directories(drc_system PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

message(STATUS "Include path: ${CMAKE_CURRENT_SOURCE_DIR}/../include")
