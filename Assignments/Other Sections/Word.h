#include <iostream>
#include <fstream>
using namespace std;

class Word
{
	char* cString;

public:
	Word();
	Word(char*);
	~Word();

	void setCString(char*);
	char* getCString();

	void findChar(char);
	void findCString(char*);
	int countChar(char c);
	int length();
	int compare(char*);
	void upperCase();
	void lowerCase();

	Word operator + (const Word&);
	Word operator = (const Word&);
	bool operator < (const Word&);
	bool operator > (const Word&);

	friend ostream& operator << (ostream&, const Word&);
	friend istream& operator >> (istream&, const Word&);
};