#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        for (const string& s : strs) {
            string sorted_s = s;
            sort(sorted_s.begin(), sorted_s.end());
            mpp[sorted_s].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto& group : mpp) {
            ans.push_back(group.second);
        }

        return ans;
    }
};

int main() {
    Solution solution;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = solution.groupAnagrams(strs);
    cout << "Grouped anagrams are:" << endl;
    for (const auto& group : result) {
        cout << "[";
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}

