const BlogsData = require('../dummyData/BlogsData')

const getData = (req,res) => {
     console.log(req.headers);
     console.log(typeof(BlogsData));
     res.send(BlogsData);
}

const postData = (req,res) => {
    const data = req.body;
    console.log(data);
    res.send(`post done \ndata :\n${data.title}\n${data.content}`);
}

const updateData = (req,res) => {
    let {name,planet} = req.query;
    console.log(req.params.id, name, planet);
    res.send(`update done \nid: ${req.params.id} \nname: ${name} \nplanet ${planet}`);
}

const deleteData = (req,res) => {
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