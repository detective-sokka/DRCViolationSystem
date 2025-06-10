#pragma once

namespace drc
{
    class DRCEngine
    {
        public:
            static DRCEngine& getInstance();

        private: 
            DRCEngine() = default;
            ~DRCEngine() = default;

            DRCEngine(const DRCEngine&) = delete;
            DRCEngine& operator=(const DRCEngine&) = delete;
    };   
}