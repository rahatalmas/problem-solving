// js error and erro handling 
"use strict";
// w3school: Defines that JavaScript Code should be executed in "strict mode".
// for example in "strict mode" we can't use undeclared variables;
//declared inside a function, it has local scope( only the code inside the function is in strict mode):

//x = 3.1416; // this will not cause an error
function f(){
   "use strict";
    //y = 3; //this wil cause an error
    //console.log(y);
}
//f();

const arr = [1,2,3,5,6,7,9];
function func(){
    try{
        const name = "rahat";
        name = "almas";
        console.log(name)
    }catch(err){
       console.error(err.message);
    }
}
//func();

function func2(){
    for(let i=0;i<arr.length;i++){
        try{
            if(arr[i] %2 == 0){
                throw new Error("even number");
            }
        }catch(err){
            console.log(err.message);
        }finally{
            console.log("finally");
        }
    }
}
func2();

// the catch block executes if there is any error in try block
// the finally block exectues every time ...

// throw : using the keyword throw we can make our custom error message
// we can also make custom error objects ..

// questions to find out : 
// Types of errors in javascript ?
// What are try catch throw and finally ?
// all methods of console object in javascript ?
// What the properties of error object ?
// how to make custom error and throw ?
// Error object ? 