#include "Driver.h"
Driver:: ~Driver()
{
	if (name[0] == '\0')
	{
		delete name;
		delete contact_Number;
		delete address;
		delete CNIC;
	}
	else
	{
		delete[] name;
		delete[] contact_Number;
		delete[] address;
		delete[] CNIC;
	}
	name = nullptr;
	contact_Number = nullptr;
	address = nullptr;
	CNIC = nullptr;
}
Driver::Driver()
{
	name = new char;
	name[0] = '\0';
	contact_Number = new char;
	contact_Number[0] = '\0';
	address = new char;
	address[0] = '\0';
	CNIC = new char;
	CNIC[0] = '\0';
	completed = 0;
	rating = 0.0;
}
Driver::Driver(const char* n, const char* c, const char* addr, const char* cnic, int comp, float rat)
{
	int l = 0;
	for (int i = 0; n[i] != '\0'; i++)
	{
		l++;
	}
	name = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		name[i] = n[i];
	}
	name[l] = '\0';
	l = 0;

	for (int i = 0; c[i] != '\0'; i++)
	{
		l++;
	}
	contact_Number = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		contact_Number[i] = c[i];
	}
	contact_Number[l] = '\0';
	l = 0;

	for (int i = 0; addr[i] != '\0'; i++)
	{
		l++;
	}
	address = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		address[i] = addr[i];
	}
	address[l] = '\0';
	l = 0;

	for (int i = 0; cnic[i] != '\0'; i++)
	{
		l++;
	}
	CNIC = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		CNIC[i] = cnic[i];
	}
	CNIC[l] = '\0';
	l = 0;

	completed = comp;
	rating = rat;
}
void    Driver::setName(const char* n)
{
	int l = 0;
	for (int i = 0; n[i] != '\0'; i++)
	{
		l++;
	}

	name = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		name[i] = n[i];
	}
	name[l] = '\0';
}
void    Driver::setContact_Number(const char* c)
{
	int l = 0;
	for (int i = 0; c[i] != '\0'; i++)
	{
		l++;
	}
	contact_Number = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		contact_Number[i] = c[i];
	}
	contact_Number[l] = '\0';
}
void    Driver::setAddress(const char* addr)
{
	int l = 0;

	for (int i = 0; addr[i] != '\0'; i++)
	{
		l++;
	}
	address = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		address[i] = addr[i];
	}
	address[l] = '\0';
}
void    Driver::setCnic(const char* cnic)
{
	int l = 0;

	for (int i = 0; cnic[i] != '\0'; i++)
	{
		l++;
	}
	CNIC = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		CNIC[i] = cnic[i];
	}
	CNIC[l] = '\0';
}
void    Driver::setComplete(int comp)
{
	completed = comp;
}
void    Driver::setRating(float rat)
{
	rating = rat;
}
char* Driver::getName()const
{
	char* temp;
	int l = 0;
	for (int i = 0; name[i] != '\0'; i++)
	{
		l++;
	}

	temp = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		temp[i] = name[i];
	}
	temp[l] = '\0';
	return temp;
}
char* Driver::getContact_Number()const
{
	char* temp;
	int l = 0;
	for (int i = 0; contact_Number[i] != '\0'; i++)
	{
		l++;
	}

	temp = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		temp[i] = contact_Number[i];
	}
	temp[l] = '\0';
	return temp;
}
char* Driver::getAddress()const
{
	char* temp;
	int l = 0;
	for (int i = 0; address[i] != '\0'; i++)
	{
		l++;
	}

	temp = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		temp[i] = address[i];
	}
	temp[l] = '\0';
	return temp;
}
char* Driver::getCnic()const
{
	char* temp;
	int l = 0;
	for (int i = 0; CNIC[i] != '\0'; i++)
	{
		l++;
	}

	temp = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		temp[i] = CNIC[i];
	}
	temp[l] = '\0';
	return temp;

}
int     Driver::getComplete()const
{
	return completed;
}
float   Driver::getRating()const
{
	return rating;
}
void    Driver::driverInfo()const
{
	cout << "Name :" << name;
	cout << "\nContact Number :" << contact_Number;
	cout << "\nCNIC :" << CNIC;
	cout << "\nAddress :" << address;
	cout << "\nTrips completed :" << completed;
	cout << "\nDriver's rating :" << rating << endl;
}
Driver& Driver:: operator =(const Driver& obj)
{
	int l = 0;
	for (int i = 0; obj.name[i] != '\0'; i++)
	{
		l++;
	}
	name = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		name[i] = obj.name[i];
	}
	name[l] = '\0';
	l = 0;

	for (int i = 0; obj.contact_Number[i] != '\0'; i++)
	{
		l++;
	}
	contact_Number = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		contact_Number[i] = obj.contact_Number[i];
	}
	contact_Number[l] = '\0';
	l = 0;

	for (int i = 0; obj.address[i] != '\0'; i++)
	{
		l++;
	}
	address = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		address[i] = obj.address[i];
	}
	address[l] = '\0';
	l = 0;

	for (int i = 0; obj.CNIC[i] != '\0'; i++)
	{
		l++;
	}
	CNIC = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		CNIC[i] = obj.CNIC[i];
	}
	CNIC[l] = '\0';
	l = 0;

	completed = obj.completed;
	rating = obj.rating;
	return *this;
}

