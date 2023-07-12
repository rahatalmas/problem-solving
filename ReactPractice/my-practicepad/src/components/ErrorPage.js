import React from 'react';
import { useRouteError } from "react-router-dom";
import Nav from '../nav/Nav';
const ErrorPage = () =>{
    const error = useRouteError();
    return(
        <>
           <div>
              <h1>Sorry !!! </h1>
              <p>{error.statusText || error.message}</p>
              <p>CheckOut Routes</p>
              <Nav/>
           </div>
        </>
    );
}

export default ErrorPage;