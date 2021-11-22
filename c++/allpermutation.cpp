#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

bool should_swap(String str,int start,int curr){
    
}

void permutation(string str,int l){
    //set<int>s;
    int r = str.length();
    if(l==r){
       // s.insert(stoi(str));
        cout<<str<<endl;
    }
    for(int i=l;i<r;i++){
        swap(str[i],str[l]);
        permutation(str,l+1);
        swap(str[i],str[l]);
    }
    /*for(auto x:s){
        cout<<x<<" ";
    } */
}
int main(){
    string str;
    cin>>str;
    permutation(str,0);
    cout<<endl;
}