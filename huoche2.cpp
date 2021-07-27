#include<iostream>
#include<stack>
using namespace std;
#define max 30
int main(){
	int n;
	int a_move[max];
	cin>>n;
	int  a_out[n],a_in[n];
	for(int i=0;i<n;i++){
		cin>>a_in[i];
	}
	for(int i=0;i<n;i++){
		cin>>a_out[i];
	}
		int in=0,out=0,move=0,finish=1; 
		stack<int>stk;
		while(out<n){
			if(a_in[in]==a_out[out]){
				a_move[move++]=1;
				a_move[move++]=0;
				in++;
				out++;
			}
			else if(!stk.empty()&&stk.top()==a_out[out]){
				a_move[move++]=0;
				stk.pop();
				out++; 
			}
			else if(in<n){
				stk.push(a_in[in]);
				a_move[move++]=1;
				in++;
			}
			else{
				finish=0;
				break;
			}
		}
		if(finish){
			cout<<"YES"<<endl;
			for(int i=0;i<move;i++){
				if(a_move[i]){
					cout<<"in"<<endl;
				}else{
					cout<<"out"<<endl;
				}
				
			}
			cout<<"FINISH"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	return 0;
	}
	 
