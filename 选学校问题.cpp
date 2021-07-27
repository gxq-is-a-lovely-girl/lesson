#include<iostream>
#include<algorithm>
using namespace std;
struct p{
	int jia;
	float g;
	float xing;
};
bool tmp(p a, p b){
	return a.xing>b.xing;
}
int main(){
	int z,n;
	cin>>z;
	cin>>n;
	p a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].jia>>a[i].g; 
	a[i].xing=a[i].g/a[i].jia;
}
	sort(a,a+n,tmp);
	int j=0;
	while(1){
		z-=a[j].jia;
		if(z<0){
			z+=a[j].jia;
			break;
	}
	j++;
	}
	j-=1;
	 float gai=1;
	for(int i=0;i<=j;i++){
		gai*=1-a[i].g;
	}
	gai=1-gai;
	printf("%.1f",gai*100);
	cout<<"%";
	
} 
