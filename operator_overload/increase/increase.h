#ifndef _INCREASE_H_
#define _INCREASE_H_


class Increase{
public:
	Increase(int x):value(x){};
	Increase &operator++();
	Increase operator++(int);
	int getValue(){return value;}

private:
	int value;
};

#endif
