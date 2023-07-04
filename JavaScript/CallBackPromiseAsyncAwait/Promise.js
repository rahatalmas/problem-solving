let f = async () =>{
    let p = new Promise((resolve,reject)=>{
        let flag = true;
        if(flag){
          resolve("Work Done ...");
        }
        reject("Sorry soilders i failed ...");
    })
    let d = await p;
    return d;
}
console.log(f())