#include"MyNum.h"
int main()
{
	int x;
	MyNum p1;
	cout << "Enter a number : "; cin >> x;
	p1.setnum(x);
	cout<<"The Entered Number is : " << p1.getnum() << endl;
    p1.positive();
	cout << "The Positive of entered Number is : " << p1.getnum() << endl;
	p1.negative();
	cout << "The negative of entered Number is : " << p1.getnum() << endl;

	cout << "\n\nEnter the number of objects you want to create : "; cin >> x;
	MyNum *p2=new MyNum[x];
	for (int i = 0; i < x; i++)
	{
		int y = 0;
		cout << "Enter a number for object " << i + 1 << " : "; cin >> y;
		(p2 + i)->setnum(y);
	}
	for (int i = 0; i < x; i++)
	{
		cout << "The number entered for object " << i + 1 << " : "; 
		cout <<(p2 + i)->getnum()<<endl;
	}
	int *arr = new int[x];
	for (int i = 0; i < x; i++)
	{
		*(arr + i) = (p2 + i)->getnum();
	}
	for (int i = 0; i < x-1; i++)
	{
		for (int j = i+1; j < x; j++)
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
		(p2 + i)->setnum(*(arr + i));
	}
	cout << "The sorted objects by values are : ";
	for (int i = 0; i < x; i++)
	{
		cout << (p2 + i)->getnum() << "\t";
	}


	delete[]p2;
	p2 = NULL;
}