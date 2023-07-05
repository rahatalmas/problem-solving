const getData = async (url) =>{
    const res = await fetch(url);
    const data = await res.json();
    return data;
}

const d = getData("https://jsonplaceholder.typicode.com/posts");
d.then(a=>{
  console.log(a);
})