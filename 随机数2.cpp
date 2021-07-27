#include<iostream>
#include <stdlib.h>
#include <ctime> 
using namespace std; 
void print(int a[],int n){
	for(int i = 0; i < n;i++ ) { 
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
	print(a,n); 
} 
void scanf_xz(int a[],int n) {
        srand(time(NULL)); 
        for(int i = 0; i <n;i++){ 
		a[i]=rand()%999+1;
		}
		px_xz(a,n);
}
int main(){ 
int n=20000;
int a[n];
scanf_xz(a,n);
    return 0;
}
