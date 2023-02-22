#include<iostream>
using namespace std;
class Name {
private:
	char* firstName;
	char* lastName;
public:
	Name(char* first = nullptr, char* last = nullptr);// parameterized constructor with default values
	Name(const Name&); //copy constructor
	~Name();//destructor
	char* getfirst();
	char* getlast();
	void setfirst(char*);
	void setlast(char*);
	void copyName(Name&); //this is not a copy constructor, I want this function to copy the contents of one name(firstName and lastName both) to another name.
	void camelCase(); // make first letter capital of both attributes
	void toLower(); //convert name to lower case alphabets
	void toUpper(); //convert name into upper case alphabets
	int nameLength(); // both first and last (excluding space)
	void swapNames(); // firstName becomes lastName and vice versa
	void display(); //prints name(firstName and lastName with space in between)
	char* fullName(); //concatenate both attributes and return full name with a space in between both
	bool isValidName();// name should contain only alphabets - no special characters or digits
};