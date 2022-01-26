#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

ll minvalue(ll a,ll b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}

void buildTree(vector<ll>&v,vector<ll>&segTree,ll tidx,ll l,ll r){
    if(l==r){
        segTree[tidx] = v[l];
        return;
    }
    ll mid = (l+r)/2;
    buildTree(v,segTree,2*tidx+1,l,mid);
    buildTree(v,segTree,2*tidx+2,mid+1,r);
    segTree[tidx] = minvalue(segTree[2*tidx+1], segTree[2*tidx+2]);
}

ll rangeMin(vector<ll>&segTree,ll tidx,ll tl,ll tr,ll l,ll r){
    if(l>tr || r<tl){
        return INT_MAX;
    }
    if(l<=tl && r>=tr){
        return segTree[tidx];
    }
    ll mid = (tl+tr)/2;
    return minvalue(rangeMin(segTree,2*tidx+1,tl,mid,l,r),rangeMin(segTree,2*tidx+2,mid+1,tr,l,r));
}

int main(){
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n);
    vector<ll>segTree(4*n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    buildTree(v,segTree,0,0,n-1);
    while(q--){
        ll a,b;
        cin>>a>>b;
        cout<<rangeMin(segTree,0,0,n-1,a-1,b-1)<<endl;
    }
}