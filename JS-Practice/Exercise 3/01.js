
// console.log("Atish\"". length);


// Use of includes, start with, endswith functions


// includes :-> To chek particular string is present or not in the string 
const str = "Hello Atish";
console.log(str.includes("Atish"));
console.log(str.includes("Hello ", 1)) // after putting here 1 its start searching from index 1 so its return false

// by default the starting searching index is 0





// startwith :->  The startsWith() method checks if a string begins with the specified substring.
console.log(str.startsWith("Hello"));
console.log(str.startsWith("world"))




// endwith :-> The endswith() method cheks if a string ends with the specified substring 
console.log(str.endsWith("Atish")) // true;

console.log(str.endsWith("atish")) // false;



console.log("_____________________________________")
let st = "dignity";
let newst = st.split('');
newst[2] = 'f';

st = newst.join('');
console.log(st);