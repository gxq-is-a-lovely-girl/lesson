#include<iostream>
using namespace std;
int main(){
	long long n;
	cin>>n;
	if(n<=4){
		cout<<n;
	return 0; 
	} 
	long long a[n+1];
	for(int i=1;i<=4;i++){
		a[i]=i;
	}

    for(int i=5;i<=n;i++){
       a[i]=a[i-1]+a[i-3];
	}
	cout<<a[n];
}
