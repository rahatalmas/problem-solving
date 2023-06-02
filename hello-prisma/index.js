const express = require('express');
const cors = require('cors');
const PORT = 8080;

const app = express();
app.use(express.urlencoded({extended:true}))
app.use(express.json())
app.use(cors());

app.get("/",(req,res)=>{
    res.send("hello world");
})
app.post("/register",(req,res,next)=>{
    console.log(req.body)
    res.send(req.body)
})
app.listen(PORT,()=>{
    console.log("server running...")
})