#include "MyString.h"

MyString::MyString()
{
	String = nullptr;
}

MyString::MyString(char* s)
{
	int len = 0;

	for (len = 0; s[len] != '\0'; len++);

	String = new char[len + 1];

	for (int i = 0; i < len; i++)
	{
		String[i] = s[i];
	}
	String[len] = '\0';
}

void MyString::setData(char* s)
{
	int len = 0;

	for (len = 0; s[len] != '\0'; len++);

	String = new char[len + 1];

	for (int i = 0; i < len; i++)
	{
		String[i] = s[i];
	}
	String[len] = '\0';
}

char* MyString::getData()
{
	int len = 0;

	for (len = 0; String[len] != '\0'; len++);

	char* s;
	s = new char[len + 1];

	for (int i = 0; i < len; i++)
	{
		s[i] = String[i];
	}
	s[len] = '\0';

	return s;
}

MyString::~MyString()
{
	delete[] String;
	String = nullptr;
}