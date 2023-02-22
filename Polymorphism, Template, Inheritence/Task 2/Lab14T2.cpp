#include <iostream>
using namespace std;


template <typename T> T myMax(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	cout << "The max of 3 and 5 is " << myMax<int>(3, 5) << endl;
	cout << "The max of 5.6 and 7.3 is " << myMax<double>(5.6, 7.3)<< endl; 
	cout <<"The max of donkey and apple is " << myMax<const char*>("donkey", "apple") << endl; // call myMax for char

	return 0;
}
