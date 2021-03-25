#ifndef __CONTROLLER_HPP__
#define __CONTROLLER_HPP__

#include <iostream>
#include <string>

class OperationController
{
public:
    virtual void control() = 0;
};

class UIController
{
public:
    virtual void display() = 0;
};

class AndroidOperationController: public OperationController
{
public:
    void control(){
        std::cout << "AndroidOperationController" << std::endl;
    }
};

class AndroidUIController: public UIController
{
public:
    void display(){
        std::cout << "AndroidInterfaceController" << std::endl;
    }
};
//Ios operationController and UIController
class IosOperationController :public OperationController {
public:
	void control() { std::cout << "IosOperationController." << std::endl; }
};

class IosUIController :public UIController {
public:
	void display() { std::cout << "IosInterfaceController." << std::endl; }
};

//Wp operationController and UIController
class WpOperationController :public OperationController {
public:
	void control() { std::cout << "WpOperationController." << std::endl; }
};

class WpUIController :public UIController {
public:
	void display() { std::cout << "WpInterfaceController." << std::endl; }
};

// factory
class SystemFactory
{
public:
    virtual OperationController * createOperationController() = 0;
    virtual UIController * createUIController() = 0;

    void deleteOperationController(OperationController *p){
        if(p != NULL){
            delete p;
        }
    }

    void deleteUIController(UIController *p){
        if(p != NULL){
            delete p;
        }
    }
};

//Android Factroy
class AndroidFactory :public SystemFactory {
public:
	OperationController* createOperationController() {
		return new AndroidOperationController();
	}
	UIController* createUIController() {
		return new AndroidUIController();
	};
};

//Ios Factroy
class IosFactory :public SystemFactory {
public:
	OperationController* createOperationController() {
		return new IosOperationController();
	}
	UIController* createUIController() {
		return new IosUIController();
	};
};

//Wp Factroy
class WpFactory :public SystemFactory {
public:
	OperationController* createOperationController() {
		return new WpOperationController();
	}
	UIController* createUIController() {
		return new WpUIController();
	};
};

#endif
