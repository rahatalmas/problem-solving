import React from 'react';
import { NavLink, Outlet } from 'react-router-dom';
import '../cssFiles/Nav.css'
const Nav = () =>{
    return(
        <>
            <section className='nav-container'>
                <NavLink className="nav-links" to="/">Home</NavLink>
                <NavLink className="nav-links" to="/blogs">Blogs</NavLink>
                <NavLink className="nav-links" to="/hooks">HookPractice</NavLink>
            </section>
            <section className='outlet-section'>
                <Outlet/>
            </section>
            <footer className='site-map'>
                <p>Site Map</p>
            </footer>
        </>
    );
}

export default Nav;