//Md. Najmul Huda Hridoy

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,n,m;
    cin>>T;
    for(int k=1;k<=T;k++){
            
            cin>>n>>m;
    
        vector<int>m_seat[n+1];
        int ride[m+1];
        list<int>mem;
        list<int>::iterator it;
        memset(ride,0,sizeof(ride));
      
      for(int i=1;i<=n;i++){
        mem.push_back(i);
      }
      
      int seat=0,f,cnt=0,c,f2,r=0;
      
      
      while(1){
        ++seat;
        ++cnt;
        f2=0;
        
        if(ride[seat]!=0){
           	mem.push_back(ride[seat]);
           	ride[seat]=0;
           	r--;
				}
        
        
        
        
        for(it=mem.begin();it!=mem.end();it++){
        	f=0;
        	for(int l=0;l<m_seat[*it].size();l++){
                if(seat==m_seat[*it][l]){
                	f=1;
                	break;
				}
            }
            if(f==0&&m_seat[*it].size()<m){
            	c=(*it);
            	f2=1;
            	
            	break;
			}
		}
            
           
            	
            	
				
				if(f2==1){
				m_seat[c].push_back(seat);
            	ride[seat]=c;
            	r++;
            	mem.remove(c);	
				}
				
				
				
            	
			
            
		
        
        if(m_seat[n].size()==m&&r==0){
        	break;
		}
        
        
        if(seat==m){
            seat=0;
        }
      }
	  cout<<"Case "<<k<<": "<<(cnt*5)<<endl;  
        
    }
    return 0;
}
