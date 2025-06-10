#include <gtest/gtest.h>
#include <type_traits>

#include "drc_system/DRCEngine.hpp"

using namespace drc;

TEST(DRCEngineTest, SingletonReturnsSameInstance)
{
    auto &instance1 = DRCEngine::getInstance(); 
    auto &instance2 = DRCEngine::getInstance(); 
    EXPECT_EQ(&instance1, &instance2);
}

TEST(DRCEngineTest, ConstructorPrivate) {
    static_assert(!std::is_constructible<DRCEngine>::value,
                  "Constructor should be private");
}

TEST(DRCEngineTest, CopyConstructorDeleted) {
    static_assert(!std::is_copy_constructible<DRCEngine>::value,
                  "Copy Constructor not allowed for Singleton");
}

TEST(DRCEngineTest, AssignmentOperatorDeleted) {
    static_assert(!std::is_copy_assignable<DRCEngine>::value,
                  "Assignment operator not allowed for Singleton");
}