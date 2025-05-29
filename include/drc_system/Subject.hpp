#pragma once

#include "drc_system/Observer.hpp"

namespace drc
{
    class Subject
    {
        public: 
            virtual void subscribe(Observer* observer) = 0;
            virtual void unsubscribe(Observer* observer) = 0;
            virtual void notifyObservers() = 0;

            virtual ~Subject() = default;
    };
}