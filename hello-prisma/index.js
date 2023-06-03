import express from 'express';
import cors from 'cors';
const PORT = 8080;
const app = express();
import  prisma from './prisma/prisma.js';
app.use(express.urlencoded({extended:true}))
app.use(express.json())
app.use(cors());


app.get("/",async (req,res)=>{
    const products = await prisma.Products.findMany({});
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

app.post("/blog", async (req,res,next)=>{
  const blog = await prisma.Blogs.create({
    data: {
      title: req.body.title,
      content: req.body.content,
    },
  })
  console.log(blog)
  res.send(blog)
})

app.listen(PORT,()=>{
    console.log("server running...")
})