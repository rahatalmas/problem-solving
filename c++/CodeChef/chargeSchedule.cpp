#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 ll t;
 cin>>t;
 while(t--){
   ll n;
   cin>>n;
   vector<ll>chargeTime(n);
   vector<ll>travelTime(n);
   vector<ll>person;
   ll maxtime=0;
   ll totalChargeTime=0;
   unordered_map<ll,pair<ll,ll>>ump;
   for(int i=0;i<n;i++){
     cin>>chargeTime[i];
   }
   for(ll i=0;i<n;i++){
     cin>>travelTime[i];
     if(chargeTime[i]<=travelTime[i]){
       totalChargeTime+=chargeTime[i];
       maxtime=max(maxtime,travelTime[i]);
       ump.insert({i,{chargeTime[i],travelTime[i]}});
     }
   }
   for(auto i:ump){
     // cout<<ump[i].first<<" "<<ump[i].second<<endl;
     person.push_back(i.first);
   }
   if(maxtime>=totalChargeTime){
     ll start =0;
     ll end = ump[person[0]].first;
     for(ll i=0;i<person.size();i++){
       cout<<person[i]+1<<" "<<start<<" "<<end<<endl;
       start=end;
       end+=ump[person[i+1]].first;
     }
   }else{
     cout<<"under construction"<<endl;
   }
   //cout<<maxtime<<" "<<totalChargeTime<<endl;

 }
}
