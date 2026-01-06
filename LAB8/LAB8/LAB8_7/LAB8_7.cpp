#include <iostream>
#include <string>
using namespace std;
struct Phone {
	string mobile;
	string home;
};
struct Parent {
	string name;
	string relationship;
	Phone contact;
};
struct Student {
	string id;
	string nickname;
	string lineId;
	Phone myContact;
	Parent myParent;
};
void inputData(Student& s) {
	cout << "ID: "; cin >> s.id;
	cout << "Nickname: "; cin >> s.nickname;
	cout << "Line ID: "; cin >> s.lineId;
	cout << "Mobile: "; cin >> s.myContact.mobile;
	cout << "Home: "; cin >> s.myContact.home;
	cout << "Parent Name: "; cin >> s.myParent.name;
	cout << "Relationship: "; cin >> s.myParent.relationship;
	cout << "Parent Mobile: "; cin >> s.myParent.contact.mobile;
	cout << "Parent Home: "; cin >> s.myParent.contact.home;
}
void displayData(Student s) {
	cout << "\nStudent Data:" << endl;
	cout << "ID: " << s.id << endl;
	cout << "Nickname: " << s.nickname << endl;
	cout << "Line ID: " << s.lineId << endl;
	cout << "Contact: " << s.myContact.mobile << ", " << s.myContact.home << endl;
	cout << "Parent: " << s.myParent.name << " (" << s.myParent.relationship << ")" << endl;
	cout << "Parent Contact: " << s.myParent.contact.mobile << ", " << s.myParent.contact.home
		<< endl;
}
int main() {
	Student s1;
	inputData(s1);
	displayData(s1);
	return 0;
}