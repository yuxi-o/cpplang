#include "singleton.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    Planet * pPlanet = Planet::getInstance("Earth");
    cout << pPlanet->getName() << endl;

    Planet::freeInstance();

    return 0;
}
