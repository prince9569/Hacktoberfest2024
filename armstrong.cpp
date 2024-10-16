#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    // Input a number from the user
    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // Find the number of digits in the number
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Compute the sum of nth power of its digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the original number is equal to the result
    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
