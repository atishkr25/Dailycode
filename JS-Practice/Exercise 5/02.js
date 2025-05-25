// let nums = [1,2,3,4,5];
// let new_nums = nums.map(num => num*2);

// console.log(new_nums)

// let sum = nums.reduce((acc, x) => (acc+x));
// let multi = nums.reduce((acc, x) => (acc * x));

// console.log("The sum of the arr is ", sum);
// console.log("The multiplication of the arr is ", multi);









//FINGDING THE FACTORIAL OF A NUMBER
function factorial(n) {
    if (n === 0 || n === 1) return 1;
    
    return [...Array(n).keys()].map(i => i + 1) 
        .reduce((acc, num) => acc * num, 1);
};
console.log(factorial(5));
console.log("Factorial of 6 is: ",factorial(6));
