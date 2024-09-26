#include<bits/stdc++.h>
using namespace std;
int main(){
	int count=0;
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	cout<<count;
	return 0;
}
