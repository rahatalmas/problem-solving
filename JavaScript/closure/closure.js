/*
   // Closure 
   -> Lexical Scope : defines how variable names are resolved in nested function
   -> Nested(child) Function have access to the scope of their parent function
   -> this is often confused with closure , but lexical scope is only an important 
      part of closure...
*/

//global scope
let x = 5;

const parentFunction = () =>{
    //local scope
    let myvalue = 1;
    console.log(x);
    console.log(myvalue);

    const childFunction = () =>{
        //lexical scope
        console.log(x);
        console.log(myvalue);
    }
    childFunction();
}

parentFunction();

// the avobe function is not closure ... 
// w3schools : "A closure is a function having access to the parent scope",
// even after the parent function has closed. "
// A closure is created when we define a function, not when a function is executed.
// the variable values of the parent function or global scope can change the child function 
// without calling the parent function every time .

// lets define closure function ... 

let a = 10;

function closureFunctionParent(){
    let b = 15;
    console.log(a);
    console.log(b);
    function closureFunctionChild(){
        console.log(a+b);
    }
    return closureFunctionChild;
}

let result = closureFunctionParent();

result();


// IIFE (Immediately Invoked Function Expression)

const privateCounter = (()=>{
    let count = 0;
    console.log(`initial value: ${count}`);
    return () => {count += 1; console.log(count)}
})();

// () ---> means this will calls the function into action immediately...
// so we need a extra variable to store the child function;

privateCounter();
privateCounter();

// the console.log() of private counter only happens once .
// original function that is called into action immediately only returns only time..
// and it only returns the child function to private counter one time.
// after that we call privatecounter we are actually calling the child function..

//IIEF with parameter

let life = 5;

const Game = ((life)=>{
    console.log("game start ... ");
    console.log(`initial Life : ${life}`);
    return ()=>{
        life-=1;
        if(life >= 0){
            console.log("game running...");
            console.log(`life remaining : ${life}`);
        }
        if(life<0){
            console.log("Game Over...");
        }
    }
})(life);

//(life) here life is a paremeter of IIEF function ... then game functin receiving the paremeter.

Game();
Game();
Game();
Game();
Game();
Game();

// read learn code ... 