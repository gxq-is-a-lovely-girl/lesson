#include<iostream>
#include<stack>
using namespace std;
void fz(stack<int>&stk){
	int size=stk.size();
	int arr[size];
	for(int i=0;i<size;i++){
		arr[i]=stk.top();
		stk.pop();
			}
			for(int i=0;i<size;i++){
				stk.push(arr[i]);
			}
	}
int main(){
	stack<int>stk;
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&a); 
		stk.push(a);
	}
	fz(stk);
	while(!stk.empty()){
			printf("stk size=[%lu]\n",stk.size());
			printf("stk.pop[%d]\n",stk.top());
			stk.pop();
				}

	
	
}
