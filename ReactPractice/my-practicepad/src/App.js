//import './App.css';
import React from 'react';
import { useState } from 'react';
import {createBrowserRouter,RouterProvider} from 'react-router-dom';
import Nav from './nav/Nav.js';
import Form from './components/Form.js';
import Home from './components/Home.js';
import ErrorPage from './components/ErrorPage.js';
import {TodoLoader} from './loaderFunctions/LoaderFunctions.js';

function App() {

  const [logged,setLogged] = useState(localStorage.getItem("logged" || false));
  const loggedSetter = () =>{
    localStorage.setItem("logged",true);
    setLogged(true);
  }

  const router = createBrowserRouter([
    {
       path:"/",
       element:<Nav/>,
       errorElement:<ErrorPage/>,
       children:[
          {
            path:"/",
            element:logged?<Home/>:<Form loggedSetter={loggedSetter}/>,
            loader:TodoLoader,
          },
          {
            path:"/books",
            element:<h1>Books Lists</h1>
          },
          {
            path:"/hooks",
            element:<h1>practice Hooks</h1>
          }
       ]
    }
  ]);

  return<RouterProvider router={router}/>
}

export default App;
