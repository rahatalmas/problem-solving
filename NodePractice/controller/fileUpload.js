const multer = require('multer');

const storage = multer.diskStorage({
    destination:(req,file,cb)=>{
        cb(null,'../public/images');
    },
    fileName:(req,file,cb)=>{
        cb(null,`${Date.now()}+${file.originalName}`);
    }
});

const upload = {storage:storage};

const fileUploader = (req,res,next) =>{
    upload.array('file');
    next();
}

module.exports = {fileUploader};