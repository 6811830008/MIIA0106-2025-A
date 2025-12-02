#include <iostream>
#include <string>
using namespace std;

int main()
{
	int Score;
	string ID_Number, Username;

	cout << "Enter Student ID : ";
	cin >> ID_Number;
	

	
	cout << "Enter Username : ";
	cin.ignore();
	getline(cin, Username);

	cout << "Enter Score : ";

	cin >> Score;
	
	
	cout << endl;
	cout << "------Student Report------" << endl;
	cout << "Student ID : " << ID_Number << endl;
	cout << "Name : " << Username << endl;
	cout << "Score : " << Score << endl;

	if (Score >= 90)
	{
		cout << "GRADE : A";
	}
	else if (Score >= 80)
	{
		cout << "GRADE : B";
	}
	else if (Score >= 70)
	{
		cout << "GRADE : C";
	}
	else if (Score >= 60) 
	{
		cout << "GRADE : D";
	}
	else if (Score < 60)
	{
		cout << "GRADE : F";
	}
	cout << endl;
	cout << "--------------------------" << endl;


	return 0;
}

