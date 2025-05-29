#include <gtest/gtest.h>
#include <type_traits>

#include "drc_system/DRCViolationSystem.hpp"

using namespace drc;

TEST(DRCViolationSystemTest, SingletonReturnsSameInstance)
{
    auto &instance1 = DRCViolationSystem::getInstance(); 
    auto &instance2 = DRCViolationSystem::getInstance(); 
    EXPECT_EQ(&instance1, &instance2);
}

TEST(DRCViolationSystemTest, ConstructorPrivate) {
    static_assert(!std::is_constructible<DRCViolationSystem>::value,
                  "Constructor should be private");
}

TEST(DRCViolationSystemTest, CopyConstructorDeleted) {
    static_assert(!std::is_copy_constructible<DRCViolationSystem>::value,
                  "Copy Constructor not allowed for Singleton");
}

TEST(DRCViolationSystemTest, AssignmentOperatorDeleted) {
    static_assert(!std::is_copy_assignable<DRCViolationSystem>::value,
                  "Assignment operator not allowed for Singleton");
}