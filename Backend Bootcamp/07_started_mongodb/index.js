const express = require('express');
const fs = require('fs');
// const users = require('./MOCK_DATA.json');
const { json } = require('stream/consumers');
const mongoose = require('mongoose');
const { type } = require('os');

const app = express();
const PORT = 8000;


// MongoDB connection
mongoose
    .connect("mongodb://127.0.0.1:27017/mycollection_01", {
    })
    .then(() => console.log("✅ MongoDB connected"))
    .catch((err) => console.error(" MongoDB connection error:", err));


// Schema designed
const userSchema = new mongoose.Schema({
    firstName: {
        type: String,
        required: true,
    },
    lastName: {
        type: String,
    },
    email: {
        type: String,
        unique: true,
    },
    gender: {
        type: String,
    },
    jobTitle: {
        type: String,
    },
});

const User = mongoose.model("user", userSchema);
module.exports = User;


//middlware - Plugin
app.use(express.urlencoded({ extended: true }));
app.use(express.json());

// app.use((req, res, next) => {
//     console.log("Hello from middleware 1");
//     req.myuserName = "atishkumar";
//     next();
// })

// app.use((req, res, next) => {
//     console.log("hello from middlware 2")
//     next();
// })


// Routes | Basically rednering the simple html to the broweser 
app.get('/users', async (req, res) => {
    const allDbUsers = await User.find({});
    const html = `
        <ul>
            ${allDbUsers.map(user => `<li>${user.firstName} - ${user.email}</li>`).join('')}
        </ul>
    `;
    return res.send(html);
});


//REST API - JSON
app.get('/api/users', async (req, res) => {
    const allDbUsers = await User.find({});
    // res.setHeader('X-myname', 'atish') // custom header
    return res.json(allDbUsers);
});

app.get('/api/users/:id', async (req, res) => {
    if (!mongoose.isValidObjectId(req.params.id)) {
        return res.status(400).json({ error: "Invalid User ID" });
    }
    const user = await User.findById(req.params.id);
    if (!user) return res.status(404).json({ error: "User not found" });
    return res.json(user);
})

//Handling POST request 
app.post('/api/users', async (req, res) => {
    const body = req.body;

    if (!body ||
        !body.first_name ||
        !body.last_name ||
        !body.email ||
        !body.gender ||
        !body.job_title) {

        return res.status(400).json({ msg: 'all the fields are required' })
    }

    const result = await User.create({
        firstName: body.first_name,
        lastName: body.last_name,
        email: body.email,
        gender: body.gender,
        jobTitle: body.job_title,
    })
    console.log(result);
    return res.status(201).json({ msg: 'user created into mongodb database' });
});



app.route('/api/users/:id')
    .patch(async (req, res) => {
        if (!mongoose.isValidObjectId(req.params.id)) {
            return res.status(400).json({ error: "Invalid User ID" });
        }
        await User.findByIdAndUpdate(req.params.id, { lastName: req.body.last_name });
        return res.json({ msg: 'Success' });
    })
    .delete(async (req, res) => {
        if (!mongoose.isValidObjectId(req.params.id)) {
            return res.status(400).json({ error: "Invalid User ID" });
        }
        await User.findByIdAndDelete(req.params.id);
        return res.json({ msg: "User deleted successfully" });
    });



app.listen(PORT, () => console.log(`Server is started at PORT ${PORT}`));