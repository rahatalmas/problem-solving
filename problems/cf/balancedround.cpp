#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
   int t;
   cin >> t;
   while(t--){
      ll n,k;
      cin >> n >> k;
      vector<ll>v(n);
      for(int i=0;i<n;i++){
          cin >> v[i];
      }
      ll maxc = 1;
      sort(v.begin(),v.end());
      ll crntc = 1;
      for(int i=1;i<n;i++){
            if((v[i]-v[i-1]) > k){
                maxc = max(maxc,crntc);
                crntc = 1;
            }else{
                crntc++;
                //cout << crntc << endl;
            }
      }
      maxc = max(maxc,crntc);
      cout << (n-maxc) << endl;
   }
}