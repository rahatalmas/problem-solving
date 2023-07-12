import React from 'react';
import { useRouteError } from "react-router-dom";

const ErrorPage = () =>{
    const error = useRouteError();
    return(
        <>
           <div>
              <h1>Sorry !!! </h1>
              <p>Page not found</p>
              <p>{error.statusText || error.message}</p>
           </div>
        </>
    );
}

export default ErrorPage;