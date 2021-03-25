#include "controller.hpp"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    SystemFactory *factory = new AndroidFactory();
    UIController *uiController = factory->createUIController();
    OperationController *opController = factory->createOperationController();

    uiController->display();
    opController->control();

    factory->deleteOperationController(opController);
    factory->deleteUIController(uiController);
    delete factory;

    return 0;
}
