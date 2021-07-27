#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=1000;
int a[maxn];//接水的人 
int b[maxn];//等待接水的时间 
int main()
{
	int n,m,i,sum=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);//接水的时间从小到大排序 
	for(i=0;i<n;i++)
	b[i]=a[i];
	for(i=m;i<n;i++)
	b[i]=b[i-m]+a[i];//每个人花费的时间=等待的时间+接水的时间 
	for(i=0;i<n;i++)
	sum+=b[i];//所有人的接水时间之和 
	cout<<sum<<endl;
	return 0;
}

