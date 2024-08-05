#include <iostream>
using namespace std;

void multiply_Array(int a[], int b[], int n) {
    
    int product = 1;
    for (int i = 0; i < n; ++i) {
        product *= a[i];
    }

    
    for (int i = 0; i < n; ++i) {
        b[i] = product / a[i];
    }
}

int main() {
    const int n = 5;
    int a[n] = {1, 2, 3, 4, 5};
    int b[n];

    multiply_Array(a, b, n);

    
    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }

    return 0;
}
