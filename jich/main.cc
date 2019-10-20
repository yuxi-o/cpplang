#include "animal.h"
#include <iostream>

using namespace aka;
using namespace std;

int main()
{
	Cat cat(1, 1, "house");
	cat.setAge(2);
	cat.setColor(2);
	cout << cat.getAge() << cat.getCatLocation()<< cat.getColor() <<endl;
	cout << cat.getAge() << cat.getLocation()<< cat.getColor() <<endl;

	Dog dog(2,2, "home");
	dog.setAge(3);
	dog.setWeight(3);
	cout << dog.getAge() << dog.getDogLocation() << dog.getWeight() <<endl;
	cout << dog.getAge() << dog.getLocation() << dog.getWeight() <<endl;

	return 0;
}

