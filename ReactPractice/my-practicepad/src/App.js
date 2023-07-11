//import './App.css';
import React from 'react';
import {createBrowserRouter,RouterProvider} from 'react-router-dom';
import Form from './components/Form';

const router = createBrowserRouter([
  {
     path:"/",
     element:<Form/>
  }
])

function App() {
  return <RouterProvider router={router}/>
}

export default App;