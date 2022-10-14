#include<iostream>
using namespace std;
/*int main(){
	int n,m;
	cin>>n>>m;
	int array[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>array[i][j];
		}
	}
	int key;
	cin>>key;
	bool flag;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(array[i][j]==key){
			cout<<i<<" "<<j;
			flag=true;
			}
		}
	}
	if(flag){
		cout<<"element is found";
	}
	else{
		cout<<"not found";
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	int array[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>array[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<m;j++){
			int temp=array[i][j];
			array[i][j]=array[j][i];
			array[j][i]=temp;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
*/
int main(){
	int m;
	cin>>m;
	int array[m][m];
	int array1[m][m];
	int array3[m][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cin>>array[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cin>>array1[i][j];
		}
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			for(int k=0;k<m;k++){
				array3[i][j] += array[i][k]*array1[k][j];
			}
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cout<<array3[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}
