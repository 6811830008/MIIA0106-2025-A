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
	const int size=5;
	student students[size];

	//INPUT
	for (int i = 0; i < size; i++) {

		cout << "=== Input Student " << (i + 1) << " ===\n";
		cout << "Enter ID: ";
		cin >> students[i].id;

		cout << "Enter Nickname: ";
		cin >> students[i].nickname;

		cout << "Enter Line ID: ";
		cin >> students[i].lineid;

		cout << "Enter Phone Number: ";
		cin >> students[i].phone_number;

		}
	cout << "\n===== Student List =====\n";
	for (int i = 0; i < size; i++) {
		cout << "Student " << (i + 1) << ":\n";
		cout << "ID : " << students[i].id << endl;
		cout << "Nickname : " << students[i].nickname << endl;
		cout << "Line ID : " << students[i].lineid << endl;
		cout << "Phone Number : " << students[i].phone_number << endl;
		cout << "----------------------\n";
	}


	return 0;
}


