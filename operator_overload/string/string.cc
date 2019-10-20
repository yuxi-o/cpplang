#include "string.h"

#include <string.h>
#include <iostream>
//using namespace std;
using namespace aka;

String::String(const char*str)
{
	if(NULL == str){
		m_data = new char[1];
		*m_data = '\0';
	} else {
		int length = strlen(str);
		m_data = new char[length+1];
		strcpy(m_data, str);
	}
}

String::~String()
{
	delete [] m_data;
}

String::String(const String &other)
{
	int length = strlen(other.m_data);
	m_data = new char[length + 1];
	strcpy(m_data, other.m_data);
}

String& String::operator=(const String &other)
{
	if(this == &other){
		return *this;
	}	

	delete [] m_data;

	int length = strlen(other.m_data);
	m_data = new char[length + 1];
	strcpy(m_data, other.m_data);

	return *this;
}

String & String::operator=(const char *str)
{
	delete[] m_data;

	if(str == NULL){
		m_data = new char[1];
		*m_data = '\0';
	} else {
		int length = strlen(str);
		m_data = new char[length + 1];
		strcpy(m_data, str);
	}
}

String& String::operator+=(const String& other)
{
	char *tmp = m_data;
	int length = strlen(m_data) + strlen(other.m_data);

	m_data = new char[length + 1];
	strcpy(m_data, tmp);
	strcat(m_data, other.m_data);

	delete [] tmp;

	return *this;
}

String String::operator+(const String& other)
{
	int length = strlen(m_data) + strlen(other.m_data);
	char *tmp= new char[length + 1];

	strcpy(tmp, m_data);
	strcat(tmp, other.m_data);

	return String(tmp);
}

String & String::operator+=(const char*other)
{
	String tmp(other);
	*this += tmp;

	return *this;
}

String String::operator+(const char* other)
{
	String result = *this;
	result += other;

	return result;
}
