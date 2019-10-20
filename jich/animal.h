#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <string>
#include <iostream>

using std::string;

namespace aka{

class Animal{
public:
	Animal(int age, string location);
	~Animal();

	void setAge(int age);
	int getAge() const;
	string getLocation() const;

protected:
	void setLocation(string location){
		m_location = location;
	} 
	
	string m_location;

private:
	int m_age;
};

class Cat :public Animal{
public:
	Cat(int age, int color, string location);
	~Cat();

	void setColor(int color);
	int getColor() const;
	void setCatLocation(string location){
		//Animal::setLocation(location);
		m_location = location;
	}
	string getCatLocation(){
		//Animal::setLocation(location);
		return m_location;
	}

private:
	int m_color;

};

class Dog :public Animal{
public:
	Dog(int age, int weight, string location);
	~Dog();
	int getWeight() const;
	void setWeight(int weight);

	string getDogLocation(){
		//Animal::setLocation(location);
		return m_location;
	}
private:
	int m_weight;

};

}

#endif
