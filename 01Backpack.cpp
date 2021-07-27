#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n,rl,w[100],v[100],dp[100][100];
    cin>>n,rl;
    memset(w,0,sizeof(w));
    memset(dp,0,sizeof(dp));
    memset(v,0,sizeof(v));
	for(int i=1;i<=n;i++){
    	cin>>w[i]>>v[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=rl;j++){
			if(j>=w[i]){
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]); 
	}else{
		dp[i][j]=dp[i-1][j];
	}
		}
	}
	cout<<dp[n][rl];
} 
