// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <random>
// #include <chrono>

// using namespace std;
// using namespace std::chrono;

// // Binary Search Function
// int binarySearch(const vector<int>& arr, int target) {
//     int left = 0;
//     int right = arr.size() - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;

//         if (arr[mid] == target) {
//             return mid;
//         }
//         if (arr[mid] < target) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }
//     return -1; // Element not found
// }

// // Function to generate a random array of given size
// vector<int> generateRandomArray(int size) {
//     vector<int> arr(size);
//     random_device rd;
//     mt19937 gen(rd());
//     uniform_int_distribution<> dis(1, 100000); // Random numbers between 1 and 100000

//     for (int i = 0; i < size; ++i) {
//         arr[i] = dis(gen);
//     }
//     sort(arr.begin(), arr.end()); // Sort the array for binary search
//     return arr;
// }

// int main() {
//     vector<int> sizes = {1000, 5000, 10000, 50000, 100000}; // Different sizes of arrays
//     int target = 12345; // Example target number to search for

//     for (int size : sizes) {
//         // Generate random array of current size
//         vector<int> arr = generateRandomArray(size);

//         // Measure time for binary search
//         auto start = high_resolution_clock::now();
//         int result = binarySearch(arr, target);
//         auto stop = high_resolution_clock::now();
//         auto duration = duration_cast<microseconds>(stop - start);

//         // Output the results
//         cout << "Array Size: " << size << endl;
//         cout << "Time taken for binary search: " << duration.count() << " microseconds" << endl;
//         cout << (result != -1 ? "Element found at index " + to_string(result) : "Element not found") << endl;
//         cout << "--------------------------------" << endl;
//     }

//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <cstdlib>
// #include <ctime>
// #include <chrono>
// #include <algorithm>

// using namespace std;
// using namespace chrono;

// // Function to perform binary search
// int binarySearch(const vector<int>& arr, int target) {
//     int left = 0;
//     int right = arr.size() - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;

//         if (arr[mid] == target) {
//             return mid; // Target found, return index
//         }

//         if (arr[mid] < target) {
//             left = mid + 1; // Search in the right half
//         } else {
//             right = mid - 1; // Search in the left half
//         }
//     }

//     return -1; // Target not found
// }

// int main() {
//     srand(time(0)); // Seed for random number generation

//     // Array sizes to test
//     vector<int> arraySizes = {1000, 10000, 100000, 1000000};

//     // Loop over each array size
//     for (int size : arraySizes) {
//         vector<int> arr(size);

//         // Fill the array with random values
//         for (int& num : arr) {
//             num = rand();
//         }

//         // Sort the array, since binary search requires a sorted array
//         sort(arr.begin(), arr.end());

//         // Measure the time for a single search
//         int target = arr[rand() % size];
//         auto start = high_resolution_clock::now(); // Start timer
//         binarySearch(arr, target); // Perform binary search
//         auto end = high_resolution_clock::now(); // End timer

//         // Calculate time taken
//         auto timeTaken = duration_cast<nanoseconds>(end - start).count();

//         // Output the result
//         cout << "Array Size: " << size << " | Time taken for binary search: " << timeTaken << " nanoseconds" << endl;
//     }

//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include <cstdlib>
// #include <ctime>
// #include <chrono>
// #include <algorithm>

// using namespace std;
// using namespace chrono;

// // Function to perform binary search
// int binarySearch(const vector<int>& arr, int target) {
//     int left = 0;
//     int right = arr.size() - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;

//         if (arr[mid] == target) {
//             return mid; // Target found, return index
//         }

//         if (arr[mid] < target) {
//             left = mid + 1; // Search in the right half
//         } else {
//             right = mid - 1; // Search in the left half
//         }
//     }

//     return -1; // Target not found
// }

// int main() {
//     srand(time(0)); // Seed for random number generation

//     // Array sizes to test
//     vector<int> arraySizes = {1000, 10000, 100000, 1000000};
//     const int numIterations = 1000; // Perform the search multiple times for accuracy

//     // Loop over each array size
//     for (int size : arraySizes) {
//         vector<int> arr(size);

//         // Fill the array with random values
//         for (int& num : arr) {
//             num = rand();
//         }

//         // Sort the array, since binary search requires a sorted array
//         sort(arr.begin(), arr.end());

