import {add,sub,prod,div} from './mathfunction.js';
//or
// import * as mathModule from './***** */
// for using :
// mathModule.functionName() 
import LinkedList from '../dataStructure/linkedlist.js';

let l = new LinkedList();

let container = document.getElementById("container");
let input = document.getElementById("input");
let btn = document.getElementById("btn");
let value = input.value;
l.insertHead({name:"rahat almas",id:"3914"})

container.innerHTML = `value is ${l._head.value.name} , list size is ${l._size}`;
