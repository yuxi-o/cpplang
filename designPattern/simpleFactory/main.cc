#include "drawShape.hpp"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    Shape *pshape = ShapeFactory::getShape("rect");
    pshape->draw();
//    ShapeFactory::deleteShape(pshape);

    return 0;
}
