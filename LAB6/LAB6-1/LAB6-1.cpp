#include <iostream> 
#include <string> 
#include <iomanip> 
using namespace std;

void displayStudentInfo(string name, string id, double score, char grade) {
	cout << "Student Name: " << name << "\n";
	cout << "Student ID : " << id << "\n";
	cout << "Score : " << fixed << setprecision(2) << score << "\n";
	cout << "Grade : " << grade << "\n";
}
void calculateGrade(double score, char& grade)
{
	if (score >= 90) grade = 'A';
	else if (score >= 80) grade = 'B';
	else if (score >= 70) grade = 'C';
	else if (score >= 60) grade = 'D';
	else grade = 'F';
}
int main()
{
	const int N = 5;
	string name[N], id[N];
	double score[N];
	char grade[N];
						
	size_t length;
	cout << "Enter number of students: ";
	cin >> length;
	cin.ignore(); 


	for (size_t i = 0; i < length; i++)
	{
		cout << "Enter Name : " ;
		getline(cin, name[i]); 

		cout << "Enter Student ID : ";
		cin >> id[i];

		cout << "Enter Score : ";
		cin >> score[i];
		cin.ignore(); 

	}
	for (size_t i = 0; i < length; i++)
	{
		cout << endl;
		cout << "========Infomations========" << endl;
		calculateGrade(score[i], grade[i]);
		displayStudentInfo(name[i], id[i], score[i], grade[i]);
		cout << "===========================" << endl;
	}
	// TODO: วนรับข้อมูล N คน 
	// Hint: getline(cin >> ws, name[i]); สำหรับชื่อ 
	// TODO: calculateGrade(score[i], grade[i]); 
	// TODO: วนแสดงผล N คน ด้วย displayStudentInfo 
	return 0;
}