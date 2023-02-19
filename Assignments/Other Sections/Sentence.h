#include <iostream>
#include "Word.h"

using namespace std;

class Sentence
{
	Word* w;
	int size;

public:
	Sentence();
	Sentence(Word*, int);
	~Sentence();

	void setData(Word*, int);
	Word* getWordArray();
	int getSize();

	void toUpperCase();
	void toLowerCase();
	void findWord(char*);
	int count(char);
};