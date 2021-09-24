#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int n,m;
		cin>>s;
		cin>>n>>m;
		for(int i=n;i<m-1;i++){
            for(int j=n+1;j<m;j++){
                if(s[i]<s[j]){
                    swap(s[i],s[j]);
                }
            }
        }
		cout<<s<<endl;
	}
}