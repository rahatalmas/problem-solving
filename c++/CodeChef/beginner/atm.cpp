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

   int w;
   float balance;
   cout<<fixed<<setprecision(2)<<endl;
   cin>>w>>balance;
   if(w%5 == 0 && (w+0.50)<=balance){
       float tc = w+0.50;
       cout<<balance-tc<<endl;
   }else{
       cout<<balance<<endl;
   }

}