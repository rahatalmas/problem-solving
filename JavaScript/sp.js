let a = [1,2,3,4,5];
let b = [...a,6];
console.log(a,b);

let c = [a,b]
let d = [...c];
//console.log(d);
let e = [a,c];
console.log(e[1][0][0])

function f(){
    z=5;
    console.log(z);
}
f();

console.log(typeof(f));