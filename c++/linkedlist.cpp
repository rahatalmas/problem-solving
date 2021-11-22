#include<bits/stdc++.h>
using namespace std;

class Node{
  private:
    int elem;
    Node * next ;
   
  friend class LinkedList;
};

class LinkedList{
  public:
    LinkedList();
    ~LinkedList();
    bool empty() const;
    const int front() const;
    void push_front(int value);
    void push_back(int value);
    void remove_front();
    //void remove_back();
    void print_list();
  private:
    Node * head;
};

LinkedList::LinkedList():head(NULL){}

LinkedList::~LinkedList(){
    while(!empty()){
       remove_front();
    }
}
bool LinkedList::empty() const {
    return head == NULL;
}

const int LinkedList::front() const{
    return head->elem;
}

void LinkedList::push_front(int value){
    Node * new_node = new Node;
    new_node->elem = value;
    new_node->next = head;
    head = new_node;
}

void LinkedList::remove_front(){
    Node * old = head;
    head = old -> next;
    delete old;
}

void LinkedList::push_back(int value){
    Node * new_node = new Node;
    new_node -> elem = value;
    new_node -> next = NULL;
    Node * temp = head;
    while(temp->next != NULL){
      temp = temp -> next;
    }
    temp -> next = new_node;
}

void LinkedList::print_list(){
    while(head != NULL){
      cout<<head->elem<<" ";
      head = head->next;
    }
    cout<<endl;
}

int main(){
    cout<<"<- LinkedList ->"<<endl;
    LinkedList list ;
    list.push_front(5);
    list.push_back(10);
    list.print_list();
}