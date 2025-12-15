#include <iostream>
#include <string>

using namespace std;

enum Position { LEFT, CENTER, RIGHT, UNKNOWN };

Position parseSensor(const string &s) {
    if (s == "left") return LEFT;
    if (s == "center" || s == "middle") return CENTER;
    if (s == "right") return RIGHT;
    return UNKNOWN;
}

void control( Position p ) {
    switch (p) {
        case LEFT:   cout << "Action: Turn left" << endl;   break;
        case RIGHT:  cout << "Action: Turn right" << endl;  break;
        case CENTER: cout << "Action: Go forward" << endl;  break;
        default:     cout << "Action: Stop (unknown sensor)" << endl; break;
    }
}

int main() {
    cout << "Line Following Robot (type left/center/right, q to quit)" << endl;
    string token;
    while (cin >> token) {
        if (token == "q") break;
        Position p = parseSensor(token);
        control(p);
    }
    return 0;
}
