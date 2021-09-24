#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
 int t;
 cin>>t;
 while(t--){
   int n,m,x;
   cin>>n>>m>>x;
   ll dist;
   vector<int>person;
   vector<pair<int,int>>qualify;
   for(int i=0;i<n;i++){
      cin>>dist;
      qualify.push_back({dist,i+1});
   }
   sort(qualify.rbegin(),qualify.rend());
   for(int i=0;i<qualify.size();i++){
     if(qualify[i].first>=m || person.size()<x){
        person.push_back(qualify[i].second);
     }
   }
   sort(person.begin(),person.end());
   cout<<person.size()<<" ";
   for(auto i:person){
     cout<<i<<" ";
   }
   cout<<endl;
 } 
}
