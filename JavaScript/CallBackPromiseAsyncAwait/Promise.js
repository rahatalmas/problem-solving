
    let p = new Promise((resolve,reject)=>{
        let flag = true;
        if(flag){
          resolve("Work Done, planet earth is now all yours ...");
        }
        reject("Sorry soilders i failed ...");
    })

    p.then(res=>{
      console.log(res);
    })
    p.catch(err=>{
      console.log(err);
    })