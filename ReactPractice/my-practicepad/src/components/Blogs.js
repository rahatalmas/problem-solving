import React from 'react';
import {useLoaderData,NavLink} from 'react-router-dom';

const Blogs = () =>{
    const blogs = useLoaderData();
    return(
        <>
          <div className='blog-container'>
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
        </>
    );
}

export default Blogs 