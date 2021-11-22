#include<bits/stdc++.h>
using namespace std;

#define ll long long int 


void dsu(vector<int>&v,vector<int>&parent,vector<int>&rank,vector<int>&size,int n){
    for(auto x:v){
       make_set(parent);
    }
    union_set(a,b,rank);
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>parent(n);
    vector<int>rank(n);
    vector<int>size(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    dsu(v,parent,rank,size,n);