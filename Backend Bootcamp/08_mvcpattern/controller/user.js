const User = require('../models/user');
const mongoose = require('mongoose');


const handleGetAllusers =  async (req, res) => {
    const allDbUsers = await User.find({});
    // res.setHeader('X-myname', 'atish') // custom header
    return res.json(allDbUsers);
}

const handleGetUsersById = async (req, res) => {
    if (!mongoose.isValidObjectId(req.params.id)) {
        return res.status(400).json({ error: "Invalid User ID" });
    }
    const user = await User.findById(req.params.id);
    if (!user) return res.status(404).json({ error: "User not found" });
    return res.json(user);
} 

const handleCreateUser = async (req, res) => {
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
    });

    return res.status(201).json({ msg: 'user created into mongodb database' });
};

const handleUpdateUserById = async (req, res) => {
    const { id } = req.params;

    if (!mongoose.isValidObjectId(id)) {
        return res.status(400).json({ error: "Invalid User ID" });
    }

    await User.findByIdAndUpdate(
        id,
        { lastName: req.body.last_name },
        { new: true }
    );

    return res.json({ msg: 'User updated successfully' });
};

const handleDeleteUserById = async (req, res) => {
    const { id } = req.params;

    if (!mongoose.isValidObjectId(id)) {
        return res.status(400).json({ error: "Invalid User ID" });
    }

    await User.findByIdAndDelete(id);

    return res.json({ msg: "User deleted successfully" });
};

module.exports = {
    handleGetAllusers,
    handleGetUsersById,
    handleCreateUser,
    handleUpdateUserById,
    handleDeleteUserById,
     
}