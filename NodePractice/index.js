const path = require('path');
const express = require('express');
const cookieParser = require('cookie-parser');
const bodyParser = require('body-parser');
const cors = require('cors');
const multer = require('multer');
const app = express();
const routes = require('./routes/routes.js');
//app.use(express.json());
//app.use(express.urlencoded({extended:true}));
app.use(cookieParser());
app.use(bodyParser.json({}));
// for parsing application/xwww-form-urlencoded
//app.use(bodyParser.urlencoded({extended: false})); //limit: "50mb",
app.use(cors());
//res.setHeader('set-cookies','name=howl');
//es.cookie('name','howl',{httpOnly:true}

const upload = multer({dest:'public'});

app.use("/",(req,res,next)=>{
    console.log("i watch everything...");
    next();
})
app.use('/files',express.static(path.join(__dirname,'public')));
app.use('/images',express.static(path.join(__dirname,'public/images')));
app.post("/fileUpload",upload.single('file'),(req,res)=>{
    console.log(req.file);
})
app.use("/",routes);

app.listen(8000,(req,res)=>{
    console.log("path: " + __dirname);
    console.log("server running...");
});