// // // // // #include<iostream>
// // // // // #include<time.h>
// // // // // using namespace std;




// // // // // int main(){
// // // // //     cout<<"Enter the number of elements to be present in the array"<<endl;
// // // // //     int n;
// // // // //     cin>>n;
// // // // //     cout<<"Enter the elements in the array"<<endl;
// // // // //     for(int i)
    
// // // // //     return 0;
// // // // // }
// // // // #include <iostream>
// // // // #include <cstdlib>
// // // // #include <ctime>
// // // // #include<cmath>

// // // // using namespace std;

// // // // // Function to perform linear search
// // // // bool linearSearch(int arr[], int size, int target) {
// // // //     for (int i = 0; i < size; ++i) {
// // // //         if (arr[i] == target) {
// // // //             return true;
// // // //         }
// // // //     }
// // // //     return false;
// // // // }

// // // // int main() {
// // // //     srand(time(0)); // Seed for random number generator
// // // //     int initialSize = 10;
// // // //     int numIterations = 7; // To go from 10 to 10,000,000 (7 iterations)
// // // //     int numRuns = 100; // Number of runs for averaging

// // // //     for (int i = 0; i < numIterations; ++i) {
// // // //         int arraySize = initialSize * pow(10, i);
// // // //         double totalTime = 0.0;

// // // //         for (int run = 0; run < numRuns; ++run) {
// // // //             int* arr = new int[arraySize];
// // // //             for (int j = 0; j < arraySize; ++j) {
// // // //                 arr[j] = rand();
// // // //             }

// // // //             int target = rand();

// // // //             clock_t startTime = clock();
// // // //             linearSearch(arr, arraySize, target);
// // // //             clock_t endTime = clock();

// // // //             totalTime += static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC;

// // // //             delete[] arr;
// // // //         }

// // // //         double averageTime = totalTime / numRuns;
// // // //         cout << "Average time for array size " << arraySize << " over " << numRuns << " runs: " << averageTime << " seconds" << endl;
// // // //     }

// // // //     return 0;
// // // // }
// // // #include <iostream>
// // // #include <cstdlib>
// // // #include <ctime>
// // // #include <chrono>

// // // using namespace std;
// // // using namespace std::chrono;

// // // int linearSearch(int arr[], int size, int x) {
// // //     for (int i = 0; i < size; ++i) {
// // //         if (arr[i] == x) {
// // //             return 1;
// // //         }
// // //     }
// // //     return false;
// // // }

// // // int main() {
// // //     srand(time(0)); 
// // //     int initialisation = 50;
// // //     int iterations = 10; 
// // //     int numRuns = 100; 

// // //     for (int i = 0; i < iterations; ++i) {
// // //         int arraySize = initialisation;
// // //         for (int j = 0; j < i; ++j) {
// // //             arraySize *= 10;
// // //         }
// // //         double totalTime = 0.0;

// // //         for (int run = 0; run < numRuns; ++run) {
// // //             int* arr = new int[arraySize];
// // //             for (int j = 0; j < arraySize; ++j) {
// // //                 arr[j] = rand();
// // //             }

// // //             int target = rand();

// // //             auto startTime = high_resolution_clock::now();
// // //             linearSearch(arr, arraySize, target);
// // //             auto endTime = high_resolution_clock::now();

// // //             duration<double> elapsed = endTime - startTime;
// // //             totalTime += elapsed.count();

// // //             delete[] arr;
// // //         }

// // //         double averageTime = totalTime / numRuns;
// // //         cout << "Average time for array size " << arraySize << " over " << numRuns << " runs: " << averageTime << " seconds" << endl;
// // //     }

// // //     return 0;
// // // }


// // #include <iostream>
// // #include <cstdlib>
// // #include <ctime>
// // #include <chrono>

// // using namespace std;
// // using namespace std::chrono;

// // // Function to perform linear search
// // bool linearSearch(int arr[], int size, int target) {
// //     for (int i = 0; i < size; ++i) {
// //         if (arr[i] == target) {
// //             return true;
// //         }
// //     }
// //     return false;
// // }

// // int main() {
// //     srand(time(0)); // Seed for random number generator
// //     int initialSize = 10;
// //     int numIterations = 7; // To go from 10 to 10,000,000 (7 iterations)
// //     int numRuns = 100; // Number of runs for averaging

