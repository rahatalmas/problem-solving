
const contacts = [
    {
      firstName: "Akira",
      lastName: "Laine",
      number: "0543236543",
      likes: ["Pizza", "Coding", "Brownie Points"],
    },
    {
      firstName: "Harry",
      lastName: "Potter",
      number: "0994372684",
      likes: ["Hogwarts", "Magic", "Hagrid"],
    },
    {
      firstName: "Sherlock",
      lastName: "Holmes",
      number: "0487345643",
      likes: ["Intriguing Cases", "Violin"],
    },
    {
      firstName: "Kristian",
      lastName: "Vos",
      number: "unknown",
      likes: ["JavaScript", "Gaming", "Foxes"],
    },
  ];
  
  function lookUpProfile(name, prop) {
     let contact = undefined;
     for(let i=0;i<contacts.length;i++){
       //console.log(contacts[i].firstName)
       if(contacts[i].firstName == name){
          contact = contacts[i];
          //console.log(contact.hasOwnProperty(prop));
          //console.log(contact[prop])
          if(contact.hasOwnProperty(prop)){
            console.log(contact[prop]);
            return contact[prop];
          }else{
            return "No such property";
          }
       }
     }
     return "No such contact";
  }
  
  lookUpProfile("Kristian", "lastName");
  lookUpProfile("Sherlock", "likes");
  lookUpProfile("Sherl", "likes");

  console.log(Math.random())