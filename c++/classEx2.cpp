#include<bits/stdc++.h>
using namespace std;
class person {
    public:
      int salary;
      int id;
      person(int  n, int d){
          salary=n;
          id =d;
      }
};

class student : public person{
    public: 
     int section ;
     student(int sa,int i, int sec):person(sa,i),section(sec){ }
     ~student(){
         cout<<"destructor is called"<<endl;
     }
};

int main(){
    student * s = new student(100000,203153914,2);
    cout<<s->salary<<" "<<s->id<<" "<<s->section<<endl; 
    delete s;
}