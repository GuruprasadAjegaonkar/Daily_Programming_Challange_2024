#include<iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"enter two numbers"<<endl;
	cin>>n;
	cin>>m;
	for(int i=1;i>0;i++){
		if(i%n==0 && i%m==0){
			cout<<"LCM is"<<" "<<i;
			break;
		}
	}
	return 0;
}
