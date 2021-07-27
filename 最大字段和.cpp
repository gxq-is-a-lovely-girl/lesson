#include<iostream>
using namespace std;

int n,j,sum,maxx;
int main(){         
    cin>>n>>maxx;
	sum=maxx;
    while(--n)
	{
	    cin>>j;     
		if(sum <= 0) sum = 0;   
		sum+=j;    
		if(maxx <= sum) maxx = sum;
	} 
	cout<<maxx;
    return 0; 
