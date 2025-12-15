#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;
    int r = static_cast<int>(sqrt(n));
    for (int i = 3; i <= r; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cout << "Enter integers (Ctrl+Z then Enter to end):" << endl;
    int x;
    while (cin >> x) {
        cout << x << (isPrime(x) ? " is prime" : " is not prime") << endl;
    }
    return 0;
}
