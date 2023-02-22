#include <iostream>
#include <string>
using namespace std;
class Driver
{
	char* name;
	char* contact_Number;
	char* address;
	char* CNIC;
	int   completed;
	float rating;

public:
	~Driver();
	Driver();
	Driver(const char*, const char*, const char*, const char*, int, float);
	void    setName(const char*);
	void    setContact_Number(const char*);
	void    setAddress(const char*);
	void    setCnic(const char*);
	void    setComplete(int);
	void    setRating(float);
	char* getName()const;
	char* getContact_Number()const;
	char* getAddress()const;
	char* getCnic()const;
	int     getComplete()const;
	float   getRating()const;
	void    driverInfo()const;
	Driver& operator =(const Driver&);
};

