#include "Word.h"
#include <fstream>

Word::Word()
{
	cString = nullptr;
}

Word::Word(char* data)
{
	int len = 0;

	for (len = 0; data[len] != '\0'; len++);

	cString = new char[len + 1];

	for (int i = 0; data[i] != '\0'; i++)
	{
		cString[i] = data[i];
	}
	cString[len] = '\0';
}

void Word::setCString(char* data)
{
	int len = 0;

	for (len = 0; data[len] != '\0'; len++);

	cString = new char[len + 1];

	for (int i = 0; data[i] != '\0'; i++)
	{
		cString[i] = data[i];
	}
	cString[len] = '\0';
}

void Word::findChar(char c)
{
	for (int i = 0; cString[i] != '\0'; i++)
	{
		if (c == cString[i])
		{
			cout << "Character " << c << " found at index " << i << endl;
			break;
		}
	}
}

void Word::findCString(char* data)
{
	int count1 = 0, count2 = 0, j = 0;
	
	for (count1 = 0; data[count1] != '\0'; count1++);

	for (int i = 0; cString[i] != '\0'; i++)
	{
		if (cString[i] == data[j])
		{
			while (cString[i] == data[j])
			{
				if (cString[i] == '\0' || data[j] == '\0')
					break;

				i++;
				j++;
				count2++;
			}
		}
	}

	if (count1 == count2)
	{
		cout << "CString " << data << " found in CString " << cString << endl;
	}
}

int Word::countChar(char c)
{
	int count = 0;

	for (int i = 0; cString[i] != '\0'; i++)
	{
		if (cString[i] == c)
			count++;
	}

	return count;
}

int Word::length()
{
	int len = 0;

	for (len = 0; cString[len] != '\0'; len++);

	return len;
}

int Word::compare(char* data)
{
	int count1 = 0, count2 = 0;

	for (count2 = 0; cString[count1] != '\0'; count1++);

	for (count2 = 0; data[count2] != '\0'; count2++);

	if (count1 == count2)
	{
		return 0;
	}

	else if (count1 > count2)
	{
		return -1;
	}

	else
	{
		return 1;
	}
}

void Word::upperCase()
{
	for (int i = 0; cString[i] != '\0'; i++)
	{
		if (cString[i] >= 97 && cString[i] <= 122)
		{
			cString[i] -= 32;
		}
	}
}

void Word::lowerCase()
{
	for (int i = 0; cString[i] != '\0'; i++)
	{
		if (cString[i] >= 65 && cString[i] <= 90)
		{
			cString[i] += 32;
		}
	}
}

Word Word::operator + (const Word& obj)
{
	int len = 0, len1 = 0, len2 = 0;

	for (len1 = 0; cString[len1] != '\0'; len1++);

	for (len2 = 0; obj.cString[len2] != '\0'; len2++);

	len = len1 + len2 + 1;

	Word temp;

	temp.cString = new char[len + 1];

	int count = 0;

	for (int i = 0; cString[i] != '\0'; i++)
	{
		temp.cString[count++] = cString[i];
	}

	temp.cString[count++] = ' ';

	for (int i = 0; obj.cString[i] != '\0'; i++)
	{
		temp.cString[count++] = obj.cString[i];
	}

	temp.cString[len] = '\0';

	return temp;
}
Word Word::operator = (const Word& obj)
{
	int len = 0;

	for (len = 0; obj.cString[len] != '\0'; len++);

	cString = new char[len + 1];

	for (int i = 0; obj.cString[i] != '\0'; i++)
	{
		cString[i] = obj.cString[i];
	}
	cString[len] = '\0';

	return *this;
}
bool Word::operator > (const Word& obj)
{
	int count1 = 0, count2 = 0;

	for (count2 = 0; cString[count1] != '\0'; count1++);

	for (count2 = 0; obj.cString[count2] != '\0'; count2++);

	if (count1 > count2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Word::operator < (const Word& obj)
{
	int count1 = 0, count2 = 0;

	for (count2 = 0; cString[count1] != '\0'; count1++);

	for (count2 = 0; obj.cString[count2] != '\0'; count2++);

	if (count1 < count2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

ostream& operator << (ostream& os, const Word& obj)
{
	os << "Cstring : " << obj.cString << endl;
	return os;
}

istream& operator >> (istream& is, const Word& obj)
{
	cout << "Enter the cString : ";
	is >> obj.cString;
	return is;
}

Word::~Word()
{
	delete[] cString;
	cString = nullptr;
}