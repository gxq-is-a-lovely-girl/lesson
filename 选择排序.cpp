#include<iostream>
using namespace std;
void printf_xz(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
void px_xz(int a[],int n){
	for(int i=0;i<n;i++){
		int min = i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min = j;
			}      
		}
		int tmp=a[min];
		a[min]=a[i];
		a[i]=tmp;
	}
	printf_xz(a,n); 
} 
void scanf_xz(int a[],int n){
	for(int i=0;i<n;i++){
	cin>>a[i];
	}
	
px_xz(a,n);
}
int main(){
int a[100];
 	int n;
 	cin>>n;
 	scanf_xz(a,n);
 }
