#include<iostream>
#include<queue>
using namespace std;
int main(){
	int n;
	cin>>n;
	priority_queue<int>que;
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		que.push(a);
}
	for(int i=0;i<n;i++){ 
		cout<<"size="<<que.size()<<endl;
		cout<<"top="<<que.top()<<endl;
		que.pop();
	}
}
