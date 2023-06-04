// Modules
/*
  -> types = "module" ?
  -> what is defer keyword ?
  -> by using modules even without typing strict mode in file it automatically appies strict mode..
  -> every file can have or every module can have one default export
*/
 
import Car from "./car";
import fly from "./bird";
import { owl,parrot,food } from "./bird";

//const Car = require('./car.js')
class Audi extends Car{
  constructor(...args){
      super(...args)
  }
  sportsMode(){
      console.log("ready to race...");
  }
}
owl();
let r = new Audi(2,2);
r.display();
r.drive();
r.sportsMode();
r.break();

