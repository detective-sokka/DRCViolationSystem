#include "drc_system/DRCViolationSystem.hpp"

using namespace drc;

DRCViolationSystem& DRCViolationSystem::getInstance()
{
    static DRCViolationSystem system; // Thread-safe since C++11
    return system;
}