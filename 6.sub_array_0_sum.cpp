#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
vector<pair<int, int>> findAllZeroSumSubarrays(const vector<int>& arr) {
    unordered_map<int, vector<int>> prefixSumMap;
    vector<pair<int, int>> result;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum == 0) {
            result.push_back({0, i});
        }
        if (prefixSumMap.find(sum) != prefixSumMap.end()) {
            vector<int> indices = prefixSumMap[sum];
            for (int startIdx : indices) {
                result.push_back({startIdx + 1, i});
            }
        }
        prefixSumMap[sum].push_back(i);
    }

    return result;
}
int main() {
    vector<int> arr = {1, 2, -3, 3, -1, 2};
    vector<pair<int, int>> result = findAllZeroSumSubarrays(arr);
    if (!result.empty()) {
        for (const auto& subarray : result) {
            cout << "(" << subarray.first << ", " << subarray.second << ")" << endl;
        }
    } else {
        cout << "No subarrays with sum 0 found." << endl;
    }
    return 0;
}

