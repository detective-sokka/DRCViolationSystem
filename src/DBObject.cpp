#include "drc_system/DBObject.hpp"

using namespace drc;

DBObject::DBObject(std::string objectId) : id{objectId}
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

std::string DBObject::getId() const
{
    return id;
}