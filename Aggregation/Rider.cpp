#include "Rider.h"
Rider:: ~Rider()
{
	if (name[0] == '\0')
	{
		delete name;
		delete contact;
	}
	else
	{
		delete[] name;
		delete[] contact;
	}
	name = nullptr;
	contact = nullptr;
}
Rider::Rider()
{
	name = new char;
	name[0] = '\0';
	contact = new char;
	contact[0] = '\0';
	cancelled = 0;
	rating = 0.0;
}
Rider::Rider(const char* n, const char* c, float rat, int can)
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
	contact = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		contact[i] = c[i];
	}
	contact[l] = '\0';
	l = 0;


	cancelled = can;
	rating = rat;
}
void   Rider::setName(const char* n)
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
void   Rider::setContact(const char* n)
{
	int l = 0;
	for (int i = 0; n[i] != '\0'; i++)
	{
		l++;
	}
	contact = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		contact[i] = n[i];
	}
	contact[l] = '\0';
}
void   Rider::setCancelled(int x)
{
	cancelled = x;
}
void   Rider::setRating(float x)
{
	rating = x;
}
char* Rider::getName()const
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
char* Rider::getContact()const
{
	char* temp;
	int l = 0;
	for (int i = 0; contact[i] != '\0'; i++)
	{
		l++;
	}

	temp = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		temp[i] = contact[i];
	}
	temp[l] = '\0';
	return temp;
}
int    Rider::getCancelled()const
{
	return cancelled;
}
float  Rider::getRating()const
{
	return rating;
}
void   Rider::riderInfo()const
{
	cout << "Name :" << name;
	cout << "\nContact Number :" << contact;
	cout << "\nTrips cancelled :" << cancelled;
	cout << "\nDriver's rating :" << rating << endl;
}
Rider& Rider:: operator =(const Rider& obj)
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

	for (int i = 0; obj.contact[i] != '\0'; i++)
	{
		l++;
	}
	contact = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		contact[i] = obj.contact[i];
	}
	contact[l] = '\0';
	l = 0;


	cancelled = obj.cancelled;
	rating = obj.rating;
	return *this;
}

