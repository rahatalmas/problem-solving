import React from 'react';
import { useState } from 'react';

const Form = ({loggedSetter}) =>{
    
    const [name,setName] = useState('');
    const [email,setEmail] = useState('');
    const [password,setPassword] = useState('');
    const [files,setFiles] = useState();
    const [agree,setAgree] = useState(false);
    
    const nameChanger = (e) =>{
       setName(e.target.value);
    }
    const emailChanger = (e) =>{
       setEmail(e.target.value);
    }
    const passwordChanger = (e) =>{
        setPassword(e.target.value);
    }
    const checkboxChanger = (e) =>{
        setAgree(e.target.checked);
    }
    const filechanger = (e) =>{
        setFiles(e.target.files[0]);
    }

    const formSubmitHandler = (event) =>{
            event.preventDefault();
            console.log({name,email,password,agree});
            //console.log(files)
            const formData = new FormData();
            formData.append('images',files);
            console.log(formData.get('images'));
            loggedSetter();
    }
   
    return(
        <>
          <div className='form-container'>
                <form onSubmit={formSubmitHandler}>
                    <label for="name">Your Full Name</label><br/>
                    <input type='text' name='name' value={name} placeholder='type your name...' onChange={nameChanger}/>
                    <br/>
                    <label for="email">Email</label><br/>
                    <input type='email' name='email' value={email} placeholder='your email...' onChange={emailChanger} />
                    <br/>
                    <label for="password">Password</label><br/>
                    <input type='password' name='password' value={password} placeholder='set password...' onChange={passwordChanger} />
                    <br/>
                    <label for="image">Profile Picture </label><br/>
                    <input type='file' name='image' multiple placeholder='choose photo' onChange={filechanger} />
                    <br/>
                    <label for="agree">Term and conditions</label>
                    <input type='checkbox' name='agree' onChange={checkboxChanger} />
                    <br/>
                    <input type='submit' value="submit" />
                </form>
          </div>
        </>
    );
}

export default Form;


/*



*/