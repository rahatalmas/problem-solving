import React from 'react';
import {useLoaderData} from 'react-router-dom';

const Home = () =>{

    const blogs = useLoaderData();

    return(
        <>
           <div className='home-container'>
              { typeof(blogs)  !== "string" ?
                blogs.slice(1,10).map(todo=>(
                    <div key={todo.id}>
                        <h3>{todo.title}</h3>
                        <p>{todo.body}</p>
                    </div>
                ))
                :
                <h1>Sorry Data {blogs}</h1>
              }
           </div>
        </>
    );
}

export default Home;