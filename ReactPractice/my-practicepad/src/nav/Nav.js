import React from 'react';
import { NavLink, Outlet } from 'react-router-dom';

const Nav = () =>{
    return(
        <>
          <div className='nav-container'>
             <NavLink className="nav-links" to="/">Home</NavLink>
             <NavLink className="nav-links" to="/books">Books</NavLink>
             <NavLink className="nav-links" to="/hooks">HookPractice</NavLink>
          </div>
          <Outlet/>
          <footer>
            <p>Site Map</p>
          </footer>
        </>
    );
}

export default Nav;