const express = require('express');
const fs = require('fs');
const users = require('./MOCK_DATA.json');
const { json } = require('stream/consumers');

const app = express();
const PORT = 8000;


//middlware - Plugin
app.use(express.urlencoded({ extended: true }))

app.use((req, res, next) => {
    console.log("Hello from middleware 1");
    req.myuserName = "atishkumar";
    next();
})

app.use((req, res, next) => {
    console.log("hello from middlware 2")
    next();
})


// Routes | Basically rednering the simple html to the broweser 
app.get('/users', (req, res) => {
    const html = `
        <ul>
            ${users.map(user => `<li>${user.first_name}</li>`).join('')}
        </ul>
    `;
    return res.send(html);
});


//REST API - JSON
app.get('/api/users', (req, res) => {
    console.log('Im in get route & my usename is : ', req.myuserName);
    res.setHeader('X-myname', 'atish') //this a custom header setting it while responding
    // best practive is :  always add "X" for custom headers
    return res.json(users);
});

app.get('/api/users/:id', (req, res) => {
    const id = Number(req.params.id);
    const user = users.find(u => u.id === id);

    return res.json(user);

})

//Handling POST request 
app.post('/api/users', (req, res) => {
  const body = req.body;

  const newId = users.length + 1;
  const newUser = {id: newId ,  ...body, };

  users.push(newUser);

  fs.writeFile('./MOCK_DATA.json', JSON.stringify(users), (err, data) => {
    if (err) {
      return res.status(500).json({ message: 'Failed to save user' });
    }
    return res.json({status : "success", id : users.length});
  });
});



app.route('/api/users/:id')
    .patch((req, res) => {
        const id = Number(req.params.id);
        const body = req.body;

        const userIndex = users.findIndex(user => user.id === id);

        if (userIndex === -1) {
            return res.status(404).json({ message: 'User not found' });
        }

        users[userIndex] = {
            ...users[userIndex],
            ...body
        };

        fs.writeFile('./MOCK_DATA.json', JSON.stringify(users), (err) => {
            if (err) {
                return res.status(500).json({ message: 'Failed to update user' });
            }

            return res.json({
                status: 'success',
                user: users[userIndex]
            });
        });
    })

    .delete((req, res) => {
        const id = Number(req.params.id);
        const userIndex = users.findIndex(u => u.id === id);

        if (userIndex === -1) {
            return res.status(404).json({ message: "User not found" });
        }

        users.splice(userIndex, 1);

        fs.writeFile('./MOCK_DATA.json', JSON.stringify(users), (err) => {
            if (err) {
                return res.status(500).json({ message: "Failed to delete user" });
            }

            return res.json({
                status: "success",
                message: "User deleted successfully"
            });
        });
    });



app.listen(PORT, () => console.log(`Server is started at PORT ${PORT}`));