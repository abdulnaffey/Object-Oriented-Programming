#include <iostream>
using namespace std;
class CommunityMember
{
	int x;
public:
	CommunityMember(int);
	CommunityMember();
	void display();
};
class Employee :public CommunityMember
{
public:
	Employee();
};
class Student :public CommunityMember
{
public:
	Student();
};
class UndergraduateStudent :public Student
{
public:
	UndergraduateStudent();
};

class Freshman :public UndergraduateStudent
{
public:
	Freshman();
};
class Junior :public UndergraduateStudent
{
public:
	Junior();
};

class Senior :public UndergraduateStudent
{
public:
	Senior();
};
class Sophomore :public UndergraduateStudent
{
public:
	Sophomore();
};

class GraduateStudent :public Student
{
public:
	GraduateStudent();
};
class DoctoralStudent :public GraduateStudent
{
public:
	DoctoralStudent();
};
class MastersStudent :public GraduateStudent
{
public:
	MastersStudent();
};

class Alumnus :public CommunityMember
{
public:
	Alumnus();
};
class Faculty :public Employee
{
public:
	Faculty();
}; 
class Staff :public Employee
{
public:
	Staff();
};

class Administrator :virtual public Faculty
{
public:
	Administrator();
};

class Teacher :virtual public Faculty
{
public:
	Teacher();
};

class AdministratorTeacher :public Administrator ,public Teacher
{
public:
	AdministratorTeacher();
};