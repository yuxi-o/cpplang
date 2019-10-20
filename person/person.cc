#include "person.h"

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

Person::Person():age(10), name(NULL)
{
	//nothing	
	cout<<"no param construct!"<<endl;
}

Person::Person(int myage, char *myname)
{
	age = myage;
	if(myname != NULL){
		name = new char[strlen(myname) + 1];
		this->print();
		strcpy(name, myname);
	}
	cout<<"param construct!"<<endl;
}

Person::Person(const Person &a)
{
	cout <<"copy constructor!"<<endl;
	if(a.name != NULL){
		name = new char[strlen(a.name)+1];
		this->print();
		strcpy(name, a.name);
		age = a.age;	
	} else {
		name = NULL;
		age = 10;
	}
}

Person& Person::operator=(const Person &a)
{
	cout <<"= constructor!"<<endl;
	if(&a == this){
		return *this;
	}

	if(name != NULL){
		delete [] name;
		name = NULL;
	}
	if(a.name != NULL){
		name = new char[strlen(a.name)+1];
		this->print();
		strcpy(name, a.name);
		age = a.age;	
	} else {
		name = NULL;	
		age = 10;
	}

	return *this;
}


Person::~Person()
{
	if(NULL != name){
		delete [] name;
		name = NULL;
	}
	cout<<"destructor!"<<endl;
}

void Person::set_age(int myage)
{
	age = myage;
}

int Person::get_age(void) const
{
	return age;
}

void Person::set_other_age(Person& a, int b)
{
	a.age = b;
	//a.set_age(b);
}

void Person::print() const
{
	if(name != NULL)
		cout <<"value:" << name;
	cout<< " name=" << static_cast<void*> (name) << endl;
}

