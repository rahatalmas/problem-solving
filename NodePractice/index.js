const path = require('path');
const express = require('express');
const cookieParser = require('cookie-parser');
const bodyParser = require('body-parser');
const app = express();
const routes = require('./routes/routes.js');
app.use(express.json());
app.use(cookieParser());
app.use(bodyParser.json({extended:true}));
// for parsing application/xwww-form-urlencoded
app.use(bodyParser.urlencoded({extended: true,})); //limit: "50mb",
//res.setHeader('set-cookies','name=howl');
//es.cookie('name','howl',{httpOnly:true});
app.use("/",(req,res,next)=>{
    console.log("i watch everything...");
    next();
})
app.use('/ files',express.static(path.join(__dirname,'public')));
app.use('/images',express.static(path.join(__dirname,'public/images')));
app.use("/",routes);

app.listen(8000,(req,res)=>{
    console.log("path: " + __dirname);
    console.log("server running...");
});