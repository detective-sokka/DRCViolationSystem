#include <exception>
#include "drc_system/DRCViolation.hpp"

using namespace drc;

void DRCViolation::update()    
{
    markedForDeletion = true;
}

std::string DRCViolation::getId() const
{
    return violationId;
}
DRCViolation::DRCViolation(std::string violationId, std::string firstObjectId, std::string secondObjectId) 
                          : violationId{violationId}
                          , involvedObjectIds{firstObjectId, secondObjectId}
                          , markedForDeletion{false}
{
}

std::pair<std::string, std::string> DRCViolation::getInvolvedObjectIds() const
{
    return involvedObjectIds;
}

bool DRCViolation::isMarkedForDeletion() const
{
    return markedForDeletion;
}