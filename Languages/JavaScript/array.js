let arr = []
for(let i=1;i<11;i++){
    arr.push(i);
}
console.log(arr);
arr.push(11,12,13,14,15);
console.log(arr);
//method: 
// push(...items) -> add items at the back of an array...

arr.unshift('a','b','c');
//unshift(...items) -> add items at the beginning of an array...
console.log(arr);

console.log("last item from array :" ,arr.pop()); 
//pop() -> extracts an item from the end it aslo shows the value ...
console.log(arr);

console.log("first item of the array: " ,arr.shift()); 
//shift() -> extracts an item from the beginning . it also shows the value...
console.log(arr);

