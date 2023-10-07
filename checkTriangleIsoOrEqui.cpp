#include <iostream>
using namespace std;

int main()
{
    float side1, side2, side3;

    cout << "Enter the length of side 1: ";
    cin >> side1;

    cout << "Enter the length of side 2: ";
    cin >> side2;

    cout << "Enter the length of side 3: ";
    cin >> side3;

    if (side1 == side2 && side2 == side3)
    {
        cout << "It's an equilateral triangle." << endl;
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        cout << "It's an isosceles triangle." << endl;
    }
    else
    {
        cout << "It's a scalene triangle." << endl;
    }

    return 0;
}
/*

input:-

Enter the length of side 1: 25
Enter the length of side 2: 24
Enter the length of side 3: 26 */

/*

output:-
It's a scalene triangle. */
