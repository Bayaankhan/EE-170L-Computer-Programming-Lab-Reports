#include <iostream>
using namespace std;

int main()
{
    char grade;  // Character type variable

    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;

    switch(grade)  // Grade ki value check karega
    {
        case 'A':
            cout << "Excellent";
            break;

        case 'B':
            cout << "Very Good";
            break;

        case 'C':
            cout << "Good";
            break;

        case 'D':
            cout << "Pass";
            break;

        case 'F':
            cout << "Fail";
            break;

        default:  // Agar koi aur letter ho
            cout << "Invalid Grade";
    }

    return 0;
}
