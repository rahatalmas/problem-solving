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


// method : splice(start[,deleteCount, elem1, ..., elemN])
// it modifies arr from the index start, removes deleteCount elements and then also it can insert 
// elem1, ... , elemN elements at their place. It also returns the array of removed elements..
let s = arr.splice(0,5);
console.log("splice Array : ", s);
console.log("array: ",arr);
arr.splice(0,1,'apple');
console.log(arr);
//splice() method can also add elements without removing elements..
//for this case we need to set deleteCount = 0;
arr.splice(1,0,"black-berry");
console.log("array",arr);
//negative indexing is also allowed .. -1 means second last element...
console.log("negative indexing: ")
console.log(arr.splice(-1,1));
console.log("array:",arr);
arr.splice(-5,0,"google","netflix");
console.log("array",arr);


//slice([start],[end]) -> it copies elements from an array start to end-1 index
//negative indexing is also allowed
//if we don't set end index the rest elements will copy from start index;
//if we don't set start index and also end index the rest of the elements will get copied..
let subArray = arr.slice(0,6);
let subArray2 = arr.slice(5);
console.log("without start and end slice():",arr.slice());
console.log("subArray:",subArray);
console.log("subArray2",subArray2);
console.log("SubArray from end:", subArray.slice(-5));
console.log("subArray negative indexing:",arr.slice(-5,-1));

// iterations:
//forEach(fn(element,index,arr))
console.log("\nusing forEach() method:\n");
arr.forEach((element,index,arr)=>{
    console.log(element);
})

//map(fn(element,index,array))
console.log("\n using map() method:\n")
arr.map((element,index,arr)=>{
    console.log(`index:${index} -> Element: ${element}`);
})

