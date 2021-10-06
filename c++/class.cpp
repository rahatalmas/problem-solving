#include<bits/stdc++.h>
using namespace std;
class Counter{
    public:
      Counter(){
        count=0;
      }
      int getCount(){
        return count;
      }
      void incrementCount(int x){
        count+=x;
      }
    private:
      int count; 
};

int main(){
    Counter c;
    cout<<c.getCount()<<endl;
    c.incrementCount(5);
    cout<<c.getCount()<<endl;
}