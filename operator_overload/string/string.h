#ifndef _AKA_STRING_H
#define _AKA_STRING_H

#include <stdio.h>

namespace aka{

class String{
public:
	String(const char* = NULL);	
	~String();

	String(const String&);

	String& operator=(const String&);
	String& operator=(const char*);

	String& operator+=(const String&);
	String operator+(const String&);

	String& operator+=(const char *str);
	String operator+(const char*);

	inline const char* data() const
	{
		return m_data;
	}

private:
	char *m_data;
};

}

#endif
