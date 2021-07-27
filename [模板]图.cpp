#include<iostream>
#include<stack>
#include<cstring>
#define MAX 1000
using namespace std;
int vt[MAX];//存点 
int id[MAX];//存入度
int tp[MAX];//排序结果 
struct node_edge{
	int to;
	int next;
}; 
node_edge a[2*MAX];
void cg(int v1,int v2,int cur){
	a[cur].to=v2;
	a[cur].next=vt[v1];
	vt[v1]=cur; 
}
void pg(int v){
	for(int i=1;i<=v;i++){
		int in=vt[i];
		cout<<i<<":";
		while(in!=-1){
			node_edge e=a[in];
			cout<<e.to<<"->";
			in=e.next;
		}
		cout<<endl;
	}
}
int  main(){
	int v,e;
	memset(vt,-1,sizeof(vt));
	memset(id,0,sizeof(id));
	cin>>v>>e;
	int v1,v2;
	for(int i=1;i<=e;++i){
		cin>>v1>>v2;
		cg(v1,v2,i);
		id[v2]++;
	}
	pg(v);

	return 0;
}
