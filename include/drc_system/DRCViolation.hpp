#pragma once

#include <utility>
#include <string>

#include "drc_system/Observer.hpp"

namespace drc
{
    class DRCViolation : public Observer
    {
        public:
            DRCViolation(std::string violationId, std::string firstObjectId, std::string secondObjectId);
            void update() override;
            std::string getId() const;
            std::pair<std::string, std::string> getInvolvedObjectIds() const;
            bool isMarkedForDeletion() const;
        private:
            bool markedForDeletion;
            std::string violationId;
            std::pair<std::string, std::string> involvedObjectIds;
    };
};
