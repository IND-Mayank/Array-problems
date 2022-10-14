#include<iostream>
using namespace std;
void pairsum(int arr[],int n,int a){
	int b=0;
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
		if(arr[i]==arr[j]&&arr[j]==arr[i]){
			break;
		}
		else{
		
		int b=arr[i]+arr[j];	
		if(a==b){
		cout<<arr[i]<<" "<<arr[j]<<endl;
}
			
			}
		
		}
	}

}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int a;
	cin>>a;
	pairsum(arr,n,a);
   
}
