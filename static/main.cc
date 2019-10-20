#include "martain.h"
#include <iostream>

using namespace std;

void func(){
	Martain c(3);
	int count = Martain::getCount();
	cout << "count= " << count << endl;
}

int main(int argc, char *argv[])
{
	int count = Martain::getCount();	
	cout << "count= " << count << endl;

	Martain a(1);
	count = Martain::getCount();	
	cout << "count= " << count << endl;

	Martain b(2);
	count = b.getCount();	
	cout << "count= " << count << endl;

	func();
	count = Martain::getCount();	
	cout << "count= " << count << endl;

	return 0;
}


