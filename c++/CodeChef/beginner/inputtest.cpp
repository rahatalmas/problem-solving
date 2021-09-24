#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define l long long 
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define v vector
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define ump unordered_map


int main(){

   ll n,k;
   ll value;
   cin>>n>>k;
   ll count=0;
   while(n-->0){
       cin>>value;
       if(value%k==0){
           count++;
       }
   }
   cout<<count<<endl;
}