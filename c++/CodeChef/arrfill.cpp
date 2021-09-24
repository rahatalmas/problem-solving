#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
bool secondItemSort(pair<ll,ll>a,pair<ll,ll>b){
    if(a.first != b.first){
        return a.first>b.first;
    }else{
        return a.second>b.second;
    }
}
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        //vector<pair<ll,ll>>sumArr(m);
        vector<pair<ll,ll>>qpair(m);
        //unordered_map<ll,ll>ump(m);
        ll a,b;
        for(ll i=0;i<m;i++){
            cin>>a>>b;
            qpair[i]={a,b};
            //ump[b]=a;
        }
        /*for(int i=0;i<m;i++){
            ll sum = (n-(n/pair[i].second))*pair[i].first;
            sumArr[i]={pair[i].second,sum};
        }*/
        sort(qpair.begin(),qpair.end(),secondItemSort);
        ll answer=0;
        ll tempN=n;
        ll temp=1;
        for(int i=0;i<m && n>0;i++){
           ll x = qpair[i].first;
           ll y = qpair[i].second;
           //cout<<x<<" "<<y<<endl;
           temp = (temp*y)/__gcd(temp,y);
           //cout<<temp<<endl;
           answer+=x*(n-tempN/temp);
           n=tempN/temp;
        }
        cout<<answer<<endl;
    }
}