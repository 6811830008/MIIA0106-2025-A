// TODO: แสดงค่า score, address และ pointer
#include <iostream>
using namespace std;

int main() {
    int score = 50;
    int* ptr = &score;

    // TODO
    // แสดงค่า
    cout << score << endl;
    cout << *ptr << endl;

    // address
    cout << "address of score: " << &score << endl;
    cout << "value of ptr: " << ptr << endl;
    cout << "address of pointer: " << &ptr << endl;

    return 0;
}
