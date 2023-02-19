#include "automobile.h"
int main() {
	char x[] = "iron";
	automobile t1, t2, t3;
	t1.sets("AA0");
	t1.sety(1992);
	t1.setm(x);
	t1.setq(2);
	t2.sets("AA9");
	t2.sety(1952);
	t2.setm(x);
	t2.setq(3);
	t3.sets("AR0");
	t3.sety(2002);
	t3.setm(x);
	t3.setq(8);

	cout << "Object 1 \n";
	cout << t1.gets() ;
	cout <<endl<<t1.gety();
	cout << endl << t1.getm();
	cout << endl << t1.getq();
	cout << "Object 2 \n";
	cout << t2.gets();
	cout << endl << t2.gety();
	cout << endl << t2.getm();
	cout << endl << t2.getq();
	cout << "Object 3 \n";
	cout << t3.gets();
	cout << endl << t3.gety();
	cout << endl << t3.getm();
	cout << endl << t3.getq();

	


	system("PAUSE");
}