#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   std::cin>>n;
   std::vector<int>v(n);
   for(int i=0;i<n;i++){
       std::cin>>v[i];
   }
   int val;
   cin>>val;
   auto lower = lower_bound(v.begin(),v.end(),val);
   auto upper  = upper_bound(v.begin(),v.end(),val);
   cout<<*lower<<endl;
   cout<<*upper<<endl;
}