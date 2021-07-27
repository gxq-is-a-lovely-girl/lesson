#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	
	int T,max1=1;
	int a[10][10];
	cin>>T;
	memset(a,0,sizeof(a));
	for(int i=0;i<T;i++){
		int n;
		cin>>n;
		a[i][n]=1;
		max1=max(n,max1);
	}
	for(int i=T-1;i>=0;i--){
		for(int j=0;j<=max1;j++){
			if(j==0){
				a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
			}
			else if(j==9){
				a[i][j]+=max(a[i+1][j],a[i+1][j-1]);
			}else{
				a[i][j]+=max(a[i+1][j],max(a[i+1][j+1],a[i+1][j-1]));
			}
		}
	}
	int max2=0;
	for(int i=0;i<=max1;i++){
		max2=max(a[0][i],max2);
	}
	cout<<max2;
} 
