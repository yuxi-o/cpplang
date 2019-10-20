#include "increase.h"

#include <iostream>
using namespace std;

int main()
{
	Increase in(10);
	Increase in2=in++;
	cout <<in.getValue()<<endl;
	cout <<in2.getValue()<<endl;

	++in;
	cout <<in.getValue()<<endl;

	return 0;
}


