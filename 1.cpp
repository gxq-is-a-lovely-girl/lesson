#include<iostream>
using namespace std;
int main(){
	int a[61];
	a[1]=1;
	a[2]=1;
	for(int i=3;i<61;i++){
		a[i]=a[i-1]+a[i-2];
	}
	cout<<a[60];
	return 0;
} 
