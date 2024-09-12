#include<bits/stdc++.h>
using namespace std;

void mergeArrays(int arr1[], int m, int arr2[], int n) {
    for (int i = 0; i < m; i++) {
        if (arr1[i] > arr2[0]) {
            swap(arr1[i], arr2[0]);
            int first = arr2[0];
            int j;
            for (j = 1; j < n && arr2[j] < first; j++) {
                arr2[j - 1] = arr2[j];
            }
            arr2[j - 1] = first;
        }
    }
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    mergeArrays(arr1, m, arr2, n);

    cout << "arr1: ";
    for (int i = 0; i < m; i++) {
        cout << arr1[i] << " ";
    }

    cout << "\narr2: ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}

