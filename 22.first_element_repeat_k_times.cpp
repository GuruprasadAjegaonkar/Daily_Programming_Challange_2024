#include<bits/stdc++.h>
using namespace std;
void calculatek(int arr[],int k,int n){
    bool flag=true;
	unordered_map <int,int> mpp;
	for(int i=0;i<n;i++){
		mpp[arr[i]]++;
	}
	for(auto i : mpp){
		if(k==i.second){
			cout<<i.first<<endl;
			flag=false;
		}
	}
	if(flag==true){
	    cout<<"-1";
	}
}
int main(){
	int arr[]={6, 6, 6, 6, 7, 7, 8, 8, 8};
	int k;
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"enter value of k";
	cin>>k;
	calculatek(arr,k,n);
	return 0;
}
