#include <gtest/gtest.h>

#include "drc_system/DBObject.hpp"
#include "drc_system/DRCViolation.hpp"

using namespace drc;

TEST(DRCViolation, CorrectViolationIdSet)
{
    DRCViolation violation1{"id1", "pin1", "pin2"};
    DRCViolation violation2{"id2", "pin1", "pin2"};

    EXPECT_EQ(violation1.getId(), "id1");
    EXPECT_EQ(violation2.getId(), "id2");
}

TEST(DRCViolation, InvolvedObjectsSetCorrectly)
{
    DRCViolation violation1{"id1", "pin3", "pin4"};
    DRCViolation violation2{"id2", "pin4", "pin5"};
    
    auto involvedObjects1 = violation1.getInvolvedObjectIds();        
    EXPECT_EQ(involvedObjects1.first, "pin3");
    EXPECT_EQ(involvedObjects1.second, "pin4");

    auto involvedObjects2 = violation2.getInvolvedObjectIds();
    EXPECT_EQ(involvedObjects2.first, "pin4");
    EXPECT_EQ(involvedObjects2.second, "pin5");
}

TEST(DRCViolation, CallingUpdateSetsMarkForDeletion)
{
    DRCViolation violation1{"id1", "wire2", "wire4"};
    
    EXPECT_FALSE(violation1.isMarkedForDeletion());
    violation1.update();

    EXPECT_TRUE(violation1.isMarkedForDeletion());
    violation1.update();

    EXPECT_TRUE(violation1.isMarkedForDeletion());
}
