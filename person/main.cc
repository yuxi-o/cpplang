#include "person.h"

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	Person a(11, "xiaohhhhh");	
	Person b(13, "mingttttt");
	Person m;

	m = b;
	a.print();
	b.print();
	m.print();

	Person n(13, "qing");
	b=n;
	a=n;
	m=n;
	a.print();
	b.print();
	m.print();

	return 0;
}
