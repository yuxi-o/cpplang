#include "increase.h"

Increase& Increase::operator++()
{
	value++;
	
	return *this;
}

Increase Increase::operator++(int)
{
	Increase tmp(*this);
	value++;
	return tmp;
}
