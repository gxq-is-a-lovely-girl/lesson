#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=1000;
int a[maxn];//��ˮ���� 
int b[maxn];//�ȴ���ˮ��ʱ�� 
int main()
{
	int n,m,i,sum=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);//��ˮ��ʱ���С�������� 
	for(i=0;i<n;i++)
	b[i]=a[i];
	for(i=m;i<n;i++)
	b[i]=b[i-m]+a[i];//ÿ���˻��ѵ�ʱ��=�ȴ���ʱ��+��ˮ��ʱ�� 
	for(i=0;i<n;i++)
	sum+=b[i];//�����˵Ľ�ˮʱ��֮�� 
	cout<<sum<<endl;
	return 0;
}

