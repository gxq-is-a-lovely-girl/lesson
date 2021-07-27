#include<iostream>
#include<algorithm>
using namespace std;
bool tmp(int a,int b){
	return a>b;
}
int main(){
	int a[10]={1,2,6,24,120,720,5040,40320,362880};
	int m;
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	sort(a,a+10,tmp);
	for(int i=0;i<m;i++){
		for(int j=0;j<=9;j++){
			if(b[i]>=a[j]){
				b[i]-=a[j];
			}
		}
		if(b[i]==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
