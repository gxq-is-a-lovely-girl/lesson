#include<iostream>
#include<algorithm>
using namespace std;
void qs(int a[],int le,int ri){
	if(le<ri){
		int mid=(le+ri)/2;
		swap(a[mid],a[ri]);
		int i=le;
		int j=ri-1;
		while(i<=j){
			while(a[i]<a[ri]){
				i++;
			}
			while(a[j]>a[ri]){
				j--;
			}
			if(i<=j){
				swap(a[i],a[j]);
				i++;
				j--;
			}
		
			
		}
		swap(a[i],a[ri]);
		qs(a,le,i-1);
		qs(a,i+1,ri);
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	qs(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
} 
