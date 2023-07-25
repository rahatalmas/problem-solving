//json: javascript object notation
/* 
  json is used to send and receive data.
  json is a text format that is completely language independent
  Meaning json is used to send & receive data in many languages
  not just in javascript
*/
//objects don't send methods in json...

const obj ={
    name :"rahat",
    hobbies : ["football","photography","skateboarding"],
    play : (p = "football") =>{
        console.log(`i love to play ${p}`);
    }
}

console.log(obj);
console.log(obj.name);
console.log(obj.hobbies);
obj.play();
console.log(typeof obj);

const sendJsonObj = JSON.stringify(obj);
console.log(typeof sendJsonObj);
//JSON.stringify() converts an object into a json format string...
console.log(sendJsonObj);
console.log(sendJsonObj.name); // now we can't access properties..

const receiveJsonObj = JSON.parse(sendJsonObj);
//JSON.parse() makes the data again js object..
console.log(typeof receiveJsonObj);
console.log(receiveJsonObj);