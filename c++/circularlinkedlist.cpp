#include<bits/stdc++.h>
using namespace std;

class Node{
   private:
     int data;
     Node * next;
   friend class circularLinkedList;
};
class circularLinkedList{
    public:
     circularLinkedList();
     ~circularLinkedList();
     bool empty();
     int front();
     int back();
     void add(int value);
     void remove();
     void printList();
    private:
     Node * cursor;
};
circularLinkedList::circularLinkedList():cursor(NULL){}
circularLinkedList::~circularLinkedList(){
    while(!empty()){
        remove();
    }
}
bool circularLinkedList::empty(){
    return cursor == NULL;
}
int circularLinkedList::front(){
    return cursor->next->data;
}
int circularLinkedList::back(){
    return cursor->data;
}
void circularLinkedList::add(int value){
    Node * new_node = new Node;
    new_node->data = value;
    if(empty()){
        new_node->next = new_node;
        cursor = new_node;
    }else{
        new_node->next = cursor->next;
        cursor->next = new_node;
    }
}
void circularLinkedList::remove(){

}
void circularLinkedList::printList(){
    Node *last = cursor;
    do{
        cout<<cursor->data<<" ";
        cursor=cursor->next;
    }while(last->next != cursor);
    cout<<endl;
}
int main(){
    circularLinkedList list;
    list.add(5);
    list.add(6);
    list.add(7);
    list.printList();
    cout<<"bye"<<endl;
    return 0;
}