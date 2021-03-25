#include <cstdio>
#include "singleton.h"

Planet *Planet::pPlanet_ = nullptr;

Planet::Planet(const std::string& name)
    :name_(name)
{
}

Planet::~Planet(){
    std::cout <<"destructor Planet"<< std::endl;
}

Planet* Planet::getInstance(const std::string &name)
{
    if(pPlanet_ == nullptr){
        pPlanet_ = new Planet(name);
    }
    return pPlanet_;
}

void Planet::freeInstance()
{
    if(Planet::pPlanet_ != NULL){
        delete pPlanet_;
    }
}

std::string Planet::getName()
{
    return name_;
}

