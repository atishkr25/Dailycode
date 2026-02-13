const express = require('express');

const userRouter = require('./routes/user');
const connectMongodb = require('./connection');
const {logReqRes} = require('./middleware/index')


const app = express();
const PORT = 8000;


// MongoDB connection
connectMongodb("mongodb://127.0.0.1:27017/mycollections_01");


// Schema designed


//middlware - Plugin
app.use(express.urlencoded({ extended: true }));
app.use(express.json());

app.use(logReqRes("log.txt"));

// Routes 
app.use('/api/users', userRouter); 

app.listen(PORT, () => console.log(`Server is started at PORT ${PORT}`));