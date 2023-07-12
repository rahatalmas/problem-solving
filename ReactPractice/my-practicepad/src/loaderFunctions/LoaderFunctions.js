export const TodoLoader = async () =>{
   try{
      const data = await fetch("https://jsonplaceholder.typicode.com/todos");
      const todos = await data.json();
      console.log(todos)
      return todos;
   }
   catch(err){
      return err.message;
   }
   //return todos;
}