#include <iostream>
using namespace std;

int main()
{
    float length, breadth;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    double area = length * breadth;
    double perimeter = 2 * (length + breadth);

    if (area > perimeter)
    {
        cout << "The area of the rectangle is greater than its perimeter." << endl;
    }
    else
    {
        cout << "The area of the rectangle is less than its perimeter." << endl;
    }

    return 0;
}

/* Input:-
 Enter the length of the rectangle: 5
 Enter the breadth of the rectangle: 5 */

// ouput:-
//  The area of the rectangle is greater than its perimeter.