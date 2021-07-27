#include<iostream>
using namespace std;
void insert(int arr[],int n){
for(int i=0;i<=n-2;i++){
int x=arr[i+1];
for(int j=i;j>=0;j--){
	
	if(x>arr[j]){
		arr[j+1]=x;
		break; 
	}else{
		arr[j+1]=arr[j];
	}
	if(j==0){
		arr[j]=x;
	}
	
}	
}
}
int main(){
int arr[6]={5,4,3,2,1,0};
insert(arr,6);
for(int i=5;i>=0;i--){
	cout<<arr[i]<<" ";
}
}  
