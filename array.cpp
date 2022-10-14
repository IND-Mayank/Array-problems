#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	int maxn;
	int minn;
	maxn=INT_MIN;
	minn=INT_MAX;
	for(int i=0;i<n;i++){
		maxn=max(maxn,array[i]);
		minn=min(minn,array[i]);
		}
		cout<<maxn<<" "<<minn;

}

