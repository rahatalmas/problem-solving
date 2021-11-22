//run time error.... need better solution ..... 
//author rahat almas...
//this solution is for practice purpose only...
//i tried to make a different solution...

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    vector<int>v1={1,2,3,0,0,0};
    vector<int>v2={2,5,6};
    int m=3;
    int n=3;
    int i=0;
    int j=0;
    while(i<n){
        if(v1[i]>=v2[j]){
            int temp = v1[i];
            v1[i]=v2[j];
            v2[j]=temp;
            i++;
        }else if(v1[i]<v2[j]){
            i++;

        }
    }
    for(int k=0,j=i;k<n;k++,j++){
        v1[j]=v2[k];
    }
    for(auto x:v1){
        cout<<x<<" ";
    }
}