#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &arr, int n) {
    string ans = "";
    for(int i = 0; i < arr[0].length(); i++) {
        char ch = arr[0][i];
        bool match = true;
        for(int j = 1; j < n; j++) {
            if(i >= arr[j].size() || ch != arr[j][i]) {
                match = false;
                break;
            }
        }
        if(!match) {
            break;
        } else {
            ans.push_back(ch);
        }
    }
    return ans;
}

int main() {
    vector<string> arr = {"flow", "flew", "flat"};
    int n = arr.size();  
    string result = longestCommonPrefix(arr, n);
    cout << "Longest Common Prefix: " << result << endl;
    return 0;
}

