const getData = (req,res)=>{
    console.log(req.headers);
    res.send("hello world");
}

const postData = (req,res)=>{
    const data = req.body;
    console.log(data);
    res.send(`post done \ndata :\n${data.name}\n${data.planet}`);
}

const updateData = (req,res)=>{
    let {name,planet} = req.query;
    console.log(req.params.id, name, planet);
    res.send(`update done \nid: ${req.params.id} \nname: ${name} \nplanet ${planet}`);
 }

 const deleteData = (req,res)=>{
    let {name,planet} = req.query;
    console.log(req.params.id, name, planet);
    res.send(`delete done \nid: ${req.params.id} \nname: ${name} \nplanet ${planet}`);
 }


 module.exports = {
    getData,
    postData,
    updateData,
    deleteData
 }