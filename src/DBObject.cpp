#include "drc_system/DBObject.hpp"

using namespace drc;

DBObject::DBObject()
{
}

void DBObject::subscribe(Observer *observer)
{
    this->observers.insert(observer);
}

void DBObject::unsubscribe(Observer *observer)
{
    this->observers.erase(observer);
}

void DBObject::notifyObservers()
{
    for (auto *observer : this->observers)
        observer->update();
}