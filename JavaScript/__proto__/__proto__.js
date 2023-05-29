//javascript prototypes...
//prototypal inheritance and the prototype chain
//-> es6 introduced classes which is the modern way to construct objects
// That said, prototypal inheritance and the prototype chain are:
//   -> "under the hood", (es6 classes are considered "syntactic sugar")
//   -> often in interview question
//   -> and are useful to understand.

// object literals
const person = {
    alive: true
}

const musician = {
    plays : true
}

console.log(person.alive) // outputs true
console.log(musician.alive) // outputs undefined

musician.__proto__ = person;

console.log(person.alive) //output true
console.log(musician.alive) //output true

// musician.__proto__ = person 
// this is inhertance. Now musician is inherited from person. 
// person is the parent class of musician or the proto of musician


// js now has getPrototypeOf and setPrototypeOf methods instead of using 
// __proto__ 

Object.getPrototypeOf(musician,person); //setting prototype
console.log(Object.getPrototypeOf(musician)); 
console.log(musician.__proto__);
console.log(Object.getPrototypeOf(musician) == musician.__proto__) // this proves previous two ways does the same thing.

//  Extending the prototype chain => general to specific to more specific

const guitar ={
    strings: 6,
    __proto__: musician
}

