#include <iostream>
using namespace std;


const float pi = 3.14159;

void FindArea ()
{   
    int radius;
    cout << "Please enter the radius: ";
    cin >> radius;
    cout << "The value you entered is: " << radius << endl;
    int area = pi * radius * radius;
    cout << "So the area of your circle is " << area << endl;
}


int main () 
{
    FindArea();

    return 0;
}