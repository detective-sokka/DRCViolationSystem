#pragma once

#include <string>

namespace drc
{
    class IObject
    {
        public: 
            virtual std::string getId() const = 0;
    };
};