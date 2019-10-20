#include "string.h"
#include <iostream>

using namespace std;
using namespace aka;

int main(int argc, char *argv[])
{
	String s1("hello");	
	String s2 = s1;
	String s3 = "world";

	cout << "s1=" << s1.data() << endl;
	cout << "s2=" << s2.data() << endl;
	cout << "s3=" << s3.data() <<"--------------------"<< endl;
	s2 += s1;
	s3 += "world";
	cout << "s1=" << s1.data() << endl;
	cout << "s2=" << s2.data() << endl;
	cout << "s3=" << s3.data() <<"--------------------"<< endl;

	s2 = s1+s2;
	s3 = s1+ "world";
	cout << "s1=" << s1.data() << endl;
	cout << "s2=" << s2.data() << endl;
	cout << "s3=" << s3.data() <<"--------------------"<< endl;


	return 0;
}

