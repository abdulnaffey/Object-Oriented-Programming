#include "String.h"

String::String()
{	
	s = new char;
	s[0] = '\0';
}
String::String(const String& str)
{
	int l = 0;
	for (int i = 0; str.s[i] != '\0'; i++)
	{
		l++;
	}
	s = new char[l+1];
	for (int i = 0; i < l; i++)
	{
		s[i]=str.s[i];
	}
	s[l] = '\0';
}
String::String(const String& str,int pos , int len)
{
	int l = 0;
	for (int i = pos-1; str.s[i] != '\0'; i++)
	{
		l++;
	}
	s = new char[l + 1];
	int count = 0;
	for (int i = pos-1; i < l; i++, count++)
	{
		s[count] = str.s[i];
	}
	s[count] = '\0';
}
String::String(const char* h)
{
	int l = 0;
	for (int i = 0; h[i] != '\0'; i++)
	{
		l++;
	}
	s = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		s[i] = h[i];
	}
	s[l] = '\0';
}
String::String(const char* h, int n)
{
	int l = 0;
	for (int i = 0; i<n; i++)
	{
		l++;
	}
	s = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		s[i] = h[i];
	}
	s[l] = '\0';
}
String::String(int n, char c )
{
	s = new char[n+1];
	for (int i = 0; i < n; i++)
	{
		s[i] = c;
	}
	s[n] = '\0';
}
int String::length()
{
	int l = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		l++;
	}
	return l;
}
char String::at(int i)
{
	return s[i];
}
String String :: substr(int pos, int len)const
{
	int l = 0;
	for (int i = pos; i < len || s[i] != '\0'; i++)
	{
		l++;
	}
	char *k = new char[l + 1];
	int count = 0;
	for (int i = pos; i < len||s[i]!='\0'; i++,count++)
	{
		k[count] = s[i];
	}
	k[count] = '\0';
	return k;
}
String:: ~String()
{
	if (s == nullptr)
		delete s;
	else
		delete[] s;
	s = NULL;
}
ostream& operator<< (ostream& os, const String&p)
{
	for (int i = 0; p.s[i] != '\0'; i++)
	{
		os << p.s[i];
	}
	return os;
}
int String::Strcmp(const char* x, const char* y)
{
	int chk ;
	for (int i = 0; x[i] != '\0' || y[i] != '\0'; i++)
	{
		if (x[i] == y[i])
		{
			chk = 0;
		}
		else if (x[i] > y[i])
		{
			chk = 1;
			break;
		}
		else
		{
			chk = -1;
			break;
		}
	}
	return chk;
}
char* String::Strcpy(char* y, const char* x)
{
	char z[] = "Size for destination is less ";
	int l = 0,l2=0;
	for (int i = 0; x[i] != '\0'; i++)
	{
		l++;
	}
	for (int i = 0; y[i] != '\0'; i++)
	{
		l2++;
	}
	if (l2 < l)
		return z;
	for (int i = 0; y[i] != '\0'; i++)
	{
		if (i < l)
		{
			y[i] = x[i];
		}
		else
		{
			y[i] = '\0';
			break;
		}
	}
	return y;
}