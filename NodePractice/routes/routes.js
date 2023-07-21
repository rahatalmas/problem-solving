const express = require('express');
const router = express.Router();
const {getData,postData,updateData,deleteData} = require ('../controller/routeControllers.js');


router.get("/",getData);
router.post("/post",postData);
router.put("/update/:id",updateData);
router.delete("/delete/:id",deleteData);

module.exports = router;