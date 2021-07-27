#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int>stk;
	int a;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		stk.push(a);
	}
	for(int i=0;i<n;i++){
		a=stk.front();
		stk.push(a);
		if(a==5){
		stk.pop();
		continue;
		}
		cout<<a<<" ";
		stk.pop(); 
		
	}
} 
