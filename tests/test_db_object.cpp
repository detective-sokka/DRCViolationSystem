#include <gtest/gtest.h>

#include "drc_system/DBObject.hpp"

using namespace drc;

TEST(DRCObjectTest, ConstructorStoresUniqueID)
{
    DBObject object1{"10"};
    
    EXPECT_EQ(object1.getId(), "10");
}