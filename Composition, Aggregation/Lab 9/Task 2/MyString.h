#include <iostream>
using namespace std;

class MyString
{
	char* String;

public:
	MyString();
	MyString(char* s);
	~MyString();

	void setData(char* s);
	char* getData();
};