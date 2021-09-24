#include<bits/stdc++.h>
using namespace std;
int n;
void buildtree(vector<int>&arr,vector<int>&tree,int tidx,int l,int r){
    if(l == r){
        tree[tidx]=arr[l];
    }else{
        int mid = (l+r)/2;
        buildtree(arr,tree,(tidx*2)+1,l,mid);
        buildtree(arr,tree,(tidx*2)+2,mid+1,r);
        tree[tidx] = tree[(tidx*2)+1]+tree[(tidx*2)+2];
    }
}

void update(vector<int>&tree,int tidx,int pos,int new_value,int l,int r){
    if(l==r){
        tree[pos]=new_value;
    }else{
        int mid = (l+r)/2;
        if(pos<=mid){
            update();
        }else{
            update();
        }
    }
}

int main(){
    cin>>n;
    vector<int>arr(n);
    vector<int>tree(4*n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    buildtree(arr,tree,0,0,n-1);
    for(auto x:tree){
        cout<<x<<" ";
    }
}