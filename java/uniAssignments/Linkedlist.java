//package java.uniAssignments;

public class Linkedlist {
    static class Node{
      int data;
      Node next;
    }
    Node head;
    public Linkedlist(){
        head = null;
    }
    public void add(int value){
        Node new_node = new Node();
        new_node.data = value;
        new_node.next = head;
        head = new_node;
    }
    public void printlist(){
        while(head != null){
            System.out.print(head.data+" ");
            head = head.next;
        }
        System.out.print("\n");
    }
    public static void main(String[] args){
        Linkedlist list = new Linkedlist();
        list.add(4);
        list.add(5);
        list.add(6);
        list.printlist();
        System.out.println("hello");

    }
}
