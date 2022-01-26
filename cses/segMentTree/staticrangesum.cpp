#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void buildTree(vector<ll>&v,vector<ll>&segtree,ll tidx,ll l,ll r){
    if(l == r){
        segtree[tidx] = v[l];
        return;
    }
    ll mid = (l+r)/2;
    buildTree(v,segtree,2*tidx+1,l,mid);
    buildTree(v,segtree,2*tidx+2,mid+1,r);
    segtree[tidx] = segtree[2*tidx+1] + segtree[2*tidx+2];
}

ll rangeSum(vector<ll>&segtree,ll tidx,ll tl,ll tr,ll l,ll r){
    if(l > tr || r <tl){
        return 0;
    }
    if(l<=tl && r>=tr){
        return segtree[tidx];
    }
    ll mid = (tl+tr)/2;
    return rangeSum(segtree,2*tidx+1,tl,mid,l,r)+rangeSum(segtree,2*tidx+2,mid+1,tr,l,r);
}

int main(){
   ll n,q;
   cin>>n>>q;
   vector<ll>v(n);
   for(int i=0;i<n;i++){
       cin>>v[i];
   }
   vector<ll>segtree(4*n);
   buildTree(v,segtree,0,0,n-1);;
   while(q--){
       ll a,b;
       cin>>a>>b;
       cout<<rangeSum(segtree,0,0,n-1,a-1,b-1)<<endl;
   }
}