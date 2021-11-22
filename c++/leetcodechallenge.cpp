#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
        vector<int>nums1={1,2};
        vector<int>nums2={1,1};
        unordered_map<int,int>ump;
        int a = nums1.size();
        int b = nums2.size();
        vector<int>ans;
        if(a>=b){
            for(int i=0;i<a;i++){
               ump[nums1[i]]++; 
            }
            for(auto x:nums2){
                if(ump.at(x)>0){
                    ump[x]--;
                    ans.push_back(x);
                }
            }
            
        }else{
            for(auto x:nums2){
                ump[x]++;
            }
            for(auto x:nums1){
                if(ump.at(x)>0){
                    ump[x]--;
                    ans.push_back(x);
                }
            }
        }
        for(auto x:ans){
            cout<<x<<" ";
        }
    }