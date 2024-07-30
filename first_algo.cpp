#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the list: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the list: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (arr[i] + arr[j] == arr[k]) {
                    cout << "The triplets are: " << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                    found = true;
                }
            }
        }
    }

    if (!found) {
        cout << "No such triplet found." << endl;
    }

    return 0;
}
