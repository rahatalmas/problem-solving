import React from 'react';

const Form = () =>{
    return(
        <>
          <div className='form-container'>
             <form>
                <label for="name">Your Full Name</label><br/>
                <input type='text' name='name' value='' placeholder='type your name' />
                <br/>
                <label for="email">Email</label><br/>
                <input type='email' name='email' value='' placeholder='type your name' />
                <br/>
                <label for="password">Password</label><br/>
                <input type='password' name='password' value='' placeholder='type your name' />
                <br/>
                <label for="agree">Profile Picture </label><br/>
                <input type='file' name='image' value='' placeholder='choose photo' multiple />
                <br/>
                <label for="agree">Term and conditions</label>
                <input type='checkbox' name='agree' value='true' />
                <br/>
                <input type='button' value="submit" onClick={()=>{alert('hello')}}/>
             </form>
          </div>
        </>
    );
}

export default Form;