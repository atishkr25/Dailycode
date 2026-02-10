const express = require ('express');

const router = express.Router();



//REST API - JSON
router.get('/', handleGetAllusers);

router.get('/:id', handleGetAllusersById)

//Handling POST request 
router.post('/', handleCreateUser);


router.route('/:id')
    .patch(handleupdateUserById)
    .delete(handleDeleteUserById);

    module.exports = router;