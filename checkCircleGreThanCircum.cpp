#include <iostream>
using namespace std;

int main()
{
    float pi = 3.14;
    float radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float areaOfCircle = pi * radius * radius;
    float circumferenceOfCircle = 2 * pi * radius;

    cout << "Area of Circle is: " << areaOfCircle << endl;
    cout << "Circumference of Circle is: " << circumferenceOfCircle << endl;

    if (areaOfCircle > circumferenceOfCircle)
        cout << "Area of circle is greater than circumference of circle." << endl;
    else
        cout << "Area of circle is less than circumference of circle." << endl;

    return 0;
}

// Input is :-  Enter the radius of the circle: 5

// cotput:-
// Area of Circle is: 78.5
// Circumference of Circle is: 31.4
// Area of circle is greater than circumference of circle.