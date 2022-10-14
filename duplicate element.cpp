#include<iostream>
using namespace std;
int unique(int arr[],int n){
     
	int a=0;
	for (int i=0;i<n;i++){
		a=a^arr[i];
	}
	for (int i=1;i<n;i++){
		a=a^i;
		return a;
	}
}
int main(){

int arr[5]={1,2,3,3,1};
int n=5;
cout<<unique(arr,5);
}
