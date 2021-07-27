#include<iostream>
#include<list>
using namespace std;
bool sc(int a){
	return a%2;
}
int main(){
	list<int>lis;
    list<int>::iterator a=lis.begin();
	lis.push_back(1);
	lis.push_back(2);
	lis.push_back(3);
	lis.insert(a,100);
	lis.remove_if(sc);
	a=lis.begin();
	while(a!=lis.end()){
		printf("%d",*a++);
	}
	
}
