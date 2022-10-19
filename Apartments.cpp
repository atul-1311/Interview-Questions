#include <bits/stdc++.h>
using namespace std;

int main(){
      long long int n,m,k;
      cin>>n>>m>>k;
      
      vector<long long> appl(n);
      vector<long long> apart(m);
      
      for(long long int i=0;i<n;i++){
            cin>>appl[i];
      }
      for(long long int i=0;i<m;i++){
            cin>>apart[i];
      }
      
      sort(appl.begin(),appl.end());
      sort(apart.begin(),apart.end());
      
      long long int i=0,j=0,count=0;
      while(i<n && j<m){
            if(apart[j]>=appl[i]-k && apart[j]<=appl[i]+k){
                  count++;i++;j++;
            }else if(apart[j]<appl[i]-k){
                  j++;
            }else{
                  i++;
            }
      }
      
      cout<<count;
}
