#include<iostream>
#include<cstring> 
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[10][10]; 
	memset(a,0,sizeof(a));
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cin>>a[i][j];
		}
	}
	for(int i=n-2;i>=0;i--){
		for(int j=0;j<=i;j++){
			a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
		}
	}
	cout<<a[0][0];
}
