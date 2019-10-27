//Md. Najmul Huda Hridoy

#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n,s,h,num;
	string st;
	cin>>n;
	for(int i=1;i<=n;i++){
		deque<int>dq;
		cin>>s>>h;
		cout<<"Case "<<i<<":"<<endl;
		
		for(int j=0;j<h;j++){
			cin>>st;
			if(st=="pushLeft"){
				cin>>num;
				if(dq.size()>=s){
					cout<<"The queue is full"<<endl;
				}
				else{
					
					dq.push_front(num);
					cout<<"Pushed in left: "<<num<<endl;
				}
			}
			else if(st=="pushRight"){
				cin>>num;
				if(dq.size()>=s){
					cout<<"The queue is full"<<endl;
				}
				else{
					
					dq.push_back(num);
					cout<<"Pushed in right: "<<num<<endl;
				}
			}
			else if(st=="popLeft"){
				if(dq.empty()){
					cout<<"The queue is empty"<<endl;
				}
				else{
					cout<<"Popped from left: "<<dq.front()<<endl;
					dq.pop_front();
				}
			}
			else if(st=="popRight"){
				if(dq.empty()){
					cout<<"The queue is empty"<<endl;
				}
				else{
					cout<<"Popped from right: "<<dq[dq.size()-1]<<endl;
					dq.pop_back();
				}
			}
		}
		dq.clear();
	}
	return 0;
}
