#include"card.h"
int main() {
	char x[7], y[7];
	int z;

	card t1 ,t2,t3,t4,t5;
	for (int i = 0; i < 5; i++) {
		cout << "Enter the Card Number for card " << i + 1 << " : ";
		cin >> z;
		while (z<2||z>10)
		{
			cout << "Wrong input !!! \nEnter Again : ";
			cin >> z;
		}
		cout << "Enter the Face (Front or Back) for card " << i + 1 << " : ";
		cin >> x;
		while (x != "Back" && x != "Front")
		{
			cout << "Wrong input !!! \nEnter Again : ";
			cin >> x;
		}
		cout << "Enter the Color (Red or Black) for card " << i + 1 << " : ";
		cin >> y;
		while (y != "Black" && y != "Red")
		{
			cout << "Wrong input !!! \nEnter Again : ";
			cin >> y;
		}
		switch (i)
		{
		case 0:
			t1.setc(y);
			t1.setcn(z);
			t1.setf(x);
			break;
		case 1:
			t2.setc(y);
			t2.setcn(z);
			t2.setf(x);
			break;
		case 2:
			t3.setc(y);
			t3.setcn(z);
			t3.setf(x);
			break;
		case 3:
			t4.setc(y);
			t4.setcn(z);
			t4.setf(x);
			break;
		case 4:
			t5.setc(y);
			t5.setcn(z);
			t5.setf(x);
			break;
		default:
			break;
		}
		system("cls");
	}
	if(t1.getcn()==t2.getcn() || t1.getcn())
	cout << t1.getf();
	cout << endl;
	cout << t1.getc();
	cout << endl;
	cout << endl;
	cout << t2.getf();
	cout << endl;
	cout << t2.getc();
	cout << endl;

	system("pause");
}