// //     for (int i = 0; i < numIterations; ++i) {
// //         int arraySize = initialSize;
// //         for (int j = 0; j < i; ++j) {
// //             arraySize *= 10;
// //         }
// //         double totalTime = 0.0;

// //         for (int run = 0; run < numRuns; ++run) {
// //             int* arr = new int[arraySize];
// //             for (int j = 0; j < arraySize; ++j) {
// //                 arr[j] = rand();
// //             }

// //             int target = rand();

// //             auto startTime = high_resolution_clock::now();
// //             linearSearch(arr, arraySize, target);
// //             auto endTime = high_resolution_clock::now();

// //             duration<double, milli> elapsed = endTime - startTime;
// //             totalTime += elapsed.count();

// //             delete[] arr;
// //         }

// //         double averageTime = totalTime / numRuns;
// //         cout << "Average time for array size " << arraySize << " over " << numRuns << " runs: " << averageTime << " milliseconds" << endl;
// //     }

// //     return 0;
// // }
// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include <chrono>
// #include <iomanip> // For setting precision

// using namespace std;
// using namespace std::chrono;

// // Function to perform linear search
// bool linearSearch(int arr[], int size, int target) {
//     for (int i = 0; i < size; ++i) {
//         if (arr[i] == target) {
//             return true;
//         }
//     }
//     return false;
// }

// int main() {
//     srand(time(0)); // Seed for random number generator
//     int initialSize = 10;
//     int numIterations = 7; // To go from 10 to 10,000,000 (7 iterations)
//     int numRuns = 100; // Number of runs for averaging

//     // Array to store the average times
//     double averageTimes[numIterations];

//     for (int i = 0; i < numIterations; ++i) {
//         int arraySize = initialSize;
//         for (int j = 0; j < i; ++j) {
//             arraySize *= 10;
//         }
//         double totalTime = 0.0;

//         for (int run = 0; run < numRuns; ++run) {
//             int* arr = new int[arraySize];
//             for (int j = 0; j < arraySize; ++j) {
//                 arr[j] = rand();
//             }

//             int target = rand();

//             auto startTime = high_resolution_clock::now();
//             linearSearch(arr, arraySize, target);
//             auto endTime = high_resolution_clock::now();

//             duration<double, milli> elapsed = endTime - startTime;
//             totalTime += elapsed.count();

//             delete[] arr;
//         }

//         double averageTime = totalTime / numRuns;
//         averageTimes[i] = averageTime;
//     }

//     // Print the table
//     cout << setw(15) << "Array Size" << setw(25) << "Average Time (ms)" << endl;
//     cout << "--------------------------------------------" << endl;
//     int arraySize = initialSize;
//     for (int i = 0; i < numIterations; ++i) {
//         cout << setw(15) << arraySize << setw(25) << averageTimes[i] << endl;
//         arraySize *= 10;
//     }

//     return 0;
// }

// #include<iostream>
// #include<ctime>
// using namespace std;
// int linear_search(int arr[],int size, int x){
//     for(int i=0;i<=size;i++){
//         if(arr[i]=x){
//             return 1;
//         }
//         else{
//             return 0;
//         }
//     }
// }
// void random_function(int arr[], int size){
//     for(int i=0;i<=size;i++){
//         arr[i]=rand();
//         cout<<arr[i]<<endl;
//     }
// }



// int main(){
    
//     return 0;
// }





// #include <iostream>
// #include <vector>
// #include <ctime>
// #include <cstdlib>
// #include <chrono>

// using namespace std;
// using namespace std::chrono;

// // Function to perform linear search
// int linearSearch(const vector<int>& arr, int target) {
//     for (size_t i = 0; i < arr.size(); ++i) {
//         if (arr[i] == target) {
//             return i; // Target found, return index
//         }
//     }
//     return -1; // Target not found
// }

// int main() {
//     srand(static_cast<unsigned int>(time(0))); // Seed for random number generation
//     vector<int> arraySizes = {100, 1000, 10000, 100000}; // Different array sizes to test

//     for (int size : arraySizes) {
//         // Generate random array of given size
//         vector<int> arr(size);
//         for (int& element : arr) {
//             element = rand(); // Assign random value to each element
//         }

