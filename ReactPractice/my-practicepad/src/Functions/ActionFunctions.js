import {redirect} from 'react-router-dom';
import axios from 'axios';

export const BlogPostAction = async ({request,params}) =>{
     let data = await request.formData();
     console.log(typeof(data.JSON()));
     axios.post("http://localhost:8000/post",JSON.stringify(data))
     .then(result=>{
          console.log(result.data);
     })
     return redirect('/blogs');
}