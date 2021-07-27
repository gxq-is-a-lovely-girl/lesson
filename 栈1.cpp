#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int>stk;
	stk.push(1); 
	stk.push(2); 
	stk.push(3); 
	while(!stk.empty()){
		printf("stk size=%lu\n",stk.size());
		printf("%d\n",stk.top());
		stk.pop();
	} 
	return 0;
} 
