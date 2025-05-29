#include "drc_system/DRCViolationSystem.hpp"

DRCViolationSystem& DRCViolationSystem::getInstance()
{
    static DRCViolationSystem system; // Thread-safe since C++11
    return system;
}