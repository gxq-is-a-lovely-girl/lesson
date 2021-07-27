#include<iostream>
#include<list>
#include<ctime>
using namespace std;
int main(){
	list<int>lis;
	int n;srand(time(NULL)); 
	list<int>::iterator a=lis.begin();
	for(int i=1;i<=2000;i++){
	
	n=rand()%10000+1;
	if(lis.empty()){
			lis.push_front(n);
		}else{
		for(a=lis.begin();a!=lis.end();a++){
		
		if(n<=*a){
			break;
		}
		}
		lis.insert(a,n);
	}
	}
	for(a=lis.begin();a!=lis.end();a++){
	printf("%d	",*a);
	}
	
}
