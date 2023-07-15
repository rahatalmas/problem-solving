import {redirect} from 'react-router-dom';
import axios from 'axios';
//import { head } from '../../../../NodePractice/routes/routes';

export const BlogPostAction = async ({request,params}) =>{
     let data = await request.formData();
     axios.post("http://localhost:8000/post",
     {
       title:data.get('title'),
       content:data.get('content')
     }
  )
  .then(result=>{
       console.log(result.data);
  })
     return redirect('/blogs');
}

/*



*/