#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int>que;
	que.push(1);
	que.push(2);
	que.push(3);
	while(!que.empty()){
		cout<<que.size()<<endl;
		cout<<que.front()<<endl;
		que.pop(); 
	}
	return 0;
}
