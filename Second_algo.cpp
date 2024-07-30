#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 5, 6, 7, 8, 9};  

    for (int i = 0; i < arr.size() - 1; ++i) {
        int first_number_LSB = arr[i] & 1;   
        int next_number_LSB = arr[i + 1] & 1;  

        if (first_number_LSB == next_number_LSB) {  
            cout << "The missing number is: " << arr[i] + 1 << std::endl;
            return 0;
        }
    }

    
    if ((arr[0] & 1) == 1) {
        cout << "The missing number is: " << arr[0] - 1 << std::endl;
    } else {
        cout << "The missing number is: " << arr.back() + 1 << std::endl;
    }

    return 0;
}
