#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int size)
{
	int low=0;
	int mid=0;
	int high=size-1;
	while(mid<high)
	{
		if(arr[mid]==0)
		{
			swap(arr[mid],arr[low]);
			mid++;
			low++;
		}
		else if(arr[mid]==1)
		{
			mid++;
		}
		else if(arr[mid]==2)
		{
			swap(arr[mid],arr[high]);
			high--;
		}
	}
}
int main()
{
	int arr[]={1,0,2,0,1,0,2,1,2,1,2,1,1,1,2,2,2};
	cout<<"before sorted"<<endl;
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++){
		cout<<arr[i];
	}
	cout<<endl;
	sort(arr,size);
	cout<<"after sort"<<endl;
	for(int i=0;i<size;i++){
	cout<<arr[i];
	}
	return 0;
}
