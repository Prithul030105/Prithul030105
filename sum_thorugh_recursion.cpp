#include <iostream>
using namespace std;


int calculateSum(int number) {
    
    if (number == 0) {
        return 0;
    }
   
    return number + calculateSum(number - 1);
}

int main() {
    int Input;
    
    // Ask the user for a positive number
    cout << "Enter a positive integer: ";
    cin >> Input;
    
    // Ensure the user input is a non-negative integer
    if (Input < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        // Calculate the sum using recursion
        int sum = calculateSum(Input);
        
        // Display the result
        cout << "The sum of the first " << Input << " natural numbers is: " << sum << endl;
    }
    
    return 0;
}
