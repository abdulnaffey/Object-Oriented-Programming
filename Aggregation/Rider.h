#include <iostream>
#include <string>
using namespace std;
class Rider
{
	char* name;
	char* contact;
	float rating;
	int   cancelled;


public:
	~Rider();
	Rider();
	Rider(const char*, const char*, float, int);
	void   setName(const char*);
	void   setContact(const char*);
	void   setCancelled(int);
	void   setRating(float);
	char* getName()const;
	char* getContact()const;
	int    getCancelled()const;
	float  getRating()const;
	void   riderInfo()const;
	Rider& operator =(const Rider&);
};

