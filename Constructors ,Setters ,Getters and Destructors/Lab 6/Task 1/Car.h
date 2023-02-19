#include <iostream>
using namespace std;

class Car
{
	char* name;
	char* model;
	int* noOfDoor;
public:
	
	Car();
	Car(const char*, const char*,  int*);
	Car(const Car&);
	void setname(const char*);
	void setmodel(const char*);
	void setdoor( int*);
	char* getname();
	char* getmodel();
	int* getdoor();
	void display();
	~Car();
};