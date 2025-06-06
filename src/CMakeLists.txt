add_library(drc_system
    DRCEngine.cpp
    DBObject.cpp
    DRCViolation.cpp
)

target_include_directories(drc_system PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

message(STATUS "Include path: ${CMAKE_CURRENT_SOURCE_DIR}/../include")
