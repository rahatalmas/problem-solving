#include<bits/stdc++.h>
using namespace std;


void print(int a,int b,int c, char pat){
         if(a<10){
            cout << 0 << a << pat;
         }else{
            cout << a << pat;
         }

         if(b<10){
            cout << 0 << b << pat;
         }else{
            cout << b << pat;
         }

         if(c<10){
            cout << 0 << c << endl;
         }else{
            cout << c << endl;
         }
}


int main(){
    int a,b,c;
    while(scanf("%d/%d/%d",&a,&b,&c) != EOF){
         print(b,a,c,'/');
         print(c,b,a,'/');
         print(a,b,c,'-');
    }
}