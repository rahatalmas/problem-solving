#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{1,2,3};
    vector<int>v1{2,3,4,5};
    int a=0,b=0;
    while( (a!=3) && (b!=4) ){
        cout<<v[a]<<" ";
        cout<<" b "<<v1[b]<<" ";
        a++;
        b++;
    }
}