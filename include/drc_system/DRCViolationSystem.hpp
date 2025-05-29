#pragma once

class DRCViolationSystem
{
    public:
        static DRCViolationSystem& getInstance();

    private: 
        DRCViolationSystem() = default;
        ~DRCViolationSystem() = default;

        DRCViolationSystem(const DRCViolationSystem&) = delete;
        DRCViolationSystem& operator=(const DRCViolationSystem&) = delete;
};