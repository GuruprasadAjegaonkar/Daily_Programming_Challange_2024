#include<bits/stdc++.h>
using namespace std;
void primefactor(int n)
{
	vector<int>arr;
	while(n%2==0){
		arr.push_back(2);
		n=n/2;
	}
	for(int i=3;i<=n;i+=2){
		while(n%i==0){
			arr.push_back(i);
			n=n/i;
		}
	}
	if(n>2){
		arr.push_back(n);
	}
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int n;
	cout<<"enter number"<<endl;
	cin>>n;
	primefactor(n);
	return 0;
}
