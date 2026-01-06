#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
	string nickname;
	string lineid;
	string phone_number;
};

// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s) {
	cout << "ID: " << s.id << endl;
	cout << "Nickname: " << s.nickname << endl;
	cout << "Line ID: " << s.lineid << endl;
	cout << "Phone Number: " << s.phone_number << endl;
}

int main() {
    Student s1;

    cout << "=== Input Student 1 ===\n";
    cout << "Enter ID: ";
	cin >> s1.id;
	cout << "Enter Nickname: ";
	cin >> s1.nickname;
	cout << "Enter Line ID: ";
	cin >> s1.lineid;
	cout << "Enter Phone Number: ";
	cin >> s1.phone_number;

    cout << "\n=== Output (from function) ===\n";
	printStudent(s1);

    return 0;
}
