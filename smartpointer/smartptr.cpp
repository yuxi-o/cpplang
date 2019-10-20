#include "RefCount.h"
#include "SmartPtr.h"

int main(int argc, char*argv[])
{
	SmartPtr<Sample> p = new Sample; 	

	p->doSomething();

	return 0;
}
