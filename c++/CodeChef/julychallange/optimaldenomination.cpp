#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define push_back pb
#define emplace_back eb

int main(){
    ll t;
    std::cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        bool flag1 = false;
        bool flag2=false;
        ll s=v[1];
        ll f=v[0];
        ll sum=0;
        for(ll i=2;i<n;i++){
             if(v[i]%s != 0){
                flag1=true;
             }
        }
        if(flag1 == false){
           for(ll i=1;i<n;i++){
               sum+=v[i]/s;
           }
           sum+=1;
        }
        else if(flag1 == true){
            for(ll i=2;i<n;i++){
                if(v[i]%f!=0){
                    flag2=true;
                }
            }
            if(f == 1){
              for(ll i=0;i<n-1;i++){
                sum+=v[i]/f;
              }
             sum+=1;
            }
            else if(flag2 == false && f!=1){
                for(ll i=2;i<n;i++){
                    sum+=v[i]/f;
                }
                sum+=2;
            }
            else{
                v[n-1]=f;
                for(ll i=0;i<n;i++){
                   sum+=v[i]/1;
                }
            }

        }
        cout<<sum<<endl;
    }

}