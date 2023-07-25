export default function fly(){ // for inline default export we need to use function like this..
   console.log("birds can fly");
}

export let wings = ()=>{
   console.log("birds have wings");   
}

const owl = () =>{
    console.log("owl flies withou making sound");
}

var food = () =>{
    console.log("lets feed birds");
}

const parrot =  () =>{
    console.log("parrots are beautiful");
}
//export default owl; // a module can't have multiple default export;
export {food,parrot,owl};