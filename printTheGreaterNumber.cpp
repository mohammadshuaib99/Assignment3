#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the first number and second number ";
    cin >> n >> m;

    if (n > m)
        cout << n << " is greater than " << m << endl;
    else
        cout << m << " is greater than " << n << endl;
    return 0;
}


// input:- 5 and 6

// output is : - 6 is greater than 5