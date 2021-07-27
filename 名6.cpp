#include<iostream>
using namespace std;
struct a{
		int k;
		int s;
	};
int main(){
	int n,m;
	cin>>n>>m;
	if(m*1.5>n){
		return 0;
	}
	a user[n];
	scan(user[],n);
}
void scan(a &user[],int n);
void scan(a &user[],int n){
	for(int i=0;i<n;i++){
		scanf("%d%d",&user[i].k,user[i].s);
	}
}
