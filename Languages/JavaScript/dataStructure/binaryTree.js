class Node{
    constructor(value){
        this.value = value;
        this.left = null;
        this.right = null;
    }
}
class binaryTree{
    root = null; 
    /*constructor(){
       this.root = null;
    }*/
    pushNodeEngine(root,value){
        let new_node = new Node(value);
        if(this.root === null){
            this.root = new_node;
            return;
        }
        if(this.root.left == null){
            this.root.left = new_node;
            return;
        }else{
            
        }
        if(this.root.right == null){
            this.root.right = new_node;
            return;
        }else{
           
        }
    }
    pushNode(value){
        this.pushNodeEngine(this.root,value);
    }
}

a = new binaryTree();
a.pushNode(5);
a.pushNode(6);

//a.left = new Node(6);
//a.right = new Node(7);
//a.left.left = new Node(8);
//a.left.right = new Node(9);
console.log(a);