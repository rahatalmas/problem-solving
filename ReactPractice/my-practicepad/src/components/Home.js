import React from 'react';
import {useLoaderData} from 'react-router-dom';

const Home = () =>{

    const todos = useLoaderData();

    return(
        <>
           <div className='home-container'>
              {
                todos.map(todo=>(
                    <div key={todo.id}>
                       <p>ID: {todo.id}</p>
                       <p>Title: {todo.title}</p>
                       <p>Status: {todo.completed?"yes":"no"}</p>
                    </div>
                ))
              }
           </div>
        </>
    );
}

export default Home;