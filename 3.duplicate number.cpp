class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto i : nums){
            mpp[i]++;
        }
        for(auto i : mpp){
            if(i.second>1){
                return i.first;
            }
        }
        return 0;
    }
};
int main() {
    vector<int> nums = {1, 3, 4, 2, 2};
    Solution solution;
    int duplicate = solution.findDuplicate(nums);
    cout << "Duplicate number is: " << duplicate << endl;

    return 0;
}
