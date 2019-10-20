#include "rmb.h"

RMB operator+(const RMB &a, const RMB &b)
{	
	uint jf = a.jf + b.jf;
	uint yuan = a.yuan + b.yuan;
	
	if(jf > 100){
		jf -= 100;
		yuan += 1;
	}

	return RMB(yuan, jf);
}

bool operator>(const RMB &a, const RMB &b)
{
	if((a.yuan > b.yuan) || ((a.yuan == b.yuan)&& (a.jf > b.jf)))	
		return true;
	else 
		return false;
}

RMB::RMB(uint y, uint jf1)
	:yuan(y), jf(jf1)
{

}


RMB::~RMB()
{
	
}


