const getData = async (url) =>{
    const res = await fetch(url);
    const data = await res.json();
    console.log(data);
    //return data;
}

const d = getData("https://jsonplaceholder.typicode.com/posts");