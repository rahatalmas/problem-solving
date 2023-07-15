import {redirect} from 'react-router-dom';
export const BlogPostAction = async ({request,params}) =>{
     let data = await request.formData();
     console.log(data.get('content'));
     fetch();
     return redirect('/blogs');
}