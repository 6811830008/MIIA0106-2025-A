#include <iostream>
#include <string>
using namespace std;

int swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "In function : " << "A " << a << " ," << " B " << b << endl;
	return 0;
}

int main()
{
	int a=10, b=20;
	cout << "Before Swap : "<< "A " << a << " ," << " B " << b << endl;
	swap(a, b);
	cout << "After Swap : " << "A " << a << " ," << " B " << b << endl;

	return 0;
}