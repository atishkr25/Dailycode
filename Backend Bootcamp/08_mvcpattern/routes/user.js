const express = require ('express');
const router = express.Router();

const {
    handleGetAllusers,
    handleGetUsersById, // get
    handleCreateNewUser, // create
    handleUpdateUserById, // update
    handleDeleteUserById // delete   
} = require('../controller/user');


//REST API - JSON
router.get('/', handleGetAllusers);

router.get('/:id', handleGetUsersById)

//Handling POST request 
router.post('/', handleCreateNewUser);


router.route('/:id')
    .patch(ehbgeu3hdhhgsubei
        
    )
    .delete(handleDeleteUserById);

    module.exports = router;