#include<bits/stdc++.h>
using namespace std;
void binaryConvert(int c){
   // vector<int>v;
    int bitscount = 0;
    while(c!=0){
        //v.emplace_back(c%2);
        if(c%2==1){
            bitscount++;
        }
        c/=2;
    }
/*    reverse(v.begin(),v.end());
    for(auto x:v){
        cout<<x;
    } */
    cout<<bitscount<<endl;
}
int main(){
    int a,b;
    cin>>a>>b;
    int c = a^b;
    cout<<c<<endl;
    binaryConvert(c);
}