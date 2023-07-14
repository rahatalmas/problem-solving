import React from 'react';
import {useLoaderData} from 'react-router-dom';

const SingleBlog = () =>{

    const singleBlog = useLoaderData();
    
    return(
        <>
           <div className='single-blog-container'>
               <h1>{singleBlog.title}</h1>
               <p>{singleBlog.body}</p>              
           </div>
        </>
    );
}

export default SingleBlog;