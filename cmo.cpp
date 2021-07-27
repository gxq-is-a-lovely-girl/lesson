#include<iostream>
#include<algorithm>
#include<cmath>
bool tmp(float a,float b){
	return a>b;
}
using namespace std;
int main(){
	int ax;
	cin>>ax;
	while(ax){

	int sum=0;
	int n;
	cin>>n;
	float a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	sort(a,a+n,tmp);
	float w=20,h=2;
	int i=0;
	while(n){
		if(w<=0){
			break;
		}
		w-=2*sqrt(a[i]*a[i]-h*h/4);
		i++;
		n--; 
		sum++;
	}
	cout<<sum;
    ax--;
}
	
} 
