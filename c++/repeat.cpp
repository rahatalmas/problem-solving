#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
        string s;
        cin>>s;
        ll crnt=1;
        ll result=1;
        for(int i=1;i<s.size();){
           while(s[i]==s[i-1]){
               crnt++;
               i++;
           }
           i++;
           result=max(result,crnt);
           crnt=1;
        }
        cout<<result<<endl;
}