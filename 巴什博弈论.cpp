#include<iostream>
using namespace std;
int main(){
int m;
cin>>m;
int n;
cin>>n;
if(m<=n||m%(n+1)!=0){
	cout<<"A";
}else{
	cout<<"B";
}
return 0;
} 
