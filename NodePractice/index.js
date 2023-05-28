const express = require('express');
//require('dotenv').config();
const app = express();
app.use(express.json())

app.listen(8080,(req,res)=>{
    console.log("server running...");
})