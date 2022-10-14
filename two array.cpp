#include<iostream>
using namespace std;
int main(){
	int n;

	cin>>n;

	int arr[n];
	int mid=n/2;
		int arr1[mid];
			int arr2[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int i=0;i<mid;i++){
		int arr1[mid]=arr[i];
	}
	for(int i=mid;i<n;i++){
		int arr2[n]=arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}

	for(int i=0;i<mid;i++){
		cout<<arr1[mid];
	}
	for(int i=mid;i<n;i++){
		cout<<arr2[n];
	}
	
}
