class Node{
    constructor(value){
        this.value = value;
        this.next =null;
    }
}

class LinkedList{
    constructor(){
        this.head = null;
    }
    insertHead(value){
        let new_node = new Node(value);
        if(this.head == null){
            this.head = new_node;
            return;
        }
        let temp = this.head;
        this.head = new_node;
        new_node.next = temp;
        return;
    }
    insertTail(value){
        let new_node = new Node(value);
        if(this.head = null){
            this.head = new_node;
            return;

        }
        let temp = this.head;
        while(temp != null){
            temp = temp.next;
        }
        temp.next = new_node;
        return;
    }
}

let l = new LinkedList();
l.insertHead(45);