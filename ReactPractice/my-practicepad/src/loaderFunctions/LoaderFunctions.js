export const BlogLoader = async (req) =>{
   try{
      const data = await fetch("https://jsonplaceholder.typicode.com/posts",
      );
      const blogs = await data.json();
      console.log(blogs);
      return blogs;
   }
   catch(err){
      return err.message;
   }
}