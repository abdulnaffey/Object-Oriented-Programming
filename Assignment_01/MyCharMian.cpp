#include"MyChar.h"
int main()
{
	int x=0;
	MyChar p1;
	char k;
	cout << "Enter a character : "; cin >> k;
	p1.setchar(k);
	cout << "The Entered character is : " << p1.getchar() << endl;
	p1.upperCase();
	cout << "The Upper case of entered character is : " << p1.getchar() << endl;
	p1.lowerCase();
	cout << "The Lower case of entered character is : " << p1.getchar() << endl;
	
	cout << "\n\nEnter the number of objects you want to create : "; cin >> x;
	MyChar* p2 = new MyChar[x];
	for (int i = 0; i < x; i++)
	{
		char y = 0;
		cout << "Enter a character for object " << i + 1 << " : "; cin >> y;
		(p2 + i)->setchar(y);
	}
	for (int i = 0; i < x; i++)
	{
		cout << "The characters entered for object " << i + 1 << " : ";
		cout << (p2 + i)->getchar() << endl;
	}
	int* arr = new int[x];
	for (int i = 0; i < x; i++)
	{
		*(arr + i) = (p2 + i)->getchar();
	}
	for (int i = 0; i < x - 1; i++)
	{
		for (int j = i + 1; j < x; j++)
		{
			if (*(arr + i) > *(arr + j))
			{
				int temp;
				temp = *(arr + i);
				*(arr + i) = *(arr + j);
				*(arr + j) = temp;
			}
		}
	}

	for (int i = 0; i < x; i++)
	{
		(p2 + i)->setchar(*(arr + i));
	}
	cout << "The sorted objects by values are : ";
	for (int i = 0; i < x; i++)
	{
		cout << (p2 + i)->getchar() << "\t";
	}


	delete[]p2;
	p2 = NULL;
}