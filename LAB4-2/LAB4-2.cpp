#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    int secret = rand() % 100 + 1, guess = -1, attempts = 0;

    cout << "Guess number 1-100 (0 to quit):" << endl;
    while (cin >> guess && guess) {
        ++attempts;
        if (guess < secret) cout << "Too low" << endl;
        else if (guess > secret) cout << "Too high" << endl;
        else { cout << "Correct in " << attempts << " attempts" << endl; break; }
    }

    if (cin && guess == 0) cout << "Quit. Answer: " << secret << endl;
    cout << "Bye" << endl;
    return 0;
}

