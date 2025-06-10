#pragma once

#include <string>
#include <unordered_set>

#include "drc_system/IObject.hpp"
#include "drc_system/Observer.hpp"
#include "drc_system/Subject.hpp"

namespace drc
{
    class DBObject : public Subject, public IObject
    {

        public:
            explicit DBObject();
            virtual ~DBObject() = default;
            void subscribe(Observer* observer) override;
            void unsubscribe(Observer* observer) override;
            void notifyObservers() override;

        private:            
            std::unordered_set<Observer*> observers;
    };
};