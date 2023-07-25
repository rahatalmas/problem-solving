// Modules
/*
  -> types = "module" ?
  -> what is defer keyword ?
  -> by using modules even without typing strict mode in file it automatically appies strict mode..
  -> every file can have or every module can have one default export
*/
 
import Car from "./car";
import fly from "./bird"; // for default export 
import { owl,parrot } from "./bird"; // for export 
import {food as birdFood} from './bird'; // rename the function 
import * as birdThings from './bird'; // import all from the bird file;
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
birdThings.food() // default functions will not work
// that case birdThings.default() // it displays all the default


let r = new Audi(2,2);
r.display();
r.drive();
r.sportsMode();
r.break();

