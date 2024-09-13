#include<bits/stdc++.h>
using namespace std;

void leader(vector<int> arr, int size) {
    vector<int> p; 
    for(int i = 0; i < size; i++) {
        bool isLeader = true;
        for(int j = i + 1; j < size; j++) {
            if(arr[i] < arr[j]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) {
            p.push_back(arr[i]);  
        }
    }

    // Print the leaders
    cout << "Leaders: ";
    for(int i = 0; i < p.size(); i++) {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    int size = arr.size();  

    leader(arr, size); 

    return 0;
}