//         // Choose a target that is likely to require more comparisons (not middle)
//         int target = arr[0]; // Choosing the first element as target

//         long long totalTimeTaken = 0;

//         // Repeat the search multiple times
//         for (int i = 0; i < numIterations; ++i) {
//             auto start = high_resolution_clock::now(); // Start timer
//             binarySearch(arr, target); // Perform binary search
//             auto end = high_resolution_clock::now(); // End timer

//             // Accumulate time taken
//             totalTimeTaken += duration_cast<nanoseconds>(end - start).count();
//         }

//         // Calculate average time taken per search
//         auto avgTimeTaken = totalTimeTaken / numIterations;

//         // Output the result
//         cout << "Array Size: " << size << " | Average time taken for binary search: " << avgTimeTaken << " nanoseconds" << endl;
//     }

//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include <cstdlib>
// #include <ctime>
// #include <chrono>
// #include <algorithm>

// using namespace std;
// using namespace chrono;

// // Function to perform binary search
// int binarySearch(const vector<int>& arr, int target) {
//     int left = 0;
//     int right = arr.size() - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;

//         if (arr[mid] == target) {
//             return mid; // Found the target
//         }

//         if (arr[mid] < target) {
//             left = mid + 1; // Look in the right half
//         } else {
//             right = mid - 1; // Look in the left half
//         }
//     }

//     return -1; // Target not found
// }

// int main() {
//     // Seed the random number generator
//     srand(static_cast<unsigned>(time(0)));

//     // Define different sizes for testing
//     vector<int> arraySizes = {1000, 10000, 100000, 1000000};
//     const int numIterations = 1000; // Number of iterations for averaging time

//     // Loop through each array size
//     for (int size : arraySizes) {
//         // Initialize and fill the vector with random numbers
//         vector<int> arr(size);
//         for (int& num : arr) {
//             num = rand();
//         }

//         // Sort the array to prepare for binary search
//         sort(arr.begin(), arr.end());

//         // Measure the average time for binary search
//         long long totalTimeSearch = 0;
//         int target = arr[0]; // We’ll search for the first element
//         for (int i = 0; i < numIterations; ++i) {
//             auto start = high_resolution_clock::now();
//             binarySearch(arr, target);
//             auto end = high_resolution_clock::now();
//             totalTimeSearch += duration_cast<nanoseconds>(end - start).count();
//         }
//         auto avgTimeSearch = totalTimeSearch / numIterations;
//         cout << "Array Size: " << size << " | Average time for Binary Search: " 
//              << avgTimeSearch << " ns | Complexity: O(log n)" << endl;

//         // Measure time to insert an element at the end of the vector
//         auto startInsert = high_resolution_clock::now();
//         arr.push_back(rand());
//         auto endInsert = high_resolution_clock::now();
//         auto timeInsert = duration_cast<nanoseconds>(endInsert - startInsert).count();
//         cout << "Time to Insert (end): " << timeInsert << " ns | Complexity: O(1)" << endl;

//         // Measure time to delete the last element
//         auto startDelete = high_resolution_clock::now();
//         arr.pop_back();
//         auto endDelete = high_resolution_clock::now();
//         auto timeDelete = duration_cast<nanoseconds>(endDelete - startDelete).count();
//         cout << "Time to Delete (last element): " << timeDelete << " ns | Complexity: O(1)" << endl;

//         // Measure time to clear the vector
//         auto startClear = high_resolution_clock::now();
//         arr.clear();
//         auto endClear = high_resolution_clock::now();
//         auto timeClear = duration_cast<nanoseconds>(endClear - startClear).count();
//         cout << "Time to Clear: " << timeClear << " ns | Complexity: O(n)" << endl;

//         // Reinitialize the vector for further operations
//         arr.resize(size);
//         for (int& num : arr) {
//             num = rand();
//         }
//         sort(arr.begin(), arr.end());

//         // Measure time to update an element in the middle
//         int indexToUpdate = size / 2;
//         auto startUpdate = high_resolution_clock::now();
//         arr[indexToUpdate] = rand();
//         auto endUpdate = high_resolution_clock::now();
//         auto timeUpdate = duration_cast<nanoseconds>(endUpdate - startUpdate).count();
//         cout << "Time to Update (middle element): " << timeUpdate << " ns | Complexity: O(1)" << endl;

