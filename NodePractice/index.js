const path = require('path');
const crypto = require('crypto');
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
app.use(bodyParser.urlencoded({extended: true})); //limit: "50mb",
app.use(cors());
//res.setHeader('set-cookies','name=howl');
//es.cookie('name','howl',{httpOnly:true}


app.use("/",(req,res,next)=>{
    console.log("i watch everything...");
    next();
})

const storage = multer.diskStorage({
    destination:(req,file,cb)=>{
        cb(null,"public")
    },
    filename:(req,file,cb)=>{
        crypto.pseudoRandomBytes(16, function (err, raw) {
            if (err) return cb(err)
            cb(null, raw.toString('hex') + path.extname(file.originalname))
          })
    }
})

const upload = multer({storage:storage});
app.post('/fileUpload',upload.single("file"),(req,res)=>{
    console.log(req.file)
    res.send('file uploaded');
})

app.use('/files',express.static(path.join(__dirname,'public')));
app.use('/images',express.static(path.join(__dirname,'public/images')));
app.use("/",routes);

app.listen(8000,(req,res)=>{
    console.log("path: " + __dirname);
    console.log("server running...");
});