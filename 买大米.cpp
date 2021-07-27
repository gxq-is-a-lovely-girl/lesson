#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int s[m+1][4];
	for(int i=1;i<=m;i++){
		cin>>s[i][1]>>s[i][2]>>s[i][3];
	}
  int dp[n+1];
  memset(dp,0,sizeof(dp));
  for(int i=1;i<=m;i++){
  	for(int j=n;j>=1;j--){
  	    //可买下全部
		  //可以买下部分
		  //不买
		  if(j>=s[i][1]*s[i][3]){
		  	for(int k=1;k<=s[i][3];k++){
		  			dp[j]=max(dp[j],dp[j-s[i][1]*k]+s[i][2]*k);
			  }
		  }
		  if(j>=s[i][1]){
		  	for(int k=1;k<=j/s[i][1];k++){
		  		dp[j]=max(dp[j],dp[j-s[i][1]*k]+s[i][2]*k);
			  }
		  }
		  } 
  	  
	  }
	cout<<dp[n]; 
  }

