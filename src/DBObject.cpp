#include "drc_system/DBObject.hpp"

using namespace drc;

DBObject::DBObject() //: id{""}
{
}

DBObject::DBObject(std::string objectId) //: id{objectId}
{
}

void DBObject::subscribe(Observer *observer)
{
}

void DBObject::unsubscribe(Observer *observer)
{
}

void DBObject::notifyObservers()
{
}

std::string DBObject::getId()
{
    return id;
}