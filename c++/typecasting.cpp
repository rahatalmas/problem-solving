#include<bits/stdc++.h>
using namespace std;
inline double greatervalue(double &a,double &b){return a>b?a:b;}
int main(){
  int a;
  int b;
  cin>>a>>b;
  double x = static_cast<double>(a);
  double y = static_cast<double>(b);
  cout<<greatervalue(x,y)<<endl;
}
