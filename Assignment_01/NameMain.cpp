#include"Name.h"
int Namecompare(Name name1, Name name2)
{
	char* f1, * f2, * l1, * l2;
	int ret = 0;
	f1 = name1.getfirst();
	f2 = name2.getfirst();
	l1 = name1.getlast();
	l2 = name2.getlast();
	for (int i = 0; l1[i] != '\0' || l2[i] != '\0'; i++)
	{
		if (l1[i] == l2[i])
		{
			continue;
		}
		else if (l1[i] < l2[i])
		{
			ret = l1[i] - l2[i];
			break;
		}
		else if (l1[i] > l2[i])
		{
			ret = l1[i] - l2[i];
			break;
		}
	}
	if (ret == 0)
	{
		for (int i = 0; f1[i] != '\0' || f2[i] != '\0'; i++)
		{
			if (f1[i] == f2[i])
			{
				continue;
			}
			else if (f1[i] < f2[i])
			{
				ret = f1[i] - f2[i];
				break;
			}
			else if (f1[i] > f2[i])
			{
				ret = f1[i] - f2[i];
				break;
			}
		}

	}
	return ret;
}
int main()
{
	char first[] = "Abdul", last[] = "Naffey",l1[]="Ali",l2[]="Asad";
	Name n(first,last);
	cout << "Getfunction : " << n.getfirst() << " " << n.getlast();
	Name n1 = n;
	cout <<"\nAfter copy construtor : " << n.getfirst() << " " << n.getlast();
	cout << "\nUsing Setters for First and last Names , and getting respective dsiplay : \n";
	n1.setfirst(l1); n1.setlast(l2);
	cout << "\nAfter Setters call : " << n1.getfirst() << " " << n1.getlast();
	cout << "\nUsing CopyName Function : "; n1.copyName(n);
	cout  << n1.getfirst() << " " << n1.getlast();
	cout << "\nCamelcase Function : "; n1.camelCase();
	cout << n1.getfirst() << " " << n1.getlast();
	cout << "\ntoLower Function : "; n1.toLower();
	cout << n1.getfirst() << " " << n1.getlast();
	cout << "\ntoUpper Function : "; n1.toUpper();
	cout << n1.getfirst() << " " << n1.getlast();
	cout << "\nNamelength Function : "; cout <<n1.nameLength();
	cout << "\nSwapNames Function : "; n1.swapNames();
	cout << n1.getfirst() << " " << n1.getlast();
	cout << "\nDisplay Function : "; n1.display();
	cout << "\nFullName Function : "; char* x;x= n1.fullName();
	cout << x;
	cout << "\nisValidName Function : ";cout << n1.isValidName();
	Name n3 = n;
	cout << "\nNameCompare Function : ";cout << Namecompare(n,n3);
	system("PAUSE");
}