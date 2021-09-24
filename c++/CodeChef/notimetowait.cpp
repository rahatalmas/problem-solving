#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 int n,h,x;
 cin>>n>>h>>x;
 bool flag = false;
 ll time;
 for(int i=0;i<n;i++){
  cin>>time;
  if(time+x==h){
   flag=true;
  } 
 }
 if(flag == false){
  cout<<"NO"<<endl;
 }else{
  cout<<"YES"<<endl;
 }
}
