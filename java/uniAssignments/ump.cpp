#include<iostream>
#include<unordered_map>
#include<math.h>
using namespace std;
  
int main()
{
    // unordered map
    unordered_map<int , string> umap;
      
    // Inserting elements into the map
    umap.insert(make_pair(1,"Welcome"));
    umap.insert(make_pair(2,"to"));
    umap.insert(make_pair(3,"GeeksforGeeks"));
      
    // Check if element with key 1 is present using 
    // count() function
    if(umap.count(1))
    {
        cout<<"Element Found"<<endl;
    }
    else
    {
        cout<<"Element Not Found"<<endl;    
    }
    return 0;
}