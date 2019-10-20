#include "rmb.h"

RMB RMB::operator+(const RMB &a)
{	
	uint jf = a.jf + this->jf;
	uint yuan = a.yuan + this->yuan;
	
	if(jf > 100){
		jf -= 100;
		yuan += 1;
	}

	return RMB(yuan, jf);
}

bool RMB::operator>(const RMB &b)
{
	if((this->yuan > b.yuan) || ((this->yuan == b.yuan)&& (this->jf > b.jf)))	
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


