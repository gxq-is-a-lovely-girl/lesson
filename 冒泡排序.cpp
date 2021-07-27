#include<iostream>
using namespace std;
void pop(int arr[],int len){
	for(int i=0;i<len-1;i++){
		for(int j=0;j<len-1-i;j++){
			if(arr[j]>arr[j+1]){
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
}
int main(){
	int arr[6]={5,4,3,2,1,0};
	pop(arr,6);
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}
} 
