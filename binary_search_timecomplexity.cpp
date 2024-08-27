#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace chrono;

// Custom function to insert an element at the beginning of the vector
void customInsertFront(vector<int>& arr, int value) {
    arr.push_back(0); // Expand the vector
    for (int i = arr.size() - 1; i > 0; --i) {
        arr[i] = arr[i - 1]; // Shift elements to the right
    }
    arr[0] = value; // Insert the new value at the front
}

// Custom function to delete an element from the beginning of the vector
void customDeleteFront(vector<int>& arr) {
    if (arr.empty()) {
        return; // Nothing to delete
    }
    for (int i = 0; i < arr.size() - 1; ++i) {
        arr[i] = arr[i + 1]; // Shift elements to the left
    }
    arr.pop_back(); // Remove the last element
}

// Custom function to update an element at the beginning of the vector
void customUpdateFront(vector<int>& arr, int value) {
    if (arr.empty()) {
        return; // Nothing to update
    }
    arr[0] = value; // Update the first element
}

// Function to perform binary search
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        }

        if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
}

int main() {
    srand(static_cast<unsigned>(time(0))); // Seed for random number generation

    // Array sizes to test
    vector<int> arraySizes = {1000, 10000, 100000, 1000000};
    const int numIterations = 1000; // Number of iterations for averaging time

    // Loop through each array size
    for (int size : arraySizes) {
        vector<int> arr(size);

        // Fill the array with random values
        for (int& num : arr) {
            num = rand();
        }

        // Sort the array to prepare for binary search
        sort(arr.begin(), arr.end());

        // Measure Binary Search Time
        long long totalTimeSearch = 0;
        int target = arr[0]; // Choosing the first element as target
        for (int i = 0; i < numIterations; ++i) {
            auto start = high_resolution_clock::now();
            binarySearch(arr, target);
            auto end = high_resolution_clock::now();
            totalTimeSearch += duration_cast<nanoseconds>(end - start).count();
        }
        auto avgTimeSearch = totalTimeSearch / numIterations;
        cout << "Array Size: " << size << " | Average time for Binary Search: " 
             << avgTimeSearch << " ns | Complexity: O(log n)" << endl;

        // Measure Insert Time (Insert at the beginning)
        auto startInsert = high_resolution_clock::now();
        customInsertFront(arr, rand());
        auto endInsert = high_resolution_clock::now();
        auto timeInsert = duration_cast<nanoseconds>(endInsert - startInsert).count();
        cout << "Time to Insert (front): " << timeInsert << " ns | Complexity: O(n)" << endl;

        // Measure Delete Time (Delete from the beginning)
        auto startDelete = high_resolution_clock::now();
        customDeleteFront(arr);
        auto endDelete = high_resolution_clock::now();
        auto timeDelete = duration_cast<nanoseconds>(endDelete - startDelete).count();
        cout << "Time to Delete (front): " << timeDelete << " ns | Complexity: O(n)" << endl;

        // Measure Clear Time
        auto startClear = high_resolution_clock::now();
        arr.clear();
        auto endClear = high_resolution_clock::now();
        auto timeClear = duration_cast<nanoseconds>(endClear - startClear).count();
        cout << "Time to Clear: " << timeClear << " ns | Complexity: O(n)" << endl;

        // Reinitialize the array to its original size
        arr.resize(size);
        for (int& num : arr) {
            num = rand();
        }
        sort(arr.begin(), arr.end());

        // Measure Update Time (Update the first element)
        auto startUpdate = high_resolution_clock::now();
        customUpdateFront(arr, rand());
        auto endUpdate = high_resolution_clock::now();
        auto timeUpdate = duration_cast<nanoseconds>(endUpdate - startUpdate).count();
        cout << "Time to Update (front): " << timeUpdate << " ns | Complexity: O(1)" << endl;

        cout << "----------------------------------------------" << endl;
    }

    return 0;
}
