#include<iostream>
using namespace std;

class Solution {
public:
    int missingNumber(int arr[], int n) {
        int totalSum = (n * (n + 1)) / 2;
        int arrSum = 0;
        for (int i = 0; i < n - 1; i++) {
            arrSum += arr[i];
        }
        return totalSum - arrSum;
    }
};

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = 5;
    Solution solution;
    int missing = solution.missingNumber(arr, n);
    cout << "Missing number is: " << missing << endl;
    return 0;
}

