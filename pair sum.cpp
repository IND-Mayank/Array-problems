#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int a;
	cin>>a;
    int b=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int b=arr[i]+arr[j];	
				if(b==a){
		cout<<arr[i]<<" "<<arr[j]<<endl;
	}
		}
	}

}
