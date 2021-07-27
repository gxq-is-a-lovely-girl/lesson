#include<iostream>
#define gxq long long  
using namespace std;
gxq m,n,w[1000],v[1000],bag[1000][1000]; 
int main(){
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		cin>>w[i]>>v[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=v[i];j<=m;j++){
			bag[i][j]=max(bag[i-1][j]),bag[i][j-v[i]]+w[i]);
		}
	}
	cout<<bag[n][m];
	return 0;
}
