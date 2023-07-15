import React from 'react';
import {useLoaderData,NavLink,Form} from 'react-router-dom';

const Blogs = () =>{
    const blogs = useLoaderData();
    return(
        <>
          <div className='blog-container'>

             <div className='post-upload-form'>
                <Form method='post' action='postblog'>
                   <label htmlFor="title">Title</label>
                   <input className='input' type='text' name='title' placeholder='add title...' />
                   <label htmlFor="body">Body</label>
                   <input className='input' type='text' name='body' placeholder='write your blog...' />
                   <input type='submit' value="Post"/>
                </Form>
             </div>
             
             <div className='blogs'>
             {
                blogs.map(blog=>(
                    <div className='blog-card' key={blog.id}>
                       <NavLink to={`${blog.id}`}>
                            <h3>{blog.title}</h3>
                            <p>{blog.body}</p>
                       </NavLink>
                    </div>
                ))
             }
             </div>
          </div>
        </>
    );
}

export default Blogs 