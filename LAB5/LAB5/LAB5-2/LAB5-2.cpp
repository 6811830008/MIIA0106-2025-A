#include <iostream>
#include <string>
using namespace std;

int maxofthree(int a, int b, int c) {
	if(a>= b && a>=c)
		return a;
	else if(b>= a && b>=c)
		return b;
	else
	return c;
}

int main() {
	int a, b, c;
	cout << "Enter number : " ;
	cin >> a;
	cout << "Enter number : " ;
	cin >> b;
	cout << "Enter number : " ;
	cin >> c;

	int max = maxofthree(a, b, c);
	cout << "Maximum value is : " << max << endl;
	return 0;
}