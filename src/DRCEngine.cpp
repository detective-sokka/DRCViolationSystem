#include "drc_system/DRCEngine.hpp"

using namespace drc;

DRCEngine& DRCEngine::getInstance()
{
    static DRCEngine engine; // Thread-safe since C++11
    return engine;
}