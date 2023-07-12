//import './App.css';
import React from 'react';
import { useState } from 'react';
import {createBrowserRouter,RouterProvider} from 'react-router-dom';
import Form from './components/Form.js';
import ErrorPage from './components/ErrorPage.js';


function App() {

  const [logged,setLogged] = useState(false);
  const loggedSetter = () =>{
    setLogged(true);
  }
  const router = createBrowserRouter([
    {
       path:"/",
       element: logged
                  ?
                <h1>Home</h1>
                  :
                <Form loggedSetter = {loggedSetter}/> ,
       errorElement:<ErrorPage/>
    },
    {
       path:"/hooks",
       element:<h1>practice Hooks</h1>
    }
  ]);
  return <RouterProvider router={router}/>
}

export default App;
