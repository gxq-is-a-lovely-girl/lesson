#include<iostream>
using namespace std;
void printf_cr(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
void px_cr(int a[],int n){
		int x;
	for(int i=0;i<n-1;i++){
		x=a[i+1];
		for(int j=i;j>=0;j--){
			if(a[j]>x){
				a[j+1]=a[j];
				a[j]=x;
			}else{
				a[j+1]=x;
				break;
			}
			if(j==0){
				a[0]=x;
			}
		}
	}
	printf_cr(a,n);
}
void scanf_cr(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	}
	px_cr(a,n);
} 
int main(){
	int a[100];
	int n;
	cin>>n;
scanf_cr(a,n);
} 
