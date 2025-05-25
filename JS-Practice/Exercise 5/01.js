
// using the filter method 
// let arr = [90, 14, 14, 23, 60, 10, 40];
// let filtered_number = arr.filter(num => num%10 === 0);
// let divisible_by_two = arr.filter(num => num%2 === 0);

// console.log(filtered_number);

// console.log(divisible_by_two);

// console.log(arr.length)





//making an arr which store the square of given numbers list
// let arr1 = [10, 20, 30, 40];
// let arr2 = [];
// let idx = 0;
// for(let i=0; i<arr1.length; i++){
//     arr2[idx++] = arr1[i]*arr1[i];
// }

// for(let i in arr2){
//     console.log(arr2[i]);
// }


let nums = [];
let input = -1; 

while (input !== 0) {
    input = parseInt(prompt("Enter a number (0 to stop): "), 10);
    if (input !== 0) { 
        nums.push(input);
    }
}

console.log(nums); 