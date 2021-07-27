#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n,rl,w[100],v[100],dp[100][100],d[100];
    cin>>n>>rl;
    memset(w,0,sizeof(w));
    memset(dp,0,sizeof(dp));
    memset(v,0,sizeof(v));
    memset(d,0,sizeof(d));
	for(int i=1;i<=n;i++){
    	cin>>w[i]>>v[i]>>d[i];
	}
	for(int i=1;i<=n;i++){
		for(int k=0;k<=d[i];k++){
		for(int j=0;j<=rl;j++){
			if(j>=k*w[i]){
			dp[i][j]=max(dp[i][j],dp[i-1][j-k*w[i]]+k*v[i]); 
	}
		}
	}
}
for(int i=0;i<=n;i++){
	for(int j=0;j<=rl;j++){
		cout<<dp[i][j]<<" ";
	}
	cout<<endl;
}
//cout<<dp[n][rl];
} 
