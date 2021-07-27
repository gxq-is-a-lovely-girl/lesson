#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int>lis;
	lis.push_front(1);
	lis.push_front(2);
	lis.push_front(3);
	list<int>::iterator it=lis.begin();
	while(it!=lis.end()){
		printf("%d",*it++);
	}
	return 0;
} 
