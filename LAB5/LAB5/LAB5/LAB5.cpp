#include <iostream>
#include <string>
using namespace std;

double calculateCircleArea(double x)
{
    double PI = 3.14159;
    double area = PI * x * x;
    return area;
}
double Rectangle(double w ,double h) 
{
    double RecArea = w * h;
    return RecArea;
}

int main()
{
    double w,h;
    //หาพื้นที่วงกลม
    const double PI = 3.14159;
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Enter Width : " ;
    cin >> w;
    cout << "Enter High : " ;
    cin >> h;

    cout << "=======================" << endl;
    double area = calculateCircleArea(radius);
    cout << "Circle Area : " << radius << " is " << area << endl;
    cout << endl;
    double RecArea = Rectangle(w , h);
    cout << "Rectangle Area : " << RecArea << endl;
    cout << "=======================" << endl;

    return 1;
}