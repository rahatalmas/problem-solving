const fileUpload = (req,res) =>{
    console.log(`file uploaded :\n${req.file}`);
}

module.exports = {fileUpload};