//         // Separator for clarity in output
//         cout << "----------------------------------------------" << endl;
//     }

//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include <cstdlib>
// #include <ctime>
// #include <chrono>
// #include <algorithm>

// using namespace std;
// using namespace chrono;

// // Function to perform binary search
// int binarySearch(const vector<int>& arr, int target) {
//     int left = 0;
//     int right = arr.size() - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;

//         if (arr[mid] == target) {
//             return mid; // Target found
//         }

//         if (arr[mid] < target) {
//             left = mid + 1; // Search in the right half
//         } else {
//             right = mid - 1; // Search in the left half
//         }
//     }

//     return -1; // Target not found
// }

// int main() {
//     srand(static_cast<unsigned>(time(0))); // Seed for random number generation

//     // Array sizes to test
//     vector<int> arraySizes = {1000, 10000, 100000, 1000000};
//     const int numIterations = 1000; // Number of iterations for averaging time

//     // Loop through each array size
//     for (int size : arraySizes) {
//         vector<int> arr(size);

//         // Fill the array with random values
//         for (int& num : arr) {
//             num = rand();
//         }

//         // Sort the array to prepare for binary search
//         sort(arr.begin(), arr.end());

//         // Measure Binary Search Time
//         long long totalTimeSearch = 0;
//         int target = arr[0]; // Choosing the first element as target
//         for (int i = 0; i < numIterations; ++i) {
//             auto start = high_resolution_clock::now();
//             binarySearch(arr, target);
//             auto end = high_resolution_clock::now();
//             totalTimeSearch += duration_cast<nanoseconds>(end - start).count();
//         }
//         auto avgTimeSearch = totalTimeSearch / numIterations;
//         cout << "Array Size: " << size << " | Average time for Binary Search: " 
//              << avgTimeSearch << " ns | Complexity: O(log n)" << endl;

//         // Random index for insertion and deletion
//         int randomIndex = rand() % size;

//         // Measure Insert Time (Insert at a random index)
//         auto startInsert = high_resolution_clock::now();
//         arr.insert(arr.begin() + randomIndex, rand());
//         auto endInsert = high_resolution_clock::now();
//         auto timeInsert = duration_cast<nanoseconds>(endInsert - startInsert).count();
//         cout << "Time to Insert (random index): " << timeInsert << " ns | Complexity: O(n)" << endl;

//         // Measure Delete Time (Delete from a random index)
//         auto startDelete = high_resolution_clock::now();
//         arr.erase(arr.begin() + randomIndex);
//         auto endDelete = high_resolution_clock::now();
//         auto timeDelete = duration_cast<nanoseconds>(endDelete - startDelete).count();
//         cout << "Time to Delete (random index): " << timeDelete << " ns | Complexity: O(n)" << endl;

//         // Measure Clear Time
//         auto startClear = high_resolution_clock::now();
//         arr.clear();
//         auto endClear = high_resolution_clock::now();
//         auto timeClear = duration_cast<nanoseconds>(endClear - startClear).count();
//         cout << "Time to Clear: " << timeClear << " ns | Complexity: O(n)" << endl;

//         // Reinitialize the array to its original size
//         arr.resize(size);
//         for (int& num : arr) {
//             num = rand();
//         }
//         sort(arr.begin(), arr.end());

//         // Measure Update Time (Update element at random index)
//         int indexToUpdate = rand() % size;
//         auto startUpdate = high_resolution_clock::now();
//         arr[indexToUpdate] = rand();
//         auto endUpdate = high_resolution_clock::now();
//         auto timeUpdate = duration_cast<nanoseconds>(endUpdate - startUpdate).count();
//         cout << "Time to Update (random index): " << timeUpdate << " ns | Complexity: O(1)" << endl;

//         cout << "----------------------------------------------" << endl;
//     }

//     return 0;
// }






// #include <iostream>
// #include <vector>
// #include <cstdlib>
// #include <ctime>
// #include <chrono>
// #include <algorithm>

// using namespace std;
// using namespace chrono;

// // Custom function to insert an element at a specified index
// void customInsert(vector<int>& arr, int index, int value) {
//     if (index < 0 || index > arr.size()) {
//         throw out_of_range("Index out of range");
//     }
//     arr.push_back(0); // Add a dummy element to expand the vector
//     for (int i = arr.size() - 1; i > index; --i) {
//         arr[i] = arr[i - 1]; // Shift elements to the right
//     }
//     arr[index] = value; // Insert the new value
// }

