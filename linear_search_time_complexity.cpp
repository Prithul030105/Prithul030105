#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <chrono>
#include <algorithm>
#include<random> // For std::shuffle

using namespace std;
using namespace std::chrono;


int linearSearch(const vector<int>& arr, int target) {
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; // Target found, return index
        }
    }
    return -1; // Target not found
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    vector<int> arraySizes = {1000, 10000, 100000, 1000000};
    const int numIterations = 1000; 

    for (int size : arraySizes) {
        // Generate random array of given size
        vector<int> arr(size);
        for (int i = 0; i < size; ++i) {
            arr[i] = rand(); // Assign random value to each element
        }

        // Shuffle the array to reduce cache effects
        shuffle(arr.begin(), arr.end(), std::default_random_engine());

        // Perform searches on random targets and measure time
        long long totalTimeTaken = 0;

        for (int i = 0; i < numIterations; ++i) {
            int target = arr[rand() % size];

            auto start = high_resolution_clock::now(); // Start timer

            linearSearch(arr, target); // Perform linear search

            auto end = high_resolution_clock::now(); // End timer

            totalTimeTaken += duration_cast<nanoseconds>(end - start).count();
        }

        // Calculate average time taken per search
        auto avgTimeTaken = totalTimeTaken / numIterations;

        cout << "Array Size: " << size << " | Average time taken for linear search: " << avgTimeTaken << " nanoseconds" << endl;
    }

    return 0;
}




