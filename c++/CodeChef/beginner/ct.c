#include<stdio.h>
#include<stdlib.h>
struct  student
{
    char * name ;
};

int main(){
    struct student s,m;
    s.name="st";
    m=s;
    printf("%s%s",s.name,m.name);
    return 0;
}