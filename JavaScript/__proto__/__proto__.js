//javascript prototypes...
//prototypal inheritance and the prototype chain
//-> es6 introduced classes which is the modern way to construct objects
// That said, prototypal inheritance and the prototype chain are:
//   -> "under the hood", (es6 classes are considered "syntactic sugar")
//   -> often in interview question
//   -> and are useful to understand.

// rules :
// No circular references allowed 
// The __proto__ value must be an object or null.
// An object can only directly inherit from one object


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

Object.setPrototypeOf(musician,person); //setting prototype
console.log(Object.getPrototypeOf(musician)); 
console.log(musician.__proto__);
console.log(Object.getPrototypeOf(musician) == musician.__proto__) // this proves previous two ways does the same thing.

//  Extending the prototype chain => general to specific to more specific

const guitar ={
    strings: 6,
    __proto__: musician
}

// object getter and setter methods

const car = {
    doors:2,
    seats:"vinyl",
    get seatMaterial(){
        return this.seats;
    },
    set seatMaterial(material){
        this.seats = material;
    }
}

let luxuryCar = {};
Object.setPrototypeOf(luxuryCar,car);
luxuryCar.seatMaterial = "leather";
console.log(luxuryCar);
console.log(luxuryCar.seats)

console.log(luxuryCar.__proto__);
console.log(Object.getPrototypeOf(luxuryCar))

//walking up the cahin - props and methods are not copied;
console.log("value of :")
console.log(luxuryCar.valueOf());
// value of is inheritted from the defult object ;

// getting the keys of an object
console.log(Object.keys(luxuryCar));
//loop through each object key
Object.keys(luxuryCar).forEach(key=>{
    console.log(key);
})

for(let key in luxuryCar){
    console.log(key);
}


