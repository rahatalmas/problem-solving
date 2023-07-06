const express = require('express');
//require('dotenv').config();
const cookieParser = require('cookie-parser');
const app = express();
app.use(express.json());
app.use(cookieParser());


app.get("/",(req,res)=>{
    res.setHeader('set-cookies',['name=howl;HttpOnly:true','movie=howls moving castles']);
    //res.cookie('name','rahat',{httpOnly:true});
    res.send(req.headers);
})

app.listen(8080,(req,res)=>{
    console.log("server running...");
})