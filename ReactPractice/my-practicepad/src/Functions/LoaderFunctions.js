export const BlogLoader = async () =>{
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


export const SingleBlogLoader = async ({request,params}) =>{
   try{
      const data = await fetch(`https://jsonplaceholder.typicode.com/posts/${params.blogId}`)
      const singleBlog = await data.json();
      return singleBlog;
   }catch(err){
      return err.message;
   }
}

