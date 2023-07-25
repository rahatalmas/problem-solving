#include<bits/stdc++.h>
using namespace std;

int main(){
    bool flag = true;
    while(flag){
        int n,m;
        cin >> n >> m;
        if(n == 0 and m == 0){
            flag = false;
        }else{
            unordered_map<int,int>ump;
            for(int i=0;i<m;i++){
                int inp;
                cin >> inp;
                ump[inp]++;
            }
            int counter = 0;
            for(auto x:ump){
                if(x.second > 1){
                    counter++;
                }
            }
            cout << counter << endl;
        }
    }
}