//         int target = arr[rand() % size]; // Random target element from the array

//         auto start = high_resolution_clock::now(); // Start timer

//         // Perform linear search
//         int result = linearSearch(arr, target);

//         auto end = high_resolution_clock::now(); // End timer

//         // Calculate time taken in nanoseconds
//         auto timeTaken = duration_cast<nanoseconds>(end - start).count();

//         cout << "Array Size: " << size << " | Time taken for linear search: " << timeTaken << " nanoseconds" << endl;
//     }

//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include <ctime>
// #include <cstdlib>
// #include <chrono>

// using namespace std;
// using namespace std::chrono;

// // Function to perform linear search
// int linearSearch(const vector<int>& arr, int target) {
//     for (size_t i = 0; i < arr.size(); ++i) {
//         if (arr[i] == target) {
//             return i; // Target found, return index
//         }
//     }
//     return -1; // Target not found
// }

// int main() {
//     srand(static_cast<unsigned int>(time(0))); // Seed for random number generation
//     vector<int> arraySizes = {1000, 10000, 100000, 1000000}; // Increased array sizes for testing

//     const int numIterations = 1000; // Number of times to repeat the search for better timing

//     for (int size : arraySizes) {
//         // Generate random array of given size
//         vector<int> arr(size);
//         for (int& element : arr) {
//             element = rand(); // Assign random value to each element
//         }

//         int target = arr[rand() % size]; // Random target element from the array

//         auto start = high_resolution_clock::now(); // Start timer

//         // Perform linear search multiple times
//         for (int i = 0; i < numIterations; ++i) {
//             linearSearch(arr, target);
//         }

//         auto end = high_resolution_clock::now(); // End timer

//         // Calculate time taken in nanoseconds (dividing by numIterations to get average)
//         auto timeTaken = duration_cast<nanoseconds>(end - start).count() / numIterations;

//         cout << "Array Size: " << size << " | Average time taken for linear search: " << timeTaken << " nanoseconds" << endl;
//     }

//     return 0;
// }




#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <chrono>
#include <algorithm>
#include<random> // For std::shuffle

using namespace std;
using namespace std::chrono;

// Function to perform linear search
int linearSearch(const vector<int>& arr, int target) {
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; // Target found, return index
        }
    }
    return -1; // Target not found
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation

    vector<int> arraySizes = {1000, 10000, 100000, 1000000}; // Increased array sizes for testing
    const int numIterations = 1000; // Number of times to repeat the search for better timing

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
            int target = arr[rand() % size]; // Random target element from the array

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




// #include <iostream>
// #include <vector>
// #include <cstdlib>
// #include <ctime>
// #include <chrono>
// #include <algorithm>

// using namespace std;
// using namespace chrono;

// // Function to perform linear search
// int linearSearch(const vector<int>& arr, int target) {
//     for (size_t i = 0; i < arr.size(); ++i) {
//         if (arr[i] == target) {
//             return i; // Return index if target is found
//         }
//     }
//     return -1; // Return -1 if target is not found
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

//         // Shuffle the array to randomize the order
//         random_shuffle(arr.begin(), arr.end());

//         // Measure the time for a single search
//         int target = arr[rand() % size];
//         auto start = high_resolution_clock::now(); // Start timer
//         linearSearch(arr, target); // Perform linear search
//         auto end = high_resolution_clock::now(); // End timer

//         // Calculate time taken
//         auto timeTaken = duration_cast<nanoseconds>(end - start).count();

//         // Output the result
//         cout << "Array Size: " << size << " | Time taken for linear search: " << timeTaken << " nanoseconds" << endl;
//     }

//     return 0;
// }






// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include <chrono>
// #include <algorithm>
// #include <random>

// using namespace std;
// using namespace std::chrono;

// // Function to perform linear search
// int linearSearch(const int* arr, int size, int target) {
//     for (int i = 0; i < size; ++i) {
//         if (arr[i] == target) {
//             return i; // Target found, return index
//         }
//     }
//     return -1; // Target not found
// }

// int main() {
//     srand(static_cast<unsigned int>(time(0))); // Seed for random number generation

