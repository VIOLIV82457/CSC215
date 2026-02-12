#include <iostream>
//reccommended by research
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    //Cuts off the decimal part, which would make your average incorrect.
    const int SIZE = 20;
    int numbers[SIZE];

    int sum = 0;
    int min, max;
    
    // Seed the random number generator
    srand(time(0));

    // Generate 20 random numbers between 1 and 100
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = rand() % 100 + 1;  // Range: 1–100
    }
    
    // Initialize min and max with first element
    min = numbers[0];
    max = numbers[0];

    
    cout << "Generated Numbers: ";
        //loop runs 20 times, once for each element in the array.
        for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
        sum += numbers[i];

        if (numbers[i] < min)
            min = numbers[i];

        if (numbers[i] > max)
            max = numbers[i];
    }
    
    //calculates the average of the numbers and stores it in a double:
     double average = (double)sum  / SIZE;

    // Display results
    cout<<" "<<endl;
    cout << "Results: ";
    cout<<" "<<endl;
    cout << "Smallest Number: " << min << endl;
    cout << "Largest Number : " << max << endl;
    cout << "Sum            : " << sum << endl;
    cout << "Average        : " << average << endl;

}