#include"Name.h"

Name::Name(char* first , char* last )
{
	int length = 0;
	for(int i=0;first[i]!='\0';i++)
	{ 
		length++;
	}
	firstName = new char[length+1];
	for (int i = 0; i<length; i++)
	{
		firstName[i] = first[i];
	}
	firstName[length] = '\0';


	length = 0;
	for (int i = 0; last[i] != '\0'; i++)
	{
		length++;
	}
	lastName = new char[length+1];
	for (int i = 0; i < length; i++)
	{
		lastName[i] = last[i];
	}
	lastName[length] = '\0';
}
Name::Name(const Name& obj)
{
	int length = 0;
	for (int i = 0; obj.firstName[i] != '\0'; i++)
	{
		length++;
	}
	firstName = new char[length+1];
	for (int i = 0; i < length; i++)
	{
		firstName[i] = obj.firstName[i];
	}
	firstName[length] = '\0';


	length = 0;
	for (int i = 0; obj.lastName[i] != '\0'; i++)
	{
		length++;
	}
	lastName = new char[length+1];
	for (int i = 0; i < length; i++)
	{
		lastName[i] = obj.lastName[i];
	}
	lastName[length] = '\0';
}
Name::~Name()
{
	delete[]firstName;
	firstName = NULL;
	delete[]lastName;
	lastName = NULL;
}
void Name::copyName(Name& obj)
{
	int length = 0;
	for (int i = 0; obj.firstName[i] != '\0'; i++)
	{
		length++;
	}
	firstName = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		firstName[i] = obj.firstName[i];
	}
	firstName[length] = '\0';


	length = 0;
	for (int i = 0; obj.lastName[i] != '\0'; i++)
	{
		length++;
	}
	lastName = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		lastName[i] = obj.lastName[i];
	}
	lastName[length] = '\0';
}
void Name::camelCase()
{
	if (*(firstName + 0) < 123 && *(firstName + 0) > 96)
	{
		*(firstName + 0) = *(firstName + 0) + 32;
	}
}
void Name::toLower()
{
	for (int i = 0; *(firstName + i) != '\0'; i++)
	{
		if (*(firstName + i) < 91 && *(firstName + i) > 64)
		{
			*(firstName + i) = *(firstName + i) + 32;
		}
	}
	for (int i = 0; *(lastName + i) != '\0'; i++)
	{
		if (*(lastName + i) < 91 && *(lastName + i) > 64)
		{
			*(lastName + i) = *(lastName + i) + 32;
		}
	}
	
}
void Name::toUpper()
{

	for (int i = 0; *(firstName + i) != '\0'; i++)
	{
		if (*(firstName + i) < 123 && *(firstName + i) > 96)
		{
			*(firstName + i) = *(firstName + i) - 32;
		}
	}
	for (int i = 0; *(lastName + i) != '\0'; i++)
	{
		if (*(lastName + i) < 123 && *(lastName + i) > 96)
		{
			*(lastName + i) = *(lastName + i) - 32;
		}
	}
}
int Name::nameLength()
{
	int length = 0;
	for (int i = 0; firstName[i] != '\0'; i++)
	{
		if (firstName[i] != 32)
			length++;
	}
	for (int i = 0; lastName[i] != '\0'; i++)
	{
		if (firstName[i] != 32)
			length++;
	}
	return length;
}
void Name::swapNames()
{
	int length = 0;
	for (int i = 0; firstName[i] != '\0'; i++)
	{
			length++;
	}
	char* temp = new char[length+1];
	for (int i = 0; i < length; i++)
	{
		temp[i] = firstName[i];
	}
	temp[length] = '\0';
	delete[] firstName;
	firstName = NULL;
	length = 0;
	for (int i = 0; lastName[i] != '\0'; i++)
	{
			length++;
	}
	 firstName = new char[length+1];
	 for (int i = 0; i < length; i++)
	 {
		 firstName[i] = lastName[i];
	 }
	 firstName[length] = '\0';

	 delete[] lastName;
	 lastName = NULL;

	 for (int i = 0; temp[i] != '\0'; i++)
	 {
			 length++;
	 }
	 lastName = new char[length+1];
	 
	 for (int i = 0; i < length; i++)
	 {
		 lastName[i] = temp[i];
	 }
	 lastName[length] = '\0';
	 delete[]temp;
	 temp = NULL;

}
void Name::display()
{
	cout << firstName << " " << lastName << endl;
}
char* Name::fullName()
{
	int length = 0;
	for (int i = 0; firstName[i] != '\0'; i++)
	{
			length++;
	}
	for (int i = 0; lastName[i] != '\0'; i++)
	{
			length++;
	}
	char *temp = new char[length + 2];
	int x = 0;
	for (int i = 0; firstName[i] != '\0'; i++)
	{
		temp[x++] = firstName[i];
	}
	temp[x++] = 32;
	for (int i = 0; lastName[i] != '\0'; i++)
	{
		temp[x++] = lastName[i];
	}
	temp[x] = '\0';

	return temp;
}
bool Name::isValidName()
{
	bool chk = 0;
	for (int i = 0; firstName[i] != '\0'; i++)
	{
		if ((firstName[i] < 65 && firstName[i] > 90) && (firstName[i] < 97 && firstName[i] > 122))
		{
			chk = 1;
		}
	}
	for (int i = 0; lastName[i] != '\0'; i++)
	{
		if ((lastName[i] < 65 && lastName[i] > 90) && (lastName[i] < 97 && lastName[i] > 122))
		{
			chk = 1;
		}
	}
	return chk;
}
char* Name::getfirst()
{
	int length = 0;
	for (int i = 0; firstName[i] != '\0'; i++)
	{
			length++;
	}
	char* temp = new char[length+1];
	for (int i = 0; i < length; i++)
	{
		temp[i] = firstName[i];
	}
	temp[length] = '\0';
	return temp;
}
char* Name::getlast()
{
	int length = 0;
	for (int i = 0; lastName[i] != '\0'; i++)
	{
		length++;
	}
	char* temp = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		temp[i] = lastName[i];
	}
	temp[length] = '\0';
	return temp;
	
}

void Name::setfirst(char * x)
{
	int length = 0;
	for (int i = 0; x[i] != '\0'; i++)
	{
		length++;
	}
	firstName = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		firstName[i] = x[i];
	}
	firstName[length] = '\0';
}
void Name::setlast(char* x)
{

	int length = 0;
	for (int i = 0; x[i] != '\0'; i++)
	{
		length++;
	}
	lastName = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		lastName[i] = x[i];
	}
	lastName[length] = '\0';
}
