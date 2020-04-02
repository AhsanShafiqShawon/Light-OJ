//Md. Najmul Huda Hridoy

#include<bits/stdc++.h>
using namespace std;

void permutation(char *array,int index,char *pos,int n,bool *data,int c,int b,int *sum){
	
	if(index==n){
		for(int j=0;j<n;j++){
			cout<<pos[j];
		}
		cout<<endl;
		sum[0]++;
		return;
	}
	if(sum[0]>=b){
		return;
	}
	for(int i=0;i<n;i++){
		if(data[i]==false){
			data[i]=true;
			pos[index]=array[i];
			permutation(array,index+1,pos,n,data,c,b,sum);
			data[i]=false;
		}
	}
	
}

int main(){
	int T;
	cin>>T;
	for(int k=1;k<=T;k++){
		int a,b,sum[1]={0};
	cin>>a>>b;
	char array[a],pos[a];
	bool data[a];
	for(int i=0,j=65;i<a;i++,j++){
		array[i]=j;
	}
	
	memset(data,false,sizeof(data));
	cout<<"Case "<<k<<":"<<endl;
	permutation(array,0,pos,a,data,0,b,sum);
	}
	
}
