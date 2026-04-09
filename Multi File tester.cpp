#include <iostream>
#include "mathFunctions.h"
using namespace std;
//this is a basic test for my advanced calculator final
int main()
{
    //basic integers for testing
    int num1 = 10;
    int num2 = 5;

    int sum = add(num1, num2);
    int difference = subtract(num1, num2);

    cout << "Addition: ";
    displayResult(sum);

    cout << "Subtraction: ";
    displayResult(difference);

    return 0;
}