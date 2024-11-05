#include <iostream>
using namespace std;

void sumarr(int a[], int b[], int r[], int size);

void sumarr(int a[], int b[], int r[], int size) {
    for (int i = 0; i < size; ++i) {
        r[i] = a[i] + b[i];
    }
}

int main() {
    int a[] = {5, -1, 7};
    int b[] = {2, 4, -2};
    int size = 3;
    int r[size];

    sumarr(a, b, r, size);

    cout << "Result array: ";
    for (int i = 0; i < size; ++i) {
        cout << r[i] << " ";
    }

    return 0;
}

