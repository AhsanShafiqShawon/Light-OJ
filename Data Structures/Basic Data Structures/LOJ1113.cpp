//Md. Najmul Huda Hridoy

#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<string>backward;
	stack<string>forward;
	int n,bf;
	string a,c="http://www.lightoj.com/",v;
	cin>>n;
	for(int i=1;i<=n;i++){
		bf=0;
		
		backward.push(c);
	cout<<"Case "<<i<<":"<<endl;
	while(cin>>a){
		if(a=="VISIT"){
		cin>>v;
		if(bf==0){
			backward.push(v);
			cout<<backward.top()<<endl;
			while(!forward.empty())forward.pop();
			bf=0;
		}
		else if(bf==1){
			backward.push(forward.top());
			backward.push(v);
			cout<<backward.top()<<endl;
			while(!forward.empty())forward.pop();
			bf=0;
		}
	
		
	}
		else if(a[0]=='B'){
			if(backward.empty()){
				cout<<"Ignored\n";
			}
			else if(bf==1){
				cout<<backward.top()<<endl;
				bf=0;
			}
			else if(bf==0){
				forward.push(backward.top());
				backward.pop();
				if(backward.empty()){
					cout<<"Ignored\n";
					bf=1;
				}
				else{
					cout<<backward.top()<<endl;
					bf=0;
				}
				
			}
			
		}
		else if(a[0]=='F'){
			if(forward.empty()){
				cout<<"Ignored\n";
			}
			else if(bf==0){
				cout<<forward.top()<<endl;
				bf=1;
			}
			else if(bf==1){
				backward.push(forward.top());
				forward.pop();
				if(forward.empty()){
					cout<<"Ignored\n";
					bf=0;
				}
				else{
					cout<<forward.top()<<endl;
					bf=1;
				}
				
			}
			
				
		}
		else if(a=="QUIT") break;
	}
	
	while(!forward.empty())forward.pop();
	while(!backward.empty())backward.pop();	
		
	
		
	}
	return 0;
}
