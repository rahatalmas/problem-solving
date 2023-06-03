const express = require('express');
const cors = require('cors');
const PORT = 8080;
const app = express();
const { PrismaClient } = require('@prisma/client')
const prisma = new PrismaClient();
app.use(express.urlencoded({extended:true}))
app.use(express.json())
app.use(cors());


app.get("/",async (req,res)=>{
    products = await prisma.Products.findMany({});
    res.send(products);
    console.log(products);
})

app.post("/product", async (req,res,next)=>{
      const product = await prisma.Products.create({
        data: {
          title: req.body.title,
          details: req.body.details,
        },
      })
      console.log(product)
      res.send(product)
})


app.listen(PORT,()=>{
    console.log("server running...")
})