#pragma once

#include <string>
#include <unordered_set>

#include "drc_system/Observer.hpp"
#include "drc_system/Subject.hpp"

namespace drc
{
    class DBObject : public Subject
    {

        public:
            explicit DBObject(std::string);
            ~DBObject() = default;
            void subscribe(Observer* observer) override;
            void unsubscribe(Observer* observer) override;
            void notifyObservers() override;

            std::string getId() const;

        private:
            std::string id;        
            std::unordered_set<Observer*> observers;
    };
};