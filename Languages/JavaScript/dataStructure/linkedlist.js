class Node{
    constructor(value){
        this.value = value;
        this.next = null;
    }
}

class LinkedList{
    constructor(){
        this._head = null;
        this._size = 0;
    }
    insertHead(value){
        let new_node = new Node(value);
        if(this._head == null){
            this._head = new_node;
            this._size++;
            return;
        }
        let temp = this._head;
        this._head = new_node;
        this._head.next = temp;
        this._size++;
        return;
    }
    insertTail(value){
        let new_node = new Node(value);
        if(this._head == null){
            this._head = new_node;
            this._size ++;
            return;
        }
        let temp = this._head;
        while(temp.next != null){
            temp = temp.next;
        }
        temp.next = new_node;
        this._size++;
        return;
    }
    updateList(pos,value){
        let temp = this._head;
        for(let i = 1;i<pos;i++){
            temp=temp.next;
        }
        temp.value = value;
        return;
    }
    deletePos(pos){
        let temp = this._head;
        for(let i=1;i<pos-1;i++){
            temp = temp.next;
        }
        temp.next = temp.next.next;
        temp = null;
        this._size--;
        return;
    }
    deleteList(){

    }
    size(){
        return this._size;
    }
    printList(){
        let temp = this._head;
        while(temp != null){
            console.log(temp.value);
            temp = temp.next;
        }
    }
}

let l = new LinkedList();
l.insertHead(6);
l.insertHead(5);
l.insertTail(7);
l.insertTail(8);
l.insertHead(4);
l.insertHead(3);
l.insertHead(2);
l.insertHead(1);
l.insertTail(9);
l.insertHead(0);
l.insertTail({name:"rahat",id:"3914"});
l.updateList(10,10);
l.updateList(10,9);
let s = l.size();
l.printList();
console.log(`size of the list is : ${s}`);

export default LinkedList;
