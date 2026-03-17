#include <iostream>
using namespace std;

int main()
{
    int num, i = 1, sum = 0; 
    // num user se number lene ke liye
    // i counting ke liye
    // sum total store karne ke liye

    cout << "Enter a positive integer: "; // user ko message show
    cin >> num; // user se number input lena

    while(i <= num) // jab tak i user ke number se chota ya barabar hai
    {
        sum = sum + i; // har dafa i ko sum me add karna
        i++; // i ko 1 barhana
    }

    cout << "Sum = " << sum; // final sum display

    return 0; // program end
}
