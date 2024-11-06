#include <stdio.h>

void mergeArrays(int arr1[], int m, int arr2[], int n, int mergedArr[]);

int main() {
    int arr1[] = {12, 20, 24, 32};
    int arr2[] = {7, 8, 65, 105};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int mergedArr[m + n];

    mergeArrays(arr1, m, arr2, n, mergedArr);

    printf("Merged sorted array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}

void mergeArrays(int arr1[], int m, int arr2[], int n, int mergedArr[]) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            mergedArr[k] = arr1[i];
            i++;
        } else {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        mergedArr[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n) {
        mergedArr[k] = arr2[j];
        j++;
        k++;
    }
}
