const express = require('express');
const cookieParser = require('cookie-parser');
const bodyParser = require('body-parser');
const app = express();
const routes = require('./routes/routes.js');
app.use(express.json());
app.use(cookieParser());
app.use(bodyParser.json({limit: "50mb",}));
// for parsing application/xwww-form-urlencoded
app.use(bodyParser.urlencoded({limit: "50mb",extended: true,}));
//res.setHeader('set-cookies','name=howl');
//es.cookie('name','howl',{httpOnly:true});
app.use("/",(req,res,next)=>{
    console.log("i watch everything...");
    next();
})

app.use("/",routes);

app.listen(8000,(req,res)=>{
    console.log("server running...");
});