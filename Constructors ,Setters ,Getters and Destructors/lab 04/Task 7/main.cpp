#include"date.h"
int main()
{
	date t1, t2;
	t1.setdate(11, 13, 2022);
	t2.setdate(11, 14, 2022);
	if (t1.getdate() == t2.getdate())
	{
		cout << "Equal\n";
	}
	else { cout << "Unequal\n"; }
	
	
	system("PAUSE");

}