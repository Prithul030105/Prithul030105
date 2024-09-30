#include <iostream>
using namespace std;

int Binary_search(int a[], int low, int high, int x)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] == x)
        {
            return mid; 
        }
        else if (x > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;  
}

int main()
{
    int n;
    cout << "Enter the number of elements to be added in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the sorted list: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int p;
    cout << "Enter the number to find in the array: ";
    cin >> p;

    int result = Binary_search(arr, 0, n - 1, p);
    if (result != -1)
    {
        cout << "The number is present in the array at index " << result << endl;
    }
    else
    {
        cout << "The number is not present in the array" << endl;
    }

    return 0;
}
