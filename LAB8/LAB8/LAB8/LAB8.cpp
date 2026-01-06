#include <iostream>
#include <string>
using namespace std;

struct student {
    string id;
    string nickname;
    string lineid;
    string phone_number;
};

int main() {
    student student1;

    cout << "=== Input Student 1 ===\n";
	cout << "Enter ID: ";
	getline(cin, student1.id);

	cout << "Enter Nickname: ";
	getline(cin, student1.nickname);

	cout << "Enter Line ID: ";
	getline(cin, student1.lineid);

	cout << "Enter Phone Number: ";
	getline(cin, student1.phone_number);

    cout << "\n=== Output Student 1 ===\n";
	cout << "ID: " << student1.id << endl;
	cout << "Nickname: " << student1.nickname << endl;
	cout << "Line ID: " << student1.lineid << endl;
	cout << "Phone Number: " << student1.phone_number << endl;

    return 0;
}


	