//     int arraySizes[] = {1000, 10000, 100000, 1000000}; // Increased array sizes for testing
//     const int numSizes = sizeof(arraySizes) / sizeof(arraySizes[0]);
//     const int numIterations = 1000; // Number of times to repeat the search for better timing

//     for (int j = 0; j < numSizes; ++j) {
//         int size = arraySizes[j];
//         int* arr = new int[size]; // Allocate array dynamically

//         // Fill the array with random values
//         for (int i = 0; i < size; ++i) {
//             arr[i] = rand(); // Assign random value to each element
//         }

//         // Shuffle the array to reduce cache effects
//         std::shuffle(arr, arr + size, std::default_random_engine());

//         // Perform searches on random targets and measure time
//         long long totalTimeTaken = 0;

//         for (int i = 0; i < numIterations; ++i) {
//             int target = arr[rand() % size]; // Random target element from the array

//             auto start = high_resolution_clock::now(); // Start timer

//             linearSearch(arr, size, target); // Perform linear search

//             auto end = high_resolution_clock::now(); // End timer

//             totalTimeTaken += duration_cast<nanoseconds>(end - start).count();
//         }

//         // Calculate average time taken per search
//         auto avgTimeTaken = totalTimeTaken / numIterations;

//         cout << "Array Size: " << size << " | Average time taken for linear search: " << avgTimeTaken << " nanoseconds" << endl;

//         delete[] arr; // Free allocated memory
//     }

//     return 0;
// }






// #include <cstdlib>
// #include <iostream>
// #include <chrono>
// using namespace std;
// using namespace std::chrono;
// int main()
// {

//     //   auto start = high_resolution_clock::now();  

//     long size = 50;
//     long num;
//         cout << "the number :";
//         cout << endl;
//         cin >> num;
       

//     while (size != 500000000)
//     {
//   auto start = high_resolution_clock::now();
     
//         long N = 100000000;
//         long arr[size];

        

//         for (int i = 0; i < size; i++)
//         {
//             arr[i] = rand()%N ;
//         }
//         for (int i = 0; i < size; i++)
//         {
//             if (arr[i] == arr[size])
//             {
//                 // cout << "the number found" << endl;
//                 break;
//             }
//         }

  
//         auto end = high_resolution_clock::now();
//         auto duration = duration_cast<nanoseconds>(end - start);
//         cout << "size= " << size <<"      "<< "time= " << duration.count() << endl;

//         size*=10;
//     }

//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <ctime>
// #include <cstdlib>
// #include <chrono>
// #include <thread> // Include this for std::this_thread::sleep_for

// using namespace std;
// using namespace std::chrono;

// // Function to perform linear search
// int linearSearch(const vector<int>& arr, int target) {
//     for (size_t i = 0; i < arr.size(); ++i) {
//         if (arr[i] == target) {
//             return i; // Target found, return index
//         }
//     }
//     return -1; // Target not found
// }

// int main() {
//     srand(static_cast<unsigned int>(time(0))); // Seed for random number generation
//     vector<int> arraySizes = {100, 1000, 10000, 100000}; // Different array sizes to test
//     int numTrials = 10000; // Increased number of trials to improve accuracy

//     for (int size : arraySizes) {
//         // Generate random array of given size
//         vector<int> arr(size);
//         for (int& element : arr) {
//             element = rand(); // Assign random value to each element
//         }

//         int target = arr[rand() % size]; // Random target element from the array

//         // Warm-up to stabilize performance
//         for (int i = 0; i < 100; ++i) {
//             linearSearch(arr, target);
//         }

//         auto start = high_resolution_clock::now(); // Start timer

//         // Repeat linear search multiple times
//         for (int i = 0; i < numTrials; ++i) {
//             linearSearch(arr, target);
//         }

//         auto end = high_resolution_clock::now(); // End timer

//         // Calculate average time taken per search in nanoseconds
//         auto timeTaken = duration_cast<nanoseconds>(end - start).count() / numTrials;

//         cout << "Array Size: " << size << " | Average time taken for linear search: " << timeTaken << " nanoseconds" << endl;

//         // Short delay to stabilize CPU usage
//         std::this_thread::sleep_for(std::chrono::milliseconds(100));
//     }

//     return 0;
// }



