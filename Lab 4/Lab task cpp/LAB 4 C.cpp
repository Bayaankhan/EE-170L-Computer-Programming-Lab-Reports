#include <iostream>
using namespace std;

int main()
{
    int choice;      // Menu choice store karega
    double value;    // Input value store karega
    double result;   // Result store karega

    cout << "1 -> Km to Meters" << endl;
    cout << "2 -> Meters to Cm" << endl;
    cout << "3 -> Kg to Grams" << endl;
    cout << "4 -> Celsius to Fahrenheit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)  // User ki choice check karega
    {
        case 1:
            cout << "Enter Kilometers: ";
            cin >> value;
            result = value * 1000;  // Km ko meters mein convert
            cout << "Meters = " << result;
            break;

        case 2:
            cout << "Enter Meters: ";
            cin >> value;
            result = value * 100;   // Meters ko cm mein convert
            cout << "Centimeters = " << result;
            break;

        case 3:
            cout << "Enter Kilograms: ";
            cin >> value;
            result = value * 1000;  // Kg ko grams mein convert
            cout << "Grams = " << result;
            break;

        case 4:
            cout << "Enter Celsius: ";
            cin >> value;
            result = (value * 9/5) + 32;  // Celsius ko Fahrenheit mein convert
            cout << "Fahrenheit = " << result;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
