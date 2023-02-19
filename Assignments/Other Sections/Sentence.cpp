#include "Sentence.h"

Sentence::Sentence()
{
	w = nullptr;
	size = 0;
}

Sentence::Sentence(Word* obj, int len)
{
	w = new Word[len];

	for (int i = 0; i < len; i++)
	{
		w[i] = obj[i];
	}

	size = len;
}

void Sentence::setData(Word* obj, int len)
{
	w = new Word[len];

	for (int i = 0; i < len; i++)
	{
		w[i] = obj[i];
	}

	size = len;
}
Word* Sentence::getWordArray()
{
	Word* temp;

	temp = new Word[size];

	for (int i = 0; i < size; i++)
	{
		temp[i] = w[i];
	}

	return temp;
}
int Sentence::getSize()
{
	return size;
}

void Sentence::toUpperCase()
{
	for (int i = 0; i < size; i++)
	{
		w[i].upperCase();
	}
}

void Sentence::toLowerCase()
{
	for (int i = 0; i < size; i++)
	{
		w[i].lowerCase();
	}
}

void Sentence::findWord(char* data)
{
	for (int i = 0; i < size; i++)
	{
		w[i].findCString(data);
	}
}

int Sentence::count(char c)
{
	for (int i = 0; i < size; i++)
	{
		w[i].countChar(c);
	}
}

Sentence::~Sentence()
{
	delete[] w;
	w = nullptr;
}