// // Custom function to delete an element at a specified index
// void customDelete(vector<int>& arr, int index) {
//     if (index < 0 || index >= arr.size()) {
//         throw out_of_range("Index out of range");
//     }
//     for (int i = index; i < arr.size() - 1; ++i) {
//         arr[i] = arr[i + 1]; // Shift elements to the left
//     }
//     arr.pop_back(); // Remove the last element
// }

// // Custom function to update an element at a specified index
// void customUpdate(vector<int>& arr, int index, int value) {
//     if (index < 0 || index >= arr.size()) {
//         throw out_of_range("Index out of range");
//     }
//     arr[index] = value; // Update the element
// }

// // Function to perform binary search
// int binarySearch(const vector<int>& arr, int target) {
//     int left = 0;
//     int right = arr.size() - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;

//         if (arr[mid] == target) {
//             return mid; // Target found
//         }

//         if (arr[mid] < target) {
//             left = mid + 1; // Search in the right half
//         } else {
//             right = mid - 1; // Search in the left half
//         }
//     }

//     return -1; // Target not found
// }

// int main() {
//     srand(static_cast<unsigned>(time(0))); // Seed for random number generation

//     // Array sizes to test
//     vector<int> arraySizes = {1000, 10000, 100000, 1000000};
//     const int numIterations = 1000; // Number of iterations for averaging time

//     // Loop through each array size
//     for (int size : arraySizes) {
//         vector<int> arr(size);

//         // Fill the array with random values
//         for (int& num : arr) {
//             num = rand();
//         }

//         // Sort the array to prepare for binary search
//         sort(arr.begin(), arr.end());

//         // Measure Binary Search Time
//         long long totalTimeSearch = 0;
//         int target = arr[0]; // Choosing the first element as target
//         for (int i = 0; i < numIterations; ++i) {
//             auto start = high_resolution_clock::now();
//             binarySearch(arr, target);
//             auto end = high_resolution_clock::now();
//             totalTimeSearch += duration_cast<nanoseconds>(end - start).count();
//         }
//         auto avgTimeSearch = totalTimeSearch / numIterations;
//         cout << "Array Size: " << size << " | Average time for Binary Search: " 
//              << avgTimeSearch << " ns | Complexity: O(log n)" << endl;

//         // Random index for insertion and deletion
//         int randomIndex = rand() % size;

//         // Measure Insert Time (Insert at a random index)
//         auto startInsert = high_resolution_clock::now();
//         customInsert(arr, randomIndex, rand());
//         auto endInsert = high_resolution_clock::now();
//         auto timeInsert = duration_cast<nanoseconds>(endInsert - startInsert).count();
//         cout << "Time to Insert (random index): " << timeInsert << " ns | Complexity: O(n)" << endl;

//         // Measure Delete Time (Delete from a random index)
//         auto startDelete = high_resolution_clock::now();
//         customDelete(arr, randomIndex);
//         auto endDelete = high_resolution_clock::now();
//         auto timeDelete = duration_cast<nanoseconds>(endDelete - startDelete).count();
//         cout << "Time to Delete (random index): " << timeDelete << " ns | Complexity: O(n)" << endl;

//         // Measure Clear Time
//         auto startClear = high_resolution_clock::now();
//         arr.clear();
//         auto endClear = high_resolution_clock::now();
//         auto timeClear = duration_cast<nanoseconds>(endClear - startClear).count();
//         cout << "Time to Clear: " << timeClear << " ns | Complexity: O(n)" << endl;

//         // Reinitialize the array to its original size
//         arr.resize(size);
//         for (int& num : arr) {
//             num = rand();
//         }
//         sort(arr.begin(), arr.end());

//         // Measure Update Time (Update element at random index)
//         int indexToUpdate = rand() % size;
//         auto startUpdate = high_resolution_clock::now();
//         customUpdate(arr, indexToUpdate, rand());
//         auto endUpdate = high_resolution_clock::now();
//         auto timeUpdate = duration_cast<nanoseconds>(endUpdate - startUpdate).count();
//         cout << "Time to Update (random index): " << timeUpdate << " ns | Complexity: O(1)" << endl;

//         cout << "----------------------------------------------" << endl;
//     }

//     return 0;
// }





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
