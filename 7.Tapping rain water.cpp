#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int result=0;
        int n=height.size();
        int r=n-1;
        int left_max=0;
        int right_max=0;
        while(l<=r){
            if(height[l]<=height[r]){
                if(height[l]>left_max){
                    left_max=height[l];
                }
                else{
                    result+=(left_max-height[l]);
                    l++;
                }
            }
            else{
                if(height[r]>right_max){
                    right_max=height[r];
                }
                else{
                    result+=(right_max-height[r]);
                    r--;
                }
            }
        }
        return result;
    }
};

int main() {
    Solution obj;
    vector<int> height = {2, 0, 4, 6, 2, 1, 0, 7};
    int result = obj.trap(height);
    cout << "Trapped water: " << result << endl;
    return 0;
}

