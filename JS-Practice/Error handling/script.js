let a = prompt("Enter your age")
// let b = prompt("Enter your second number")

if(isNaN(a)){
    throw SyntaxError('sorry this is not allowed');
}
// let sum = parseInt(a) + parseInt(b);
// try {
//     console.log("The sum is: ", sum);
// } catch (error) {
//     console.log("Errro aa rha hai yar")
// }

try {
    if(a > 18){
        console.log('Yeah! , you are eligibal for vote');    
    }
    else {
        console.log('You are not eligibal for vote');
    }
} catch (error) {
    throw error('error aa rha hai bhai')
}

finally{
    console.log("ab ham finally pr pahuch gye hai")
}



