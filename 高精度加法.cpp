#include<iostream>
#include<cstring>
using namespace std;
int main(){
char a[100];
char b[100];
memset(a,0,100);
memset(b,0,100); 
gets(a);
gets(b);
int x=strlen(a);
int y=strlen(b);
int a1[100];
int b1[100];
int c[105];
memset(a1,0,100);
memset(b1,0,100);
for(int i=0;i<x;i++){
	a1[x-1-i]=a[i]-'0';
}
for(int i=0;i<y;i++){
	b1[y-1-i]=b[i]-'0';	
}
int u;
u=max(x,y);
int jin=0;
for(int i=0;i<u;i++){
	c[i]=a1[i]+b1[i]+jin;
	if(c[i]>9){
		jin=1;
		c[i]-=10;
	}else{
		jin=0;
	}
}
if(jin!=0){
	cout<<jin;
}
for(int i=u-1;i>=0;i--){
	cout<<c[i];
}
} 
