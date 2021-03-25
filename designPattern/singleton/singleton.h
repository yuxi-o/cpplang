#ifndef __SINGLETON_H__
#define __SINGLETON_H__

#include <iostream>
#include <string>

class Planet
{
private:
    Planet(const std::string & name);
    std::string name_;
    static Planet* pPlanet_;

public:
    virtual ~Planet();
    static Planet* getInstance(const std::string& name);
    static void freeInstance();
    std::string getName();
    
};
#endif