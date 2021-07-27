#include<iostream>
#include<algorithm>

using namespace std;
struct hd{
	int s;
	int e;
};
bool tmp(hd a,hd b){
	return a.e<b.e;
}
int main(){
	int n;
	cin>>n;
	hd p[n];
    for(int i=0;i<n;i++){
    	cin>>p[i].s>>p[i].e;
	}
	sort(p,p+n,tmp);
	int num=n,k=0;
	for(int i=1;i<n;i++){
		if(p[i].s<=p[k].e){
			num--;
		}else{
			k=i;
		}
	}
	cout<<num;
}
