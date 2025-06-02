#pragma once

#include <string>

#include "drc_system/Subject.hpp"

namespace drc
{
    class DBObject : public Subject
    {
        public:
            DBObject();
            DBObject(std::string);
            ~DBObject() = default;
            void subscribe(Observer* observer) override;
            void unsubscribe(Observer* observer) override;
            void notifyObservers() override;

            std::string getId();

        private:
            std::string id;        
    };
};