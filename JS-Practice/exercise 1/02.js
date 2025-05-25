
// creating a word dictionary of five word
const dictionary = {
    "JavaScript": "A high-level, versatile programming language used for web development.",
    "Algorithm": "A step-by-step procedure for solving a problem or performing a task.",
    "Variable": "A symbolic name associated with a value in programming.",
    "Function": "A block of reusable code that performs a specific task.",
    "Object": "A data structure that stores properties and methods in key-value pairs."
};

function display(word){
    word = word.charAt(0).toUpperCase() + word.slice(1);
    if(dictionary[word]){
        console.log(`\n${word} : ${dictionary[word]}\n`);
    }
    else {
        console.log("the word you are looking for is not our database, thank you");
    }
}

display("JavaScript");
display("javaScript");