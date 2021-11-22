#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

void longestsubarrysum(vector<ll>&v, ll n){
    int start=0;
    int end = 0;
    int curr=0;
    int maxsofar = INT_MIN;
    int currentsum = 0;
    for(int i=0;i<n;i++){
        currentsum+=v[i];
        if(currentsum>maxsofar){
            maxsofar = currentsum;
            start = curr;
            end = i;
        }
        if(currentsum < 0){
            currentsum = 0;
            curr+=1;
        }
    }
    cout<<"sum = "<<maxsofar<<endl;
    cout<<"start index = " <<start<<endl;
    cout<<"end index = " << end<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        longestsubarrysum(v,n);
    }
}