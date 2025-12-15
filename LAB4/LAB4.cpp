#include <iostream>

using namespace std;

int main()
{
    int number = 8;
    int i = 0;

    cout << "Multiplication Table " << number << " \n";
    for (int i = 1; i <= 12; ++i)
    {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }

    return 0;
}