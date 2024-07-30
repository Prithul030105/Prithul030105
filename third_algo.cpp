
#include <iostream>
using namespace std;

int main() {
    double initial_velocity, velocity;
    int count = 0;

    
    cout << "Enter the initial velocity of the ball: ";
    cin >> initial_velocity;

    
    velocity = initial_velocity;

   
    while (velocity > 0.001) { 
        velocity /= 2; 
        count++;       
    }

    
    cout << "The ball will have effectively zero velocity after " << count << " bounces." << endl;

    return 